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

#include <stdio.h>

int main(void)
{
  float f = 3;  //float型の変数にint型を代入
  double d = f;  //double型の変数にfloat型を代入
  printf("%f¥n", f);  //小数の場合は%fを使う
  printf("%f¥n", d);
  return 0;
}
