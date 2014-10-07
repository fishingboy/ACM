#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define int_length 9
#define int_max 1000000000
#define arr_size 13
#define arr_size2 600

int charToint(char *s,int *a);
int aBiggerb(int *a,int *b);

int main(){
	int *ans[arr_size2],ans_i[arr_size2]={0};
	int i,j,max_i,temp,arr_maxi;
	char s1[101],s2[101];
	int a[arr_size],b[arr_size],ai,bi;
	int no_start,no_end;
	
	/* Point array */
	for(i=0;i<arr_size2;i++){
		ans[i] = (int *)malloc(sizeof(int)*arr_size);
		for(j=0;j<arr_size;j++) ans[i][j]=0; 
	}

	/* Cal Fibonacci Table */
	max_i=0;
	ans[0][0]=1;ans[1][0]=1;ans[2][0]=2;	
	for(i=3;i<600;i++){
		for(j=0;j<=max_i;j++){
			temp = ans[i-1][j] + ans[i-2][j];
			ans[i][j]   += temp % int_max;
			ans[i][j+1] += temp / int_max;
			if(j==max_i && temp >= int_max) max_i++;
		}
		ans_i[i] = max_i;
	}	
	arr_maxi = i-1;

	while (scanf("%s %s",s1,s2)==2){
		if(strcmp(s1,"0")==0 && strcmp(s2,"0")==0) break;

		for(i=0;i<arr_size;i++) a[i] = b[i] = 0;

		ai = charToint(s1,a);
		bi = charToint(s2,b);

		/* find >a */
		for(i=1;i<=arr_size2;i++){
			if(ans_i[i] >= ai) break;
		}
		j=i;
		for(i=j;i<=arr_size2;i++){
			if ( aBiggerb(ans[i],a) ) break;
		}
		no_start = i;

		/*  find < b  */
		for(i=arr_maxi;i>=no_start;i--){
			if(ans_i[i] <= bi+1) break;
		}
		j=i;
		for(i=j;i>=no_start;i--){
			if (aBiggerb(b,ans[i])) break;
		}
		no_end = i;

		/* print answer */
		printf("%d\n",no_end - no_start+1);
	}

	return 0;
}

/* cut array */
int charToint(char *s,int *a){
	int i,j,ai;
	char temp_int[int_length+1];
	
	ai=0;
	for (i=strlen(s); i>=0; i-=int_length){
		if (i>=int_length){
			for(j=0;j<int_length;j++) temp_int[j] =s[i+j-int_length];
		}else{
			for(j=0;j<i;j++) temp_int[j]=s[j];
		}
		temp_int[j]='\0';
		a[ai++] = atoi(temp_int);
	}
	return ai-1;
}

/* a>b? */
int aBiggerb(int *a,int *b){
	int i;
	for(i=arr_size-1;i>=0;i--){
		if (a[i]>b[i]){ 
			return 1;
		}else if (a[i]<b[i]){
			return 0;
		}
	}
	return 1;
}