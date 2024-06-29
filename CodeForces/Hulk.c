#include <stdio.h>
#include <string.h>

int main() {
  int in;
  scanf("%d", &in);
  char phrase[2000] = "";
  for (int i = 1; i <= in; i++) {
    if (i > 1) {
      char plus[]= " that ";
      strcat(phrase, plus);
    }
    if (i % 2 == 0) {
      char love[] = "I love";
      strcat(phrase, love);
    } else {
      char hate[] = "I hate";
      strcat(phrase, hate);
    }

  }
  char plus[]= " it";
  strcat(phrase, plus);
  printf("%s", phrase);
  printf("\n");
  return 0;
}
