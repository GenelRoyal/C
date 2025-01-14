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



// #include <stdio.h>

// int add(int x, int y)
// {
//   int ans = x + y;
//   return ans;
// }

// int main(void)
// {
//   int year = 2025;
  
//   int ans1;
//   ans1 = add(year, 4); //addの結果が変数ans1に代入される
//   printf("%d年の%d年後は%d年です\n", year, 4 ,ans1);
  
//   int ans2 = add(year, 50); //変数宣言と同時に呼び出しても良い
//   printf("%d年は%d年の%d年後です\n", ans2, year, 50);
  
//   return 0;
// }




#include <stdio.h>

bool isLeapYear(int year)
{
  return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int main(void)
{
  int year = 2000;
  
  if (isLeapYear(year)) {
    printf("%d年は、閏年です。\n", year);
  } else {
    printf("%d年は、閏年ではありません。\n", year);
  }
  return 0;
}



#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int iscanf(void)
{
  String inputStr;
  scanf("%s", inputStr);
  return atoi(inputStr);
}

int calcPayment(int dividend, int divisor)
{
  // 総額を人数で割る(端数も保持)
  double dnum = (double)dividend / divisor;
  // 100円未満を切り捨ててみる
  int person = (int)(dnum / 100) * 100;
  // 元の値と比較して、小さければ100円未満があったので上乗せ
  if (dnum > person) {
    person = person + 100;
  }
  return person;
}

void showPayment(int general, int manager, int numbers)
{
  printf("*** 支払額 ***¥n");
  printf("1人あたり%d円（%d人）、幹事は%d円です。¥n", general, numbers - 1, manager);
}

int main(void)
{
  // 計算データの入力
  printf("支払総額を入力してください：");
  int amount = iscanf();
  printf("参加人数を入力してください：");
  int people = iscanf();

  // 割り勘の計算
  int pay = calcPayment(amount, people);

  // 幹事の支払額を計算
  int payorg = amount - pay * (people - 1);

  // 結果の表示
  showPayment(pay, payorg, people);

  return 0;
}
