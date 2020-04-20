#include <stdio.h>
#include <string.h>

struct StudentInfo{
    char name[100];
    char id[8];
    int age;
    char phone[11];
};

int main(){
    struct StudentInfo me;
    
    strcpy(me.name, "Ebata Naoki");
    strcpy(me.id, "B9IMXXXX");
    me.age = 23;
    strcpy(me.phone, "080XXXXYYYY");

    printf("Name: \t%s\n", me.name);
    printf("ID: \t%s\n", me.id);
    printf("Age: \t%d\n", me.age);
    printf("Phone: \t%s\n", me.phone);

    return 0;
}