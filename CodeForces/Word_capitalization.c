#include <ctype.h>
#include <stdio.h>

int main() {
  int word, cont = 0;
  while ((word = getchar()) != EOF) {
    if (cont == 0 && word >= 'a' && word <= 'z') {
      word = word - 32;
      putchar(word);
      cont++;
      continue;
    }
    putchar(word);
    cont++;
  }
  return 0;
}

/* int main() { */
/*   char word[1000]; */
/*   scanf("%s", word); */
/*   word[0] = toupper(word[0]); */
/*   printf("%s\n", word); */
/*   return 0; */
/* } */

/* #include <ctype.h> */
/* #include <stdio.h> */

/* #define MY_GETCHAR() ((cont++, getchar())) */

/* #define MY_PUTCHAR(c) \ */
/*   do {                \ */
/*     cont++;           \ */
/*     putchar(c);       \ */
/*   } while (0) */

/* int main() { */
/*   int word, cont = 0; */
/*   while ((word = MY_GETCHAR()) != EOF) { */
/*     if (cont == 1 && islower(word)) { */
/*       MY_PUTCHAR(toupper(word)); */
/*       continue; */
/*     } */
/*     MY_PUTCHAR(word); */
/*   } */
/*   return 0; */
/* } */
