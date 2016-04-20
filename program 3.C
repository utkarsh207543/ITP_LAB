#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
Int main()
{
   double a, b, c, s, area;
   printf("Enter the sides of triangle \n");
   scanf_s("%lf%lf%lf",&a,&b,&c);
  
  s = (a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  
  printf("Area of triangle = %.2lf \n", area);
  system("pause");
  return 0;
}
