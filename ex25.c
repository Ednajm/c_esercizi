#include<stdio.h>
#include<string.h>
#include<ctype.h>

void capitalize(char *dst, const char *src){
    int size = 128;
    for(unsigned int i = 0; i < size; i++){
        if(src[i]==src[0]){
            dst[i] = tolower(src[i]);
        }
        if(i == 0){
            dst[i] = toupper(src[i]);
        }
        else if(src[i-1] == ' '){
            dst[i] = toupper(src[i]);
        }
        else {
            dst[i] = tolower(src[i]);
        }
    }
}
int main(){
    char src[] = {"hello world"};
    int size = sizeof(src);
    char dst[size];
    capitalize(dst, src);
    printf("capitalize = ");
     for ( unsigned int i = 0; i < size; i++)
    {
        printf("%c",dst[i]);

    } 
}