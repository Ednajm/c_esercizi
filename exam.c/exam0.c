#include<stdio.h>
#include<stdlib.h>
int main(int argc ,char *argv[]){

    FILE *file;
    char buffer[1024];
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    if(argc < 2){
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    file = fopen(argv[1], "r");
    if(file == NULL){
        perror("Error opening file");
        return 1;
    }
    while(fgets(buffer, 1024, file) != NULL){
        for(int j = 0; j < strlen(buffer); j++){
            if(buffer[j] == 'a' || buffer[j] == 'A'){
                a++;
            }else if(buffer[j] == 'e' || buffer[j] == 'E'){
                e++;
            }else if(buffer[j] == 'i' || buffer[j] == 'I'){
                i++;
            }else if(buffer[j] == 'o' || buffer[j] == 'O'){
                o++;
            }else if(buffer[j] == 'u' || buffer[j] == 'U'){
                u++;
            }
        }
    }
    printf("a = %s\n",a);
    printf("e = %s\n",e);
    printf("i = %s\n"i);
    printf("o = %s\n",o);
    printf("u = %s\n",s);

    fclose(file);
    return 0;
}


