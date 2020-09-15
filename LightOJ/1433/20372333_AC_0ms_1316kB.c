#include<stdio.h>
#include<math.h>
int main()
{
  int test,i;
  double Ox, Oy, Ax, Ay, Bx, By,A,B,C,c,arc;
scanf("%d",&test);
for(i=1;i<=test;i++){
    scanf("%lf%lf%lf%lf%lf%lf",&Ox,&Oy, &Ax, &Ay, &Bx, &By);
    A=sqrt(((Ox-Ax)*(Ox-Ax))+((Oy-Ay)*(Oy-Ay)));
    C=sqrt(((Ax-Bx)*(Ax-Bx))+((Ay-By)*(Ay-By)));
    c=acos((2*A*A-C*C)/(2*A*A));
    arc=c*A;
    printf("Case %d: %lf\n",i,arc);
}
}