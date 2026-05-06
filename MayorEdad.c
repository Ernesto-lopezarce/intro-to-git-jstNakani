#include <stdio.h>

int main() {
  int age;
  printf('Introduce tu edad: ');
  scanf("%d", &age);

  if (age < 18) {
    printf('Eres menor de edad.');
  } else if (age >= 18 && age < 100) {
    printf('Eres mayor de edad.');
  } else {
    printf('Eres mayor de edad, aunque nunca he conocido a nadie tan grande.');
  };

  return 0;
};