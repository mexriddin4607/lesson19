#include <stdio.h>
#include <string.h>

char VOVELS[] = "aeiouAEIOU";   

int check_vovel(char c){
    for(int i = 0; i < strlen(VOVELS) -1; i++ ){
        if (c == VOVELS[i]){
            return 1;        }
    }
    return 0;
}

int main (){
    char text[]= "salom";


    for (int i = 0; text[i] != '\0'; i++){
        putchar(text[i]);
        if (check_vovel(text[i])){
            putchar(text[i]);
        }
    }
    return 0;
}