#include <stdio.h>
#include <string.h>

typedef struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
} Book;

#define TRUE 1
#define FALSE 0

int main() {
  Book book;

  strcpy(book.title, "C Programming");
  strcpy(book.author, "Nuha Ali");
  strcpy(book.subject, "C Programming Tutorial");
  book.book_id = 6495407;

  printf("Book title: %s\n", book.title);
  printf("Book author: %s\n", book.author);
  printf("Book subject: %s\n", book.subject);
  printf("Book id: %d\n", book.book_id);

  printf("Value of TRUE is %d\n", TRUE);
  printf("Value of FALSE is %d\n", FALSE);

  return 0;
}


