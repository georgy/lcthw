#include <stdio.h>

int main (int argc, char *argv[])
{
  char full_name[] = {
    'G', 'e', 'o', 'r', 'g', 'y',
    ' ', 'B', 'o', 'l', 'y', 'u', 'b', 'a', '\0'
  };

  int empty[] = {};
  int one[] = {1};
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Georgy";

  printf("int size: %ld\n", sizeof(int));
  printf("size of areas (int[]): %ld\n", sizeof(areas));
  printf("size of empty int[]: %ld\n", sizeof(empty));
  printf("size of one int[]: %ld\n", sizeof(one));
  printf("The first area is %d, the 2nd %d.\n", areas[0], areas[10]);
  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n", sizeof(name));
  printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
  printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
  
  return 0;
}
