#include <stdio.h>

void tauscheElemente(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int array[], int laenge) {
    int i = 0;
    while (i < laenge){
        int min_stelle = i;
	int j = i +1;
        while (j < laenge) {
            if (array[j] < array[min_stelle])
                min_stelle = j;
            j++;
	}
        tauscheElemente(&array[min_stelle], &array[i]);
	i++;
    }
}

void printArray(int array[], int laenge) {
    for (int i = 0; i < laenge; ++i) {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

int main() {
    int daten[] = {5, 2, 1, 4, 3};
    int laenge = sizeof(daten) / sizeof(int);
    printf("Unsortiertes Array:\n");
    printArray(daten, laenge);
    selectionSort(daten, laenge);
    printf("Sortiertes Array:\n");
    printArray(daten, laenge);
}
