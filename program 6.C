#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a ;
  printf("Enter the ASCII code : ");
  scanf("%d", &a);
  printf("Character related to ASCII value %d is %c." , a,a);
  getch();
  
  system("pause");
  return 0;
}
