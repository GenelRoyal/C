// #include <stdio.h>

// void hello(void) //hello関数の本体
// {
//   printf("こんにちは\n");
// }

// int main(void) //main関数
// {
//   printf("関数を呼び出します\n");
//   hello(); //hello関数を呼び出す
//   printf("関数の呼び出しが終わりました\n");
  
//   return 0;
// }



#include <stdio.h>


void funcB(void)
{
  printf("関数Bです\n");
}

void funcA(void)
{
  printf("関数Aです\n");
  funcB();
}

int main(void) //main関数
{
  funcA();
  return 0;
}