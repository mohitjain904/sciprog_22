#include <stdio.h>

int main() {
    int i, n;
    /* Initialize first and second term */
    int a = 0, b = 1;
    /* Initialize the next term  */
    int c = a + b;
    /* Get number of terms */
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    /* Print the first two terms a and b */
    printf("\nFibonacci Series: %d, %d, ", a, b);
    /* Print 3rd to nth term */
    for (i = 3; i <= n; i++) {
        printf("%d, ", c);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
