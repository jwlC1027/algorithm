#include <stdio.h>
#include <algorithm>
typedef
struct circle{
    int ax,ay,ac;
    int bx,by,bc;
}cir;
int main()
{
    cir a;
    scanf("%d %d %d %d %d %d",&a.ax,&a.ay,&a.ac,&a.bx,&a.by,&a.bc);
    if((a.ax-a.bx)*(a.ax-a.bx)+(a.ay-a.by)*(a.ay-a.by)>=(a.ac+a.bc)*(a.ac+a.bc)){
        printf("false");
    }
    else{
        printf("true");
    }
}