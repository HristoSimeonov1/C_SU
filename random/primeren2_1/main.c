#include <stdio.h>
#include <stdlib.h> // ТРЯБВА ни за malloc и free!

// Дефинираме структурата
typedef struct {
    char name[50];         // Име на курса (до 50 символа)
    char start_date[15];   // Начална дата (ГГГГ.ММ.ДД са 10 символа + малко аванс за край на стринга '\0')
    int lectures;          // Общ брой лекции
    float price;           // Цена
} Course;

int main() {
    FILE *file;
    int n;             // Тук ще запазим броя на курсовете
    Course *courses;   // Указател, който ще сочи към нашия динамичен масив

    // 1. Отваряме файла за четене в бинарен режим ("rb" = read binary)
    file = fopen("courses.bin", "rb");

    // ОБРАБОТКА НА ГРЕШКИ: Проверяваме дали файлът изобщо съществува
    if (file == NULL) {
        printf("Greshka: Failat ne moje da bude otvoren!\n");
        return 1; // Прекратяваме програмата с код за грешка
    }

    // 2. Четем ПЪРВОТО нещо от файла - това е едно цяло число (броят курсове)
    // fread(къде_да_го_запазим, размер_на_типа, колко_броя_четем, от_кой_файл)
    fread(&n, sizeof(int), 1, file);
    // 3. Заделяме динамична памет за масива
    courses = (Course*) malloc(n * sizeof(Course));

    // ОБРАБОТКА НА ГРЕШКИ: Проверяваме дали компютърът ни е дал памет
    if (courses == NULL) {
        printf("Greshka: Neuspishno zadeliane na pamet!\n");
        fclose(file); // Затваряме файла, преди да приключим
        return 1;
    }

    // 4. Четем самите курсове директно в нашия нов масив
    // Тук казваме: "Прочети n на брой структури с размер sizeof(Course) и ги сложи в courses"
    fread(courses, sizeof(Course), n, file);

    // 5. Задължително затваряме файла, вече не ни трябва
    fclose(file);

    printf("Uspeshno procheteni %d kursa!\n", n);

    // ... ТУК ЩЕ СЕ РЕШАВАТ ЗАДАЧИ 2, 3 и 4 ...

    // Най-накрая, преди края на програмата, трябва да освободим паметта
    free(courses);

    return 0;
}