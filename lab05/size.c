
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    char *filename = argv[1];
    FILE *file = fopen(filename, "rb");
    if(file == NULL){
        printf("Unable to open file: %s\n", filename);
        return 1;
    }
    fseek(file, 0, SEEK_END);
    long dimensione_file = ftell(file);
    fclose(file);
    printf("File size: %ld bytes\n", dimensione_file);

    return 0;
}
