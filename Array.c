#include <stdio.h>

int main() {
    int std[5];  

    printf("=== Simple Array Print ===\n");
    printf("English Subject Marks\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter the marks for student No %d: ", i + 1);
        scanf("%d", &std[i]);
    }

    printf("\n=== Students Marks ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Student No %d marks are %d\n", i + 1, std[i]);
    }

    return 0;
}

