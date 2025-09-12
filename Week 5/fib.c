#include<stdio.h>
int fibonacci (int n){
    if (n<=0)
    return 0;
    else if (n==1)
    return 1;
    else
    return fibonacci (n-1) + fibonacci(n-2);

}
int main() {
    int num_terms =10;
    printf ("fibonaci series :");
    for (int i=0; i<num_terms; i++) {
        printf ("%d", fibonacci (i));

    } 
    return 0;
}