/* @JUDGE_ID:  12991WW  333  C++  */

#include <stdio.h>
#include <iostream.h>
#include <string.h>
#include <ctype.h>

void pid(char id[1000]) {
     int i;
     for (i=0;i<=strlen(id)-1;i++){
	 if ( id[i] !=' ') cout <<id[i];
     }
}


void iscorrect(char id[1000]){
     int i;
     int t=0;
     int sum[10]={0};
     char m;

     for (i=0;i<=strlen(id)-1;i++){
	  m=id[i];
	  if ( isdigit(m) !=0 ){
	      t++;
	      if (t>10) break;
	      sum[t]=m-'0';
	  }else if (m=='X' ){
	      t++;
	      if (t>10) break;
	      sum[t]=10;
	 }
     }

     if (t !=10){
	  pid(id);
	  cout <<" is incorrect.\n";
     }else{
	  for (i=2;i<=10;i++){
	      sum[i] += sum[i-1];
	  }
	  for (i=2;i<=10;i++){
	      sum[i] += sum[i-1];
	  }
	  pid(id);

	  if ( sum[10] % 11 == 0 )
	       cout <<" is correct.\n";
	  else
	       cout <<" is incorrect.\n";

     }
}


main(){
     char id[1000];


     while (gets(id) !=NULL){
	 iscorrect(id);
     }
}