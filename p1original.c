#include<stdio.h>
void input(float *base, float *height)
{
  scanf("%f %f",base,height);
}
void find_area(float base, float height, float *area)
{
  *area=0.5*base*height;
}
void output(float base, float height , float area)
{
  printf("the area triangle with base %f and %f is %f",base,height,area);
}
int main()
{
  float base , height,area;
  printf("enter the base and height :");
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
}




/* gcc -g p1original.c
 ./a.out
1.000000
2.000000
the area triangle with base 1.000000 and 2.000000 is 1.000000 ^C
 */
