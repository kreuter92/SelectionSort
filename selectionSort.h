#include <stdio.h>
void printArray(int array[], int laenge){
	for (int i=0; i< laenge; ++i){
		printf("%d, ", array[i]);
	}
	printf("\n");
}


void tauscheElemente(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSortUp(int array[], int laenge){
	int i = 0;
	while (i < laenge-1){
		int min_stelle = i;
		int j = i+1;
		while (j< laenge){
			if (array[j] < array[min_stelle]){
				min_stelle = j;
			}
			j++;
		}
		tauscheElemente(&array[min_stelle], &array[i]);
		i++;
	}
}

void selectionSortDown(int array[], int laenge){
	int i = 0;
	while (i < laenge-1){
		int max_stelle = i;
		int j = i+1;
		while (j < laenge){
			if (array[j] > array[max_stelle]){
				max_stelle = j;
			}
			j++;
		}
		tauscheElemente(&array[max_stelle], &array[i]);
		i++;
	}
}



