#include<stdio.h>
#include<stdlib.h>

int main(int argc , char * argv[]){
    int i;
    FILE *file;
    if(argc < 2){
        printf("Nessun file specificato\n");
        printf("\n");
        return 1;
    }
    for(i = 1; i < argc; i++){
        file = fopen(argv[i], "w");
        if(file != NULL){
            printf("File %s creato\n", argv[i]);
            fclose(file);
        }else{
            printf("File %s non è stato creato\n", argv[i]);
        }
    }
    return 0;
}