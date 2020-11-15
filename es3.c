#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int a, b, c, i;
char manuale[128];
char testo[128];
char cifrato[128];
char chiave[128];

int scrivi() {
  fgets(chiave, 128, stdin);
  a = strlen(chiave);
  if (a < 31)
    printf("Troppo corto\n");
  else {
    printf("%s\n", chiave);
    printf("Lunghezza: %d\n", a - 1);
    }
  return 0;
}

char str[128];
time_t t;
int casuale() {
  srand((unsigned) time(&t));
  printf("%d\n", b = (rand() % 96) + 31);
  for (i = 0; i < 128 - 1; i++)
    chiave[i] = (b * i) % 96 + 31;
  printf("%s\n", str);
  return 0;
}

int main() {
  fgets(testo, 128, stdin);
  scanf("%d", &c);

  switch (c) {
  case 1: getchar();
  scrivi();
  break;

case 2: getchar();
casuale();
break;
default: printf("inserisci numero valido\n");
}


if(strlen(chiave) < strlen(testo))
printf("la chiave è troppo corta");


else{
  for(i = 0; i < strlen(testo); i++) {
  cifrato[i] = testo[i] ^ chiave[i];
  testo[i] = cifrato[i] ^ chiave[i];
}
printf("\n%s\n%s\n", cifrato, testo);
return 0;
}
}
