// работа с указателями

#include <stdio.h>
#include <locale.h>

void changeValueByPointer(int* pointer);

int main()
{
    setlocale(LC_ALL, "Russian");
    int x = 10;      // Обычная переменная
    int *p;          // Указатель, который может хранить адрес переменной типа int
    p = &x;          // Указатель p хранит адрес переменной x
    // Теперь можем работать с x через указатель
    printf("Значение x: %d\n", x);            // Выведет 10
    printf("Адрес x: %p\n", (void*)&x);       // Выведет адрес переменной x
    printf("Значение через указатель: %d\n", *p);  // Выведет 10, обращение через указатель

    printf("До: %d\n", x);    // Выведет 10
    changeValueByPointer(&x); // Передаем адрес переменной x
    printf("После: %d\n", x); // Выведет 23, так как мы изменили значение через указатель

  
    return 0;
}

void changeValueByPointer(int *pointer)
{
  *pointer = 23; // Изменяем значение переменной по указателю
}
