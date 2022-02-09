#include<stdio.h>
int input_number()
{
  int a;
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  
  if(n>2)
 {
   printf("%d is a composite number :");
 }
 else
 {
   printf(" %d is not a composite no :");
 }
 return n; 

}
void output(int n, int composite)
{
  composite=n;
printf("%d is a composite no :",composite);
}
int main()
{
 int a , composite; 
 a=input_number();
 composite=is_composite(a);
 output(a,composite);
}
