#include <stdio.h>
#include <math.h>

void to_polar(double x, double y, double *r, double *theta);

int main(void)
{
    double x, y;
    double r, theta;
    scanf("%lf %lf", &x, &y);
    /* TODO: to_polar を呼び出す */

    printf("%.3f,%.2f", r, theta);
    return 0;
}

void to_polar(double x, double y, double *r, double *theta)
{
    /* TODO: r と theta をポインタ引数を通じて計算・格納 */
}
