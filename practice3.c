// #include <stdio.h>

// int main(void)
// {
//   int a;
//   int b;
//   a = 20;
//   b = a + 5;
//   printf("%d¥n", a);
//   printf("%d¥n", b);
//   return 0;
// }

// #include <srdio.h>

// int main(void)
// {
// int a;
// a = 100;
// a++;  //aの内容が1増える
// printf("%d\n", a)
// return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   float f = 3;  //float型の変数にint型を代入
//   double d = f;  //double型の変数にfloat型を代入
//   printf("%f¥n", f);  //小数の場合は%fを使う
//   printf("%f¥n", d);
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   int i = 3.2;  //無理な代入で小数点以下が失われて3になる
//   printf("%d¥n", i);
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   int age = (int)3.2;  //3.2をintに変換して代入せよ！
//   printf("%d¥n", age);
//   return 0;
// }

// 異なる型同士の算術演算

// #include <stdio.h>

// int main(void)
// {
//   double d = 8.5 / 2;  //2(int型)を2.0(double型)に変更してから計算
//   long l = 5 + 2L;  //5(int型)を5L(long型)に変更してから計算
//   printf("%f¥n", d);
//   printf("%ld¥n", l);  //longの場合は%ldを使う
//   return 0;
// }

#include <stdio.h>

int main(void)
{
  int age = 29;
  printf("今年%d歳で、", age);
  int newAge = age + 1;
  printf("来年%d歳ですね¥n", newAge);
  return 0;
}

// printf("来年%dですね", age + 1);  //命令実行の文の中で指揮を使える。