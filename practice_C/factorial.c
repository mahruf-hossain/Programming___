#include <stdio.h>

long long int factorial(int n){
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main(void){
    int number;
    printf("Enter the number: \n");
    scanf("%d", &number);

    printf("The factorial of the given number is %lld", factorial(number));
} 
