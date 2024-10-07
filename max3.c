#include <stdio.h>
int max3(int a, int b, int c)
{   
    return (((a>=b)&&(a>=c))?a:((b>=c)?b:c));
}

int main(){
    printf(("max: %d\n", max3(6, 7,3)));
}