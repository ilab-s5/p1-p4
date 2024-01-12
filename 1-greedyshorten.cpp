#include <stdio.h>
#define MAX_SIZE 99
void sort(int array[], int size);
int main() {
    int coins[MAX_SIZE], results[MAX_SIZE], num_types, total, remainder = 0, count = 0;
    printf("Muhammad Sahal Nurdin_51421075\nBanyak Jenis Koin : ");
    scanf("%d", &num_types);
    printf("\nMasukan Jenis Koin :\n");
    for (int i = 0; i < num_types; scanf("%d", &coins[i++]));
    sort(coins, num_types);
    printf("\nKoin yang tersedia :\n");
    for (int i = 0; i < num_types; printf("%d\n", coins[i++]));
    printf("\nMasukan Nilai yang dipecah : ");
    scanf("%d", &total);
    printf("\n");
    for (int i = 0; i < num_types; results[i] = total / coins[i], total %= coins[i++], count += results[i - 1]);
    for (int i = 0; i < num_types; printf("Keping %d-an sebanyak : %d\n", coins[i], results[i++]));
    printf("\nSisanya adalah %d\nJumlah koin minimum adalah %d\n", total, count);
    return 0;
}
void sort(int array[], int size) {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - 1; array[j] < array[j + 1] ? (array[j] ^= array[j + 1] ^= array[j] ^= array[j + 1]) : 0, j++);
}

