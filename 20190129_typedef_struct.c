#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct _Person {
    char name[20];
    int age;
    char address[100];
} Person;

int main()
{
    Person p1;

    strcpy(p1.name, "Gildong");
    p1.age = 30;
    strcpy(p1.address, "Seoul Yongsan");

    printf("Name: %s\n", p1.name);       
    printf("Age: %d\n", p1.age);        
    printf("Address: %s\n", p1.address);    

    return 0;
}