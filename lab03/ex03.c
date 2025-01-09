#include<stdio.h>
void tabula_recta(char t[][26]){
    int j,shift;
    for(unsigned int shift = 0; shift < 26;shift++){
        for(unsigned int j = 0; j < shift;j++){
            t[shift][j] = 'A' + ((shift + j) % 26);

        }
    }
}
void show_tabula_recta(const char t[][26]){
    int i,j;
    for(unsigned int i = 0; i < 26;i++){
        for(unsigned int j = 0; j < 26;j++){
            printf("%c ", t[i][j]);
        }
        printf("\n");
    }
}