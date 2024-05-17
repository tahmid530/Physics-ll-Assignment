#include <stdio.h>
#include <math.h>

int main()
{
    double lambda, theta, d;

    printf("Enter the wavelength (in nm or Nanometer): ");
    scanf("%lf", &lambda);

    if (lambda < 380 || lambda > 750)
    {
        printf("\033[0;31m");
        printf("Out of the range. Please enter a valid number.\n");
        printf("\033[0m");
        return 0;
    }

    printf("Enter the angle (in degrees): ");
    scanf("%lf", &theta);

    double theta_rad = theta * M_PI / 180.0;

    printf("Enter the separation between the slits (in µm or Micrometer): ");
    scanf("%lf", &d);

    double convert_d = d * 1e3;

    if (lambda == convert_d)
    {
        printf("Lambda is equal to slits separation\n");
    }
    else if (lambda > convert_d)
    {
        printf("Lambda is greater than slits separation\n");
    }
    else
    {
        int order = floor((convert_d * sin(theta_rad)) / lambda);
        if (order >= 0)
        {
            printf("\033[0;32m");
            printf("%d-th order maxima\n", order);
            printf("\033[0m");
        }
        else
        {
            printf("\033[0;31m");
            printf("No maxima found for given angle.\n");
            printf("\033[0m");
        }
    }
    return 0;
}