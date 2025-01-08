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



// #include <stdio.h>

// void funcA(void); //funcAの存在を表明
// void funcB(void); //funcBの存在を表明

// int main(void)
// {
//   funcA();
//   return 0;
// }

// void funcA(void) 
// {
//   printf("関数Aです\n");
//   funcB();
// }

// void funcB(void)
// {
//   printf("関数Bです\n");
// }


// #include <stdio.h>

// void hello(int no)
// {
//   if (no == 1) {
//     printf("岬さん、こんにちは\n");
//   } else if (no == 2) {
//     printf("赤城さん、こんにちは\n");
//   } else {
//     printf("海藤さん、こんにちは\n");
//   }
// }

// int main(void)
// {
//   printf("関数を呼び出します\n");
//   hello(1); //引数1を渡しながら関数を呼び出す
//   hello(2); //引数2を渡しながら関数を呼び出す
//   hello(3); //引数3を渡しながら関数を呼び出す
//   printf("関数の呼び出しが終わりました\n");
  
//   return 0;
// }



// #include <stdio.h>

// void add(int x, int y)
// {
//   int ans = x + y;
//   printf("%d + %d = %d\n", x, y, ans);
// }

// int main(void)
// {
//   int year = 2025;
//   add(year, 4); //変数yearと4を渡してadd関数を呼び出す
//   add(year, 50); //変数yearと50を渡してadd関数を呼び出す
  
//   return 0;
// }



#include <stdio.h>

int add(int x, int y)
{
  int ans = x + y;
  return ans;
}

int main(void)
{
  int year = 2025;
  
  int ans1;
  ans1 = add(year, 4); //addの結果が変数ans1に代入される
  printf("%d年の%d年後は%d年です\n", year, 4 ,ans1);
  
  int ans2 = add(year, 50); //変数宣言と同時に呼び出しても良い
  printf("%d年は%d年の%d年後です\n", ans2, year, 50);
  
  return 0;
}