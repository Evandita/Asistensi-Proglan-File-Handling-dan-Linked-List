#include <stdio.h>

int main() {
    FILE *ptr;
    char buffer[1000];

    ptr = fopen("file.txt", "r");

    if (ptr == NULL) {
        printf("There is an error\n");
        return 1;
    }

    fscanf(ptr, "%[^\n]s", buffer);
    printf("%s\n", buffer);

    /*

    while (fscanf(ptr, "%s", buffer) != EOF) {
        printf("%s\n", buffer);
    }

    */

    fclose(ptr);

}