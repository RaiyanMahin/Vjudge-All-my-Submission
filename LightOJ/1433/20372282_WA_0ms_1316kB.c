#include <stdio.h>
#include <math.h>
#define PI 2*acos(0.0)
int main()
{
    int tst, i;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
    double ox, oy, ax, ay, bx, by;
    double oa, ob, ab, ans, angle, perameter,cos,c,d;
    scanf("%lf%lf%lf%lf%lf%lf", &ox, &oy, &ax, &ay, &bx, &by);
    c = ox-ax; d= oy-ay;
    oa = pow(c, 2) + pow(d,2);
    oa = sqrt(oa);
    ob = pow((ox-bx), 2) + pow((oy-by),2);
    ob = sqrt(ob);
    ab = pow((bx-ax), 2) + pow((by-ay),2);
    ab = sqrt(ab);
    perameter = 2*PI*oa;
    cos = (pow(oa,2) + pow(ob,2) + pow(ab,2))/(2*oa*ob);
    angle = acos(cos);
    ans = (perameter/360.00)/angle;
    printf("Case %d: %lf\n", i,angle);
    }
    return 0;
}