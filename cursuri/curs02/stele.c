#include <stdio.h>

void with_lib() {
  char s[64];
  char *p;

  while (1) {
    p = fgets(s, 64, stdin);
    if (p == NULL) {
      break;
    }

    for (int i = 0; i < strlen(s); i++) {
      if (s[i] != '\n') {
        s[i] = "*";
      }
    }
    fputs(s, stdout);
  }
}

int main() {}
