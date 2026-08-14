/*Q4: Write a program to calculate the area and circumference of a circle given its radius.
*/

#include <stdio.h>

int main(){
    int r;

    printf("Enter the radius: ");
    scanf("%d", &r);

    printf("--------FOR INT VALUES-------");
    int cir = 2 * 3.14 * r;
    int area = 3.14 * r * r;

    printf("Area of the circle: %d\n", area);
    printf("Circumference of the circle: %d\n", cir);

    printf("-------FOR FLOAT VALUES--------");
    float cir1 = 2 * 3.14 * r;
    float area1 = 3.14 * r * r;

    printf("Area of the circle: %f\n", area1);
    printf("Circumference of the circle: %f\n", cir1);

    return 0;
}
