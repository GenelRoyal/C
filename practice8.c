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



// #include <stdio.h>


// void funcB(void)
// {
//   printf("関数Bです\n");
// }

// void funcA(void)
// {
//   printf("関数Aです\n");
//   funcB();
// }

// int main(void) //main関数
// {
//   funcA();
//   return 0;
// }



#include <stdio.h>

void funcA(void); //funcAの存在を表明
void funcB(void); //funcBの存在を表明

int main(void)
{
  funcA();
  return 0;
}

void funcA(void) 
{
  printf("関数Aです\n");
  funcB();
}

void funcB(void)
{
  printf("関数Bです\n");
}