#include <stdio.h>
#include <math.h>

int main()
{

    double lambda, a, ans;
    double theta_degrees = 45;
    double theta_radians = (theta_degrees * M_PI) / 180;
    double m = 1;

    ans = a / lambda;
    ans = 1 / sin(theta_radians);

    printf("Here, a / lambda = %lf or Root 2\n", ans);
    printf("So, a = 1.414214 or (Root 2) & lambda = 1\n");
    printf("For the first diffraction minimum at %.f degrees:\n", theta_degrees);
    printf("Ratio of slit width (a) to wavelength (lambda) = 1.414214 : 1\n");

    return 0;
}
