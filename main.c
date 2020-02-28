#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter an number: ");
    scanf("%f", &x); // note change of %d to %f
    // Complete the y = line below
    y = (x+2) / (x-1) ;
    printf("Y: %f\n", y);// hello my friend you need to understand this is not importnat
    return 0;
}
