#include<stdio.h>
#include<stdlib.h>
int main(int argc , char * argv[]){
    unsigned int i ;
    unsigned int j ;
    int index = 0;
    if(argc != 3){
        printf("usage: %s <filename1> <filename2>\n", argv[0]);
        return 1;
        return 0;
    }
    FILE *file1, *file2;
    file1 = fopen(argv[1], "r");
    file2 = fopen(argv[2], "r");

    if (file1 == NULL || file2 == NULL) {
        perror("Error opening file");
        return 1;
    }

    int ch1, ch2;
    while (((ch1 = fgetc(file1)) != EOF) && ((ch2 = fgetc(file2)) != EOF)) {
        if (ch1 != ch2) {
            printf("Files are different\n");
            fclose(file1);
            fclose(file2);
            return 0;
        }
    }

    if (feof(file1) && feof(file2)) {
        printf("Files are identical\n");
    } else {
        printf("Files are different\n");
    }

    fclose(file1);
    fclose(file2);
}