#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter 3 numbers\n");
  scanf("%d %d %d",&a,&b,&c);
  if((a>b)&&(a>c))
  {
  printf("%d is big\n",a);
  }
  else if((b>a)&&(b>c))
  {
  printf("%d is big\n",b);
  }
  else
  {
  printf("%d is big",c);
  }
  return 0;
}
