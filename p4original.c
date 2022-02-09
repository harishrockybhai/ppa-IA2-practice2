#include<stdio.h>
int input_array_size()
{
 int a;
 printf("enter the array size :");
 scanf("%d",&a);
 return a;
}
void input_array(int n, int a[n])
{
  for(int i=0; i<n; i++)
  {
    printf("enter the array no :");
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n, int a[n])
{
  int sum, j=0;
  for(j=0; j<n; j++)
  {
    sum =sum+a[j];
  }
  return sum;
}
void out_put(int sum)
{
  printf("%d",sum);
}
int main()
{
  int n, a[n],sum;
  n=input_array_size();
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  out_put(sum);

}