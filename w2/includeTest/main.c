#include <stdio.h>
#include "point.h"
#include "pointfunc.h"

int main(){
    Point p1 ={0,0};
    Point p2 = {1,1};

    printf("distance: %f\n", calcDist(p1, p2));

    return 0;
}