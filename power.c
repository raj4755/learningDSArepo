#include <stdio.h>


int power_recursive(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

// Find power of a number using Iterative Mode.
long long int power_iterative(int m,int n){
    for (int i = 0; i < n; i++)
    {
        val = val * m;
    }
    
    return val;
}
int main()
{
    int m, n;
    long long int val = 1;
    printf("Enter the number you want to evaluate the power\n");
    scanf("%d", &m);
    printf("Enter the power of that number\n");
    scanf("%d", &n);
    
    printf("The value of %d to the power %d using Iterative Method is: %d", m, n, power_iterative(m, n));
    
    printf("The value of %d to the power %d using Recursive Method is: %d", m, n, power_recursive(m, n));
    
    return 0;
}
