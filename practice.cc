#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
int uniqueChars(char* sentence, int size){
    std::cout<<size;
    for(int i = 0; i < (size); i++){
        for(int j=i+1; j < (size); j++){
            if(sentence[i]==sentence[j]) return 0;
        }
    }
    return 1;
}

void reverse(char* str){
    int size = strlen(str);
    char a[size];
    for(int i = 0; i<size ;i++)
    {
        a[i]=str[size-1-i];
        std::cout<<a[i];
    }
    str = a;
}
void shiftBy2(char* str, int start){
    
}
void insert20(char* str){
    int size = strlen(str);
    char a[size];
    int x = 0;
    for(int i = 0; i<size; i++){
        if(x == size) break;
        else if(str[i]==' '){
            a[x]='%';
            a[x+1]='2';
            a[x+2]='3';
            x = x+2;
        }
        else{ a[x] = str[i]; x++; }
    }
    str = a;
}

int main(){
    char greeting[8] = {'H', 'e', ' ', 'l', 'l', 'o', ' ', ' ',};
    //int z = uniqueChars(greeting, sizeof(greeting));
    //printf("%d", z);
    //reverse(greeting);
    shiftBy2();
    for(int i = 0; i<strlen(greeting); i++)
        std::cout<<greeting[i];
}