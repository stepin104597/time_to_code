#include <stdio.h>
int add(int a[])
{   int resulta=0;
    int countadd;
    for(countadd=0;countadd<5;countadd++)
    {  resulta = resulta + a[countadd];
    }
    return(resulta);
}
int sub(int s[])
{   int results=s[0];
    int countsub;
    for(countsub=1;countsub<5;countsub++)
    {  results = results - s[countsub];
    }
    return(results);
}
int main()
{   int resultadd=0,resultsub=0;
    int arr1[5]={1100,20,36,44,50};
    int (*fpadd)(int []);
    int (*fpsub)(int []);
    fpadd=add;
    fpsub=sub;
    resultadd = (*fpadd)(arr1) ;
    resultsub = (*fpsub)(arr1);
    printf("The sum of the integers is %d\n", resultadd);
    printf("The difference of the integers is %d\n", resultsub);
}
