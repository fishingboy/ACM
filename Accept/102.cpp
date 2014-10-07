#include <iostream>

int main()
{
  int b1[3],b2[3],b3[3];
  int fx[]={1, 1, 3, 3, 2, 2};
  int fy[]={3, 2, 1, 2, 1, 3};
  int fz[]={2, 3, 2, 1, 3, 1};
  int mini,min,total;
  int i,sum;

    /* B=1  G=2  C=3 */
    /* BCG, BGC,CBG,CGB,GBC,GCB */
    while (std::cin >> b1[1] >> b1[2] >> b1[3])
    {
        std::cin >> b2[1] >> b2[2] >> b2[3];
        std::cin >> b3[1] >> b3[2] >>b3[3];

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
            std::cout <<"BCG";
        }
        else if (mini==1)
        {
            std::cout <<"BGC";
        }
        else if (mini==2)
        {
            std::cout <<"CBG";
        }
        else if (mini==3)
        {
            std::cout <<"CGB";
        }
        else if (mini==4)
        {
            std::cout <<"GBC";
        }
        else if (mini==5)
        {
            std::cout <<"GCB";
        }
        std::cout << " " << min << "\n";
    }
    return 0;
}
