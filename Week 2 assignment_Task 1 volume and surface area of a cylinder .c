#include<stdio.h>
#define PI 3.142
int main()
{
float radius,height;
float volume,surfacearea;
printf("Enter the radius:");
scanf("%f",&radius);
printf("Enter the height:");
scanf("%f", &height);
volume=PI*radius*radius*height;
surfacearea = 2*PI*radius*radius + 2*radius *height;
printf("volume = %.2f\n",volume);
printf("surface area =%.2f\n",surfacearea);
return 0;
}
    