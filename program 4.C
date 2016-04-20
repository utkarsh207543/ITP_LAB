#include<stdio.h>
#include<math.h>
 
Int main()
{
   float p, r, t, si, ci;
    printf("\n Enter priciple, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    ci = p * pow((1 + r/100), t) - p;
    printf("\n Simple Interest: %.2f", si);
    printf("\n Compound Interest: %.2f", ci);
    
    getch();  
    return 0;
}
