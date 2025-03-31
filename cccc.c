#include<stdio.h>
#include<math.h>
const char* getcolor(double wavelength)
{
    if(wavelength >= 380 && wavelength < 450)
        return "Violet";
    if(wavelength >= 450 && wavelength < 485)
        return "Blue";
    if(wavelength >= 485 && wavelength < 500)
        return "Cyan";
    if(wavelength >= 500 && wavelength < 565)
        return "Green";
    if(wavelength >= 565 && wavelength < 590)
        return "Yellow";
    if(wavelength >= 590 && wavelength < 625)
        return "Orange";
    if(wavelength >= 625 && wavelength <= 750)
        return "Red";
    return "Not in visible spectrum";
}
int main()
{
    int m;
    double theta, d, lambda;
    printf("Enter order of diffraction (m):");
    scanf("%d", &m);
    printf("Enter diffraction angle (theta in degrees):");
    scanf("%lf", &theta);
    printf("Enter slit separation (d in micrometers):");
    scanf("%lf", &d);
    double theta_rad = theta*(3.1416/180.0);
    lambda = (d*sin(theta_rad))/m*1000;
    printf("Wavelength:%.2f nm\n",lambda);
    printf("color:%s\n",getcolor(lambda));
    return 0;
}
