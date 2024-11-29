#include<stdio.h>
struct book {
    char name[50];
    int price;
    char author[50];
};
int main() {
    struct book A;
    printf("Enter the name: ");
    scanf("%s", A.name);
    printf("Enter the price: ");
    scanf("%d", &A.price);     printf("Enter the author: ");
    scanf("%s", A.author);
    printf("\nBook details:\n");
    printf("Name: %s\n", A.name);
    printf("Price: %d\n", A.price);
    printf("Author: %s\n", A.author);
    return 0;
}