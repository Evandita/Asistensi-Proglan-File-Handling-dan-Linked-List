#include <stdio.h>

int main(void){
    FILE *ptr;     

    ptr = fopen("file.txt", "a"); 

    if (ptr == NULL) {
        printf("There is an error\n");
        return 1;       
    }

    fprintf(ptr, "I am appending\n");

    fclose(ptr);    

    return 0;
}