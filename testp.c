#include<stdio.h>
int myfact(int num);
int main()
{
    int i;
int num=3;
int result;
result=myfact(45);
printf("result=%d",result);
return 0;
}
int myfact(int num)
{
    int result;
    if(num==0)
    return 1;
    else
    result=num*myfact(n-1);
    return result;
}
