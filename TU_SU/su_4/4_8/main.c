#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size = 10;
	int *arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	printf("Vavedi 10 chisla:\n");
	for (int i = 0; i < size; i++) {
		printf("arr[%d] = ", i);
		if (scanf("%d", &arr[i]) != 1) {
			printf("Nevaliden vhod.\n");
			free(arr);
			return 1;
		}
	}

	while (1) {
		int value;
		int index;

		printf("\nVavedi chislo za vmakvane (0 za krai): ");
		if (scanf("%d", &value) != 1) {
			printf("Nevaliden vhod.\n");
			free(arr);
			return 1;
		}

		if (value == 0) {
			break;
		}

		printf("Vavedi index (0 do %d): ", size);
		if (scanf("%d", &index) != 1) {
			printf("Nevaliden vhod.\n");
			free(arr);
			return 1;
		}

		if (index < 0 || index > size) {
			printf("Nevaliden index. Chisloto %d ne beshe dobaveno.\n", value);
			continue;
		}

		int *temp = (int *)realloc(arr, (size + 1) * sizeof(int));
		if (temp == NULL) {
			printf("Memory reallocation failed.\n");
			free(arr);
			return 1;
		}
		arr = temp;

		for (int i = size; i > index; i--) {
			arr[i] = arr[i - 1];
		}
		arr[index] = value;
		size++;
	}

	printf("\nKraen masiv:\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
	return 0;
}