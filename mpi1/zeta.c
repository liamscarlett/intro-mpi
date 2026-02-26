
#include <stdio.h> 
#include <math.h>

int main(int argc, char *argv[]) { 
    int		i;
    double	total,pi,exact;

    pi=3.1415926536;
    exact=pi*pi / 6.0;

    total=0.0;
    for (i=1;i<=100000;i++) {
	total+= 1.0/pow((double) i,2);
    }
    printf("total=%.15f   exact=%.15f\n",total,exact);

    return 0;
}
