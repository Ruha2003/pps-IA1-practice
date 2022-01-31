#include<stdio.h>
int main()
{
  int a,b,c,big;
  printf("enter a value for a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
    big=a;
  }
  else if(b>a && b>c)
  {
    big=b;
  }
  else if(c>a && c>b)
  {
    big=c;
  }
  printf("the biggest number is %d",big);
}