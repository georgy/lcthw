#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  
  for (i = 1; i < argc; i++) {
    printf("arg #%d: %s\n", i, argv[i]);
  }

  char* team[] = {"Jan", "Martin", "Tomas", "Nuno", "Karel", NULL};

  int headcount = 6;

  for (i = 0; i < headcount; i++) {
    printf("Team memeber #%d: %s\n", i, team[i]);
  }

  printf("%ld\n", sizeof(team));
  printf("%ld\n", sizeof(unsigned long));
  printf("0x%032lX\n", (unsigned long) team[0]);

  printf("At that address: %c\n", *team[0]);
}
