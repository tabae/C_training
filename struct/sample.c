#include<stdio.h>
#include<string.h>

struct StudentInfo{
    char name[100];
    char id[10];
    int age;
};

int main(){
    struct StudentInfo me;
    me.age = 23;
    strcpy(me.name, "Ebata Naoki");
    strcpy(me.id, "B9IMXXXX");

    printf("Name: \t%s\n", me.name);
    printf("ID: \t%s\n", me.id);
    printf("AGE: \t%d\n", me.age);
    return 0;
}
