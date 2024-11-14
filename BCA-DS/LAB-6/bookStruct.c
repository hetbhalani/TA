/*30. Write a program to create structure of book with book title, author name, 
publication, and price. Read data of n books and display them.*/

#include <stdio.h>

struct book
{
  char title[100];
  char author[100];
  char publication[100];
  float price;
};

void main()
{
  int n, i;
  printf("Enter the number of books: ");
  scanf("%d", &n);
  struct book books[n];
  for (i = 1; i <= n; i++)
  {
    printf("\nEnter details for book %d:\n", i);
    printf("Title: ");
    scanf(" %s", books[i].title);
    printf("Author: ");
    scanf("%s", books[i].author);
    printf("Publication: ");
    scanf("%s", books[i].publication);
    printf("Price: ");
    scanf("%f", &books[i].price);
  }
  printf("\nDetails of the books:\n");
  for (i = 1; i <= n; i++)
  {
    printf("\nBook %d:\n", i);
    printf("Title: %s\n", books[i].title);
    printf("Author: %s\n", books[i].author);
    printf("Publication: %s\n", books[i].publication);
    printf("Price: %.2f\n", books[i].price);
  }
}
