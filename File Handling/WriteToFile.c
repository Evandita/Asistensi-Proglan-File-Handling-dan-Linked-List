#include <stdio.h>

int main(void){
    FILE *ptr;

    ptr = fopen("file.txt", "w");

    if (ptr == NULL) {
        printf("There is an error\n");
        return 1;
    }

    fprintf(ptr, "I am writing\n");

    fclose(ptr);

    return 0;
}