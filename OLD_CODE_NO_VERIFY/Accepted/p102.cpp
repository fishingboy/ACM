#include <stdio.h>
#include <iostream.h>

main()
{
  int b1[3],b2[3],b3[3];
  int fx[]={1, 1, 3, 3, 2, 2};
  int fy[]={3, 2, 1, 2, 1, 3};
  int fz[]={2, 3, 2, 1, 3, 1};
  int mini,min,total;
  int i,sum;

    /* B=1  G=2  C=3 */
    /* BCG, BGC,CBG,CGB,GBC,GCB */
    while (scanf("%d %d %d",&b1[1],&b1[2],&b1[3])==3)
    {
        scanf("%d %d %d",&b2[1],&b2[2],&b2[3]);
        scanf("%d %d %d",&b3[1],&b3[2],&b3[3]);

        sum=mini=0;
        for (i=1;i<=3;i++)
        {
            sum=sum+b1[i]+b2[i]+b3[i];
        }

        min = sum - b1[1] - b2[3] - b3[2];

        for (i=1;i<=5;i++)
        {
            total=sum-b1[fx[i]]-b2[fy[i]]-b3[fz[i]];
            if (total<min)
            {
                min=total;
                mini=i;
            }
        }

        if (mini==0)
        {
            cout <<"BCG";
        }
        else if (mini==1)
        {
            cout <<"BGC";
        }
        else if (mini==2)
        {
            cout <<"CBG";
        }
        else if (mini==3)
        {
            cout <<"CGB";
        }
        else if (mini==4)
        {
            cout <<"GBC";
        }
        else if (mini==5)
        {
            cout <<"GCB";
        }
        cout <<" "<<min <<"\n";
    }
}