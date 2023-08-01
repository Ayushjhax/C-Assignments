#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result_gcd = gcd(num1, num2);
    int result_lcm = lcm(num1, num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, result_gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, result_lcm);

    return 0;
}
