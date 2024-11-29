#include<stdio.h>
struct Address{
    char city[50];
    int pin;
};
struct person {
    char name[50];
    struct Address addr;
};
int main(){
    struct person p;
    printf("Enter name:");
    scanf("%s",p.name);
    printf("Enter city:");
    scanf("%s",p.addr.city);
    printf("Enter pin:");
    scanf("%d",&p.addr.pin);
    printf("\nPerson details:\n");
    printf("name:%s\ncity:%s\npin:%d\n",p.name,p.addr.city,p.addr.pin);
    return 0;
}