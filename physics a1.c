#include<stdio.h>
#include<math.h>
int main(){
double lambda1 = 530;
double lambda2 = 700;
int m1 = 3, m2 = 2;
double theta1 = 65.0;
double theta1_rad = theta1 *(3.1416/180);
double d =(m1*lambda1)/sin (theta1_rad);
double theta2_rad = asin((m2*lambda2)/d);
double theta2 = theta2_rad*(180.0/3.1416);
printf("The second order-bright spot for red light occurs at angle:%.2f degrees\n",theta2);
return 0;
}



#include<stdio.h>
#include<math.h>
const char *getcolor(double wavelenght)
{
    double wavelength;

    if (wavelength>= 380&&wavelength<450)
        return"violet";
    if (wavelength>= 450&&wavelength<485)
        return"blue";
    if (wavelength>= 485&&wavelength<500)
        return"cyan";
    if (wavelength>= 625&&wavelength<=750)
        return"red";
    return"Not in visible specturm";

}
int main()
{
    int m;
    double theta,d,lambda;
    printf("Enter diffraction angle (theta in degrees):");
    scanf("%1f",&d);
    double theta_rad=theta*(3.1416/180);
    lambda = (d*sin(theta_rad))/m*1000;
    printf("wavelength:%2fnm\n",getcolor(lambda));
    return 0;
}
