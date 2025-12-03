//wap which will take a character as an input from the user and check it is a vowel or consonant

#include<stdio.h>
void main()
{

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
long long nCr(int n, int r) {
    if (r > n) {
        return 0; // Not defined if r > n
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    printf("Value of %dC%d = %lld\n", n, r, nCr(n, r));
}
}