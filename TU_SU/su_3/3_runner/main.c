#include <stdio.h>

// --- Декларации на функциите ---
void exercise_1(void);
void exercise_2(void);
void exercise_3(void);
void exercise_4(void);
void exercise_5(void);
void exercise_6(void);
void exercise_7(void);
void exercise_8(void);
void exercise_9(void);

// ==========================================
// Exercise 1: Longest sequence of equals
// ==========================================
void exercise_1(void) {
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the sorted array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxLen = 1;
    int currentLen = 1;
    int startIndex = 0;
    int maxStartIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStartIndex = startIndex;
            }
            currentLen = 1;
            startIndex = i;
        }
    }

    if (currentLen > maxLen) {
        maxLen = currentLen;
        maxStartIndex = startIndex;
    }

    printf("Start of longest: %d\n", maxStartIndex);
    printf("Length: %d\n", maxLen);
}

// ==========================================
// Exercise 2: Zig-zag sequence check
// ==========================================
void exercise_2(void) {
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isValid = 1;

    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            if (arr[i] >= arr[i + 1]) {
                isValid = 0;
                break;
            }
        } else {
            if (arr[i] <= arr[i + 1]) {
                isValid = 0;
                break;
            }
        }
    }

    if (isValid) {
        printf("The relation is successful\n");
    } else {
        printf("The relation is NOT successful\n");
    }
}

// ==========================================
// Exercise 3: Reverse array
// ==========================================
void exercise_3(void) {
    printf("Enter the length of the array: \n");
    int n;
    scanf("%d", &n);
    int arr[100];
    printf("Enter the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The reversed array is: \n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ==========================================
// Exercise 4: Rotate array right by K
// ==========================================
void exercise_4(void) {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter K: ");
    scanf("%d", &k);

    k = k % n;

    for (int step = 0; step < k; step++) {
        int last = *(p + n - 1);

        for (int i = n - 1; i > 0; i--) {
            *(p + i) = *(p + i - 1);
        }

        *p = last;
    }

    printf("Result:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

// ==========================================
// Exercise 5: K-th largest element
// ==========================================
void exercise_5(void) {
    int p_elements;
    printf("Enter the number of elements: \n");
    scanf("%d", &p_elements);

    int arr[100];
    printf("Enter the array elements: \n");
    for (int i = 0; i < p_elements; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter K (to find the K-th largest element): \n");
    scanf("%d", &k);

    if (k <= 0 || k > p_elements) {
        printf("Invalid value for K.\n");
        return;
    }

    for (int i = 0; i < p_elements - 1; i++) {
        for (int j = i + 1; j < p_elements; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d-th largest element: %d\n", k, arr[k - 1]);
}

// ==========================================
// Exercise 6: Longest monotonic subsequence
// ==========================================
void exercise_6(void) {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    int maxLen = 1, start = 0;

    int currLen = 1, currStart = 0;
    for (int i = 1; i < n; i++) {
        if (*(p + i) > *(p + i - 1)) {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                start = currStart;
            }
            currLen = 1;
            currStart = i;
        }
    }
    if (currLen > maxLen) {
        maxLen = currLen;
        start = currStart;
    }

    currLen = 1;
    currStart = 0;
    for (int i = 1; i < n; i++) {
        if (*(p + i) < *(p + i - 1)) {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                start = currStart;
            }
            currLen = 1;
            currStart = i;
        }
    }
    if (currLen > maxLen) {
        maxLen = currLen;
        start = currStart;
    }

    printf("Longest monotonic subsequence:\n");
    for (int i = start; i < start + maxLen; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

// ==========================================
// Exercise 7: Subarray with target sum
// ==========================================
void exercise_7(void) {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter target sum: ");
    scanf("%d", &k);

    int found = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += *(p + j);

            if (sum == k) {
                printf("Subarray: ");
                for (int t = i; t <= j; t++) {
                    printf("%d ", *(p + t));
                }
                found = 1;
                break;
            }
        }

        if (found) break;
    }

    if (!found) {
        printf("No such subarray.\n");
    } else {
        printf("\n");
    }
}

// ==========================================
// Exercise 8: Insert 5 values in array
// ==========================================
void exercise_8(void) {
    printf("Enter 10 numbers: \n");
    int arr[20];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int size = 10;

    for (int i = 0; i < 5; i++) {
        int num;
        int pos;

        printf("Enter a number: \n");
        scanf("%d", &num);

        printf("Enter the position to insert the number: \n");
        scanf("%d", &pos);

        if (pos < 0 || pos > size) {
            printf("Invalid position!\n");
            i--;
            continue;
        }

        for (int j = size; j > pos; j--) {
            arr[j] = arr[j - 1];
        }

        arr[pos] = num;
        size++;
    }

    printf("Final array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ==========================================
// Exercise 9: Longest equal sequence print
// ==========================================
void exercise_9(void) {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int currentLen = 1;
    int maxLen = 1;

    int currentStart = 0;
    int maxStart = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = currentStart;
            }
            currentLen = 1;
            currentStart = i;
        }
    }

    if (currentLen > maxLen) {
        maxLen = currentLen;
        maxStart = currentStart;
    }

    printf("Max sequence: ");
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ==========================================
// Main menu
// ==========================================
int main(void) {
    int choice = 0;

    while (1) {
        printf("\n========================================\n");
        printf("       C Exercises Runner Menu\n");
        printf("========================================\n\n");
        printf("Available exercises:\n");
        printf("  0  - Exit Program\n");
        printf("  1  - Exercise 1: Longest sequence of equals (index/length)\n");
        printf("  2  - Exercise 2: Zig-zag sequence check\n");
        printf("  3  - Exercise 3: Reverse array\n");
        printf("  4  - Exercise 4: Rotate array right by K\n");
        printf("  5  - Exercise 5: K-th largest element\n");
        printf("  6  - Exercise 6: Longest monotonic subsequence\n");
        printf("  7  - Exercise 7: Subarray with target sum\n");
        printf("  8  - Exercise 8: Insert 5 values in array\n");
        printf("  9  - Exercise 9: Print longest sequence of equals\n\n");
        printf("========================================\n\n");

        printf("Select exercise (0-9): ");
        if (scanf("%d", &choice) != 1) {
            // Изчистване на буфера при грешно въвеждане
            while (getchar() != '\n');
            printf("Invalid input! Please enter a number.\n");
            continue;
        }

        if (choice == 0) {
            printf("\nExiting program. Goodbye!\n");
            break;
        }

        printf("\n----------------------------------------\n");
        printf("Running selection %d\n", choice);
        printf("----------------------------------------\n\n");

        switch (choice) {
            case 1: exercise_1(); break;
            case 2: exercise_2(); break;
            case 3: exercise_3(); break;
            case 4: exercise_4(); break;
            case 5: exercise_5(); break;
            case 6: exercise_6(); break;
            case 7: exercise_7(); break;
            case 8: exercise_8(); break;
            case 9: exercise_9(); break;
            default:
                printf("Invalid choice! Please select a valid number from the menu.\n");
        }

        printf("\n\n----------------------------------------\n");
        printf("Exercise completed!\n");
        printf("----------------------------------------\n");

        printf("\nPress Enter to return to the menu...");

        // Изчистване на останалите символи в буфера до новия ред, след което чакаме Enter
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        getchar();
    }

    return 0;
}