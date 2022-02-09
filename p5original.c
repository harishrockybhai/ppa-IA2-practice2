#include<stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
int gcd(int a, int b)
{
  for(int i=0; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    gcd = i;
  }
  return gcd;
  
}
void output(int a, int b, int gcd)
{
  printf("gcd of %d and %d is %d",a,b,gcd);
}
int main()
{
  int a,b,c;
  a=input();
  c = gcd(a,b);
  output(a,b,c);
  return 0;
}