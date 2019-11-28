/*
 подключаем в нашу программу специальные заголовочные файлы,
 для того что бы использовать  printf, std::cout, std::endl
*/

#include <stdio.h>
#include <iostream>
// g++ -Wall -std=c++1y literals.cpp -o literals
int main(int argc, char const *argv[])
{
  // используеться С подход для печати литералов на консоль
  printf("This is integer literal %d\n", 10);
  printf("This is integer literal in hex format 0xA =  %d\n", 0xA);
  printf("This is integer literal represent in octal format %o\n", 10);
  printf("This is float literal %f\n", 1.25);
  printf("This is float literal %f\n", 1.25e1);
  printf("This is char literal %c\n", 'c');
  printf("This is string literal %s\n", "string");

  // используеться С++ подход для печати литералов на консоль
  std::cout << "My first string print to cout" << std::endl;
  std::cout << "Float literal " << 1.25 << std::endl;
  /*
   указываем то что мы хотим выводить на консоль true и false
   если это не указать то мы получим на консоле 0 и 1
  */
  std::cout << std::boolalpha;
  std::cout << true << " " << false << std::endl;
  return 0;
}
