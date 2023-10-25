#include <stdio.h>

#include <math.h>

int main (void) {

  float base;
  float height;
  float area;
  float perimeter;
  float H;


fprintf ("enter the base of a right triangle: \n");
  
  fscanf("%f", &base);

  fprintf (" enter the height of a right triangle: \n");
    
  fscanf("%f", height);

  
        H = sqrt((height*height)+(base*base));

        area =((base*height)/2);

	perimeter = (H + base + height);
  
fprintf (stdout, "Height:    %10.2f cm\n",height);
fprintf (stdout, "Base:      %10.2f cm\n",base);
fprintf (stdout, "Area:      %10.2f cm*cm\n",area);
fprintf (stdout, "Perimeter: %10.2f cm\n",perimeter);

	return 0;
}
