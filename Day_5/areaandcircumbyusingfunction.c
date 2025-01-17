#include <stdio.h>
// Function to calculate the area of a circle
float calculate_area(float r) {
    return 3.14*r*r;
}
// Function to calculate the circumference of a circle
float calculate_circumference(float r) {
    return 2 * 3.14 * r;
}
int main() {
    float r, area, circum;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = calculate_area(r);
    circum = calculate_circumference(r);
    // Output the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circum);
    return 0;
}
