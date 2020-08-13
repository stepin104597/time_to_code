#include <stdio.h>

int* ascend(int *p)
{
    int temp;
    int cnt1,cnt2;
    for(cnt1=0;cnt1<5;cnt1++)
    {
      for(cnt2=cnt1+1;cnt2<5;cnt2++)
      {
          if(*(p+cnt2)<*(p+cnt1))
          {
            temp=*(p+cnt1);
            *(p+cnt1)=*(p+cnt2);
            *(p+cnt2)=temp;
          }
      }
    }
      return(p);
}

int main()
{  int arry[] ={1,23,5,20,50};
   int l = sizeof(arry)/sizeof(int);
   int j;
   int *parry = &arry;
   int *psort = ascend(arry);
   for(j=0;j<l;j++)
    {
      printf("%d\t",*(psort+j));
    }
    return 0;
}
