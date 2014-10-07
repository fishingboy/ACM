#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n,nn;
    char name[12];
    char outname[12];
    char s[10][12];
    long in[10]={0};
    long out[10]={0};
    long outc=0,outn;
    int i,j;

    while (cin>>n)
    {
        for (i=1;i<=n;i++)
        {
           cin >>s[i];
        }
        
        for (nn=1;nn<=n;nn++)
        {
            outn=outc=j=0;
            cin >>name>>outc>>outn;
            if (outn!=0)
               outc=outc-(outc % outn);
            else
               outc=0;


            for (i=1 ;i<=n;i++)
            {
                if (strcmp (name,s[i])==0 ) break;
            }
    
            out[i]=outc;
            for (i=1;i<=outn;i++)
            {
                cin >>name;
                for (j=1;j<=n;j++)
                {
                    if (strcmp(name,s[j]) ==0 ) break;
                }
                in[j]=in[j]+(outc/outn);
            }
        }
        
        for (i=1;i<=n;i++)
        {
          cout <<s[i]<<" ";
          cout <<in[i]-out[i]<<"\n";
          in[i]=out[i]=0;
        }
        cout <<"\n";
    }
    return 0;
}
