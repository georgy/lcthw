#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 42;
  float power = 2.345f;
  double super_power = 12345.67891;
  char initial = 'V';
  char first_name[] = "Georgy";
  char last_name[] = "Bolyuba";


  printf("You are %d kilometers away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power); 
  printf("I have an initial %c.\n", initial); 
  printf("I have a first name %s.\n", first_name); 
  printf("I have a last name %s.\n", last_name); 
  printf("My whole name is %s %c. %s.\n", 
         first_name, initial, last_name);
  printf("");

  return 0;
}
