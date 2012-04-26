#include <stdio.h>

int main(int argc, char *argv[])
{
  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at imaginary rate of %f.\n", bugs, bug_rate);

  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The universe ha %ld bugs.\n", universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs.\n", expected_bugs);

  double fair_share = expected_bugs / universe_of_defects;
  printf("Your fair share is %e.\n", fair_share);

  char nul_byte = '\0';
  int some_wierdness = bugs * nul_byte;
  printf("Which means you should care %s%%.\n", some_wierdness);

  return 0;
}
