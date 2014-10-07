/* @JUDGE_ID:  12991WW  445  C++   */

#include <stdio.h>
#include <iostream.h>
#include <ctype.h>
#include <string.h>

main(){
     char s[10000];
     char word;
     char m;
     int t;
     int i,j;

     while ( gets(s) !=NULL)
     {
         if (strlen(s)==0)
         {
            cout <<"\n";
            continue;
         }
         t=0;
         for (i=0;i<=strlen(s)-1;i++)
         {
             m=s[i];
             word=m;
             if ( isdigit(m) !=0 )
                t += m-'0';
             else
             {
                if (m == '!')
                {
                      cout <<"\n";
                      continue ;
                }
                if (m == 'b') word = ' ';
                for (j=1; j<=t; j++)
                {
                    cout << word;
                }
                t=0;
             }
         }
         cout << "\n";
     }
}