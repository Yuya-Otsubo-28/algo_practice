#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int    *insertion_sort(int n, int *a) {
    int tmp;
    int j;

    for (int i = 1; i < n; i++) {
        tmp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > tmp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
    }
    return (a);
}

int main(void) {
    int n;
    int *a;

    scanf ("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    if (!a)
        return (-1);
    bzero(a, n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    a = insertion_sort(n, a);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("¥n");
    return (0);
}