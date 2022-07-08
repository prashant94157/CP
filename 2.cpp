#include<stdio.h>
int fun(int x[]);
int main()
{
int a[5]={1,2,3,4,5};
for(int i=0;i<5;i++)
{
printf("hello%d\n",a[i]);
}
int z=fun(a);
for(int i=0;i<5;i++)
{
printf("acer%d\n",a[i]);
}
printf("%d",z);
}
int fun(int x[])
{
int i;
for( i=0;i<5;i++)
{
printf("fun%d\n",x[i]);
}

return (x[0]);


}