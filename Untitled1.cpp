 #include<stdio.h>
  int main()
{
 int a, b;
 printf("Enter first number ");
 scanf("%d", &a);
 printf("Enter second number ");
 scanf("%d", &b);
 a= a+b;
 b= a-b;
 a= a-b;
 printf("value after swapping ");
 printf("value of first number  %d"\n, a );
 printf("value of second number %d"\n, b );
 return 0;
 
}

