#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int main(){
    srand(time(NULL));
    int n;
    printf("Введите размер пароля:");
    scanf("%d", &n);
    printf("n=%d\n", n);
    num_gen(n);
    printf("\n");

    small_symbol(n);
    return 0;
}