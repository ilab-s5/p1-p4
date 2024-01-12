#include<stdio.h>
int a[100];
int max, min;
void maxmin(int, int);
int main() {
    printf("MUHAMMAD SAHAL NURDIN_51421075");
    int i, num;
    printf("\n\t\t\tMaximum Dan Minimum\n\nMasukkan Banyak Angka: ");
    scanf("%d", &num);
    printf("\nMasukkan Angka-Angkanya:\n");
    for (i = 0; i < num; i++) scanf("%d", &a[i]);
    printf("\nAngka-angkanya adalah\n");
    for (i = 0; i < num; i++) printf("%d ", a[i]);
    max = a[0];
    min = a[0];
    maxmin(0, num - 1);
    printf("\n\nMaksimum Angka: %d\nMinimum Angka: %d\n", max, min);
    return 0;
}
void maxmin(int i, int j) {
    int max1, min1, mid;
    if (i == j) max = min = a[i];
    else if (i == j - 1) (a[i] > a[j]) ? (max = a[i], min = a[j]) : (max = a[j], min = a[i]);
    else {
        mid = (i + j) / 2;
        maxmin(i, mid);
        max1 = max;
        min1 = min;
        maxmin(mid + 1, j);
        (max < max1) ? (max = max1) : 0;
        (min > min1) ? (min = min1) : 0;
    }
}

