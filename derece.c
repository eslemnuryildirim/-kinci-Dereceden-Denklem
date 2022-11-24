#include <stdio.h>
#include <math.h>
 
void main(void)
{
      float x,x1,x2;
      int a,b,c,delta;
 
      printf("\n İlk katsayıyı girin :"); scanf("%d",&a);
      printf("\n İkinci katsayıyı girin :"); scanf("%d",&b);
      printf("\n Üçüncü katsayıyı girin :"); scanf("%d",&c);
 
      delta = pow(b,2) - 4*a*c; 
      printf("Denklemin şu şekilde = %dx^2+%dx+%d",a,b,c);

      x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);
 
      if (delta < 0)
            printf("\n Reel kök yoktur.\n");
      else if (delta == 0)
      {
            printf("Denklem çift katlıdır .\n");
            printf ("X1 = X2 = %.2f",x1);
      }
      else
      {
          printf("\n\nDenkleminin Kokleri {%.2f,%.2f}",x1,x2);
      }
 
      return ;
}











		

