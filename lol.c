#include "stdio.h"

int main()
{
  printf ("kx + b = 0\n");
  
  float k, x, b;
  
  printf("enter k: ");
  scanf("%f", &k);
  printf("enter b: ");
  scanf("%f", &b);
  
  if (k - (int)k == 0 && b - (int)b == 0)
  {    
    if (b < 0) printf("%.0fx - %.0f = 0\n", k, -b);
    else printf("%.0fx + %.0f = 0\n", k, b);
  }
  else if(k - (int)k == 0 && b - (int)b != 0) 
  {
    if (b < 0) printf("%.0fx - %.1f = 0\n", k, -b);
    else printf("%.0fx + %.1f = 0\n", k, b);
  }
  else if(k - (int)k != 0 && b - (int)b == 0)
  {
    if (b < 0) printf("%.1fx - %.0f = 0\n", k, -b);
    else printf("%.1fx + %.0f = 0\n", k, b);
  }
  else
  {
    if (b < 0) printf("%.1fx - %.1f = 0\n", k, -b);
    else printf("%.1fx + %.1f = 0\n", k, b);
  }

  if (k - (int)k == 0 && b - (int)b == 0)
  {    
    if (b < 0) printf("%.0fx = %.0f\n", k, -b);
    else printf("%.0fx = -%.0f\n", k, b);
  }
  else if(k - (int)k == 0 && b - (int)b != 0) 
  {
    if (b < 0) printf("%.0fx = %.1f\n", k, -b);
    else printf("%.0fx = -%.1f\n", k, b);
  }
  else if(k - (int)k != 0 && b - (int)b == 0)
  {
    if (b < 0) printf("%.1fx  =  %.0f\n", k, -b);
    else printf("%.1fx = -%.0f\n", k, b);
  }
  else
  {
    if (b < 0) printf("%.1fx = %.1f\n", k, -b);
    else printf("%.1fx = -%.1f\n", k, b);
  }
 if (k - (int)k == 0 && b - (int)b == 0)
  {    
    if (b < 0) printf("x = %.0f / %.0f\n", -b, k);
    else printf("x = %.0f / -%.0f\n", b, k);
  }
  else if(k - (int)k == 0 && b - (int)b != 0) 
  {
    if (b < 0) printf("x = %.0f / %.1f\n", -b, k);
    else printf("x = %.0f / -%.1f\n", b, k);
  }
  else if(k - (int)k != 0 && b - (int)b == 0)
  {
    if (b < 0) printf("x = %.1f / %.0f\n", -b, k);
    else printf("x = %.1f / -%.0f\n", b, k);
  }
  else
  {
    if (b < 0) printf("x = %.1f / %.1f\n", -b, k);
    else printf("x = %.1f / -%.1f\n", b, k);
  }
  
  x = -b / k;

  if (x - (int)x == 0) printf("x = %.0f", x);
  else printf("x = %.1f", x);
  
  getch();
}
