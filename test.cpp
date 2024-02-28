#include<iostream>
#include<cstdio>
#include<string.h>

int main(){
    char url[2049] = "GET /index.html HTTP/1.1\t";
    char* text = strpbrk(url, "\t");
    printf("%s", text);
}