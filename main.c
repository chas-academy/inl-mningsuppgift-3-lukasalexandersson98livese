#include <stdio.h>
#include <math.h>


// This is where you add the function calculate_hypotenuse
float calculate_hypotenuse( float a, float b){
    float po1 = pow(a, 2);
    float po2 = pow(b, 2);
    float c = po1 + po2;
    float result = sqrt(c);

    return result;
}

int main() {
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 5.00

    //Changing the values
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 13.00

    return 0;
}