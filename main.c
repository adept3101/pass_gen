#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void num_gen(int size){
    srand(time(NULL));
    //int *size_pass = &size;
    int *pass = malloc(size * sizeof(int));
    size_t lenght = sizeof(size) / sizeof(int);
    for(int i = 0; i < size; i++){
        pass[i] = rand() % 10;
        printf("%d", pass[i]);
    }
    //int password = *pass;
    free(pass);
    printf("\n");

    return;
}

void small_symbol(int size){
    srand(time(NULL));
    unsigned char *pass_c = malloc(size * sizeof(unsigned char));
    for(int i = 0; i < size; i++){
        pass_c[i] = 97 + rand() % (122 - 97 + 1);
        printf("%c", pass_c[i]);
    }
    free(pass_c);
    printf("\n");

    return;
}

void big_symbol(int size){
    srand(time(NULL));
    unsigned char *pass_C = malloc(size * sizeof(unsigned char));
    for(int i = 0; i < size; i++){
        pass_C[i] = 65 + rand() % (90 - 65 + 1);
        printf("%c", pass_C[i]);
    }
    free(pass_C);
    printf("\n");

    return;
}

int main(){
    srand(time(NULL));
    int n;
    int choose;
    printf("Введите размер пароля:");
    scanf("%d", &n);

    while(true){
        printf("1) Генерация пароля из цифр.\n");
        printf("2) Генерация пароля из букв.\n");
        printf("3) Генерация пароля из заглавных букв.\n");
        printf("4) Выход из программы.\n");
        printf("Выберите действие:\n");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            num_gen(n);
            break;
        case 2:
            small_symbol(n);
            break;
        case 3:
            big_symbol(n);
            break;
        case 4:
            return 0;
        }
    }

    return 0;
}