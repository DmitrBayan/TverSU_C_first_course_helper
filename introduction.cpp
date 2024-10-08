#include <iostream>
#include <locale.h> // библиотека для работы с локализацией

void sampleBeforeMainFunction() // Функция объявлена и описана ПЕРЕД main
{
  // какой-то код здесь
  printf("\nФункция объявлена и описана ПЕРЕД main\n");
  // какой-то код здесь
}

void sampleBeforeMainFunctionNotDescribed(); // Функция объявлена ПЕРЕД main и описана ПОСЛЕ main

int main()
{
  printf("Hello world!\n");
  printf("Привет мир!\n"); // => выведет "╧ЁштхЄ ьшЁ!"
  setlocale(LC_ALL, "Russian"); // подключаем Русский язык
  printf("Привет мир!\n"); // => выведет "Привет мир!"
  
  sampleBeforeMainFunction(); // отработает
  sampleAfterMainFunction(); // !!! выдает ошибку "Ошибка	C3861	sampleAfterMainFunction: идентификатор не найден"
  sampleBeforeMainFunctionNotDescribed(); // отработает
}

void sampleAfterMainFunction() // Функция объявлена и описана ПОСЛЕ main
{
  // какой-то код здесь
  printf("\nФункция объявлена и описана ПОСЛЕ main\n");
  // какой-то код здесь
}

void sampleBeforeMainFunctionNotDescribed()
{
  // какой-то код здесь
  printf("\nФункция объявлена ПЕРЕД main и описана ПОСЛЕ main\n");
  // какой-то код здесь
}
