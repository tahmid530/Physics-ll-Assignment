#include <stdio.h>
#include <math.h>

int main()
{
    double lambda, theta, d;

    printf("Enter the wavelength (in nm): ");
    scanf("%lf", &lambda);

    if (lambda < 380 || lambda > 750)
    {
        printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }

    double convert_lambda = lambda * 1e-9;

    printf("Enter the angle (in degrees): ");
    scanf("%lf", &theta);

    double theta_rad = theta * M_PI / 180.0;

    printf("Enter the separation between the slits (in mm): ");
    scanf("%lf", &d);

    double convert_d = d * 1e-6;

    int order = floor((convert_d * sin(theta_rad)) / (convert_lambda));
    printf("%d-th order maxima\n", order);

    return 0;
}
