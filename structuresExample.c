#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

/* function declaration */
void printBook( struct Books *book );

int main() {
  struct Books book1;
  struct Books book2;

  strcpy( book1.title, "C Programming");
  strcpy( book1.author, "Nuha Ali");

  strcpy( book2.title, "Telecom Billing");
  strcpy( book2.author, "Zara Ali");

  printBook( &book1 );
  printBook( &book2 );

  return 0; 
}

void printBook( struct Books *book) {
  printf("Book title : %s\n", book->title);
  printf("Book author : %s\n", book->author);
}

