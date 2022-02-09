#include<stdio.h>
int input_side()
{
  int a;
  scanf("%d ",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  if(a=b)
  {
    if(a=c)
    {
      return a;
    }
    else
    {
      return c;
    }

    
  }
  else
  {
    if(b=c)
    {
      return b;
    }
    else
    {
      return c;
    }

    
  }
}
void output(int a, int b, int c, int isscalene)
{
  isscalene=(a,b,c);
  printf("the scalene is %d",isscalene);
}
int main()
{
  int x, y,z,isscalene;
  x=input_side();
  y=input_side();
  z=input_side();
  isscalene=check_scalene(x,y,z);
  output(x,y,z,isscalene);
}
