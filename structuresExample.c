#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

int main() {
  struct Books book1;
  struct Books book2;

  strcpy( book1.title, "C Programming");
  strcpy( book1.author, "Nuha Ali");

  strcpy( book2.title, "Telecom Billing");
  strcpy( book2.author, "Zara Ali");

  printf("Book 1 title : %s\n", book1.title);
  printf("Book 1 author : %s\n", book1.author);
  
  printf("Book 2 title : %s\n", book2.title);
  printf("Book 2 author : %s\n", book2.author);

  return 0;
}


