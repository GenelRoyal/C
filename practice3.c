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

#include <stdio.h>

typedef char String[1024];

int main(void)
{
  int age = 29;
  String name = "かいとう";
  printf("私は%d歳の%sです。¥n", age, name);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>. //この行を忘れずに

typedef char String[1024];

int main(void)
{
  String age = "29";
  int n = atoi(age);
  printf("あなたは来年%d歳になります。¥n", n + 1);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)   
{ 
  srand((unsigned)time(nullptr));          //コンパイルエラーが発生する場合はNULLに置き換えてください。
  int r =rand() % 100; 
  printf("あなたはたぶん、%d歳ですね？¥n", r);
  return 0;
}

#include <stdio.h>
#include <stdlib.h> //atoi()のために必要。

typedef char String[1024];

int main(void)
{
  String name;
  printf("あなたの名前を入力してください。¥n");
  scanf("%s", name);
  
  String ageStr;
  printf("あなたの年齢を入力してください。¥n");
  scanf("%s", ageStr);
  
  int age = atoi(ageStr);
  printf("ようこそ、%d歳の%sさん。¥n", age, name);
  return 0;
}

応用自己開発
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
  String name;
  printf("あなたの名前を入力してください。\n");
  scanf("%s", name);
  
  srand((unsigned)time(nullptr));
  int r = rand() % 4;
  
  printf("%sさんの今日の運勢は...\n", name);
  switch (r) {
    case 0: printf("大吉！最高の一日です！\n"); break;
    case 1: printf("中吉！良いことがあるかも！\n"); break;
    case 2: printf("小吉！少し良いことがあるかも！\n"); break;
    case 3: printf("凶…注意して過ごしましょう。\n"); break;
  }
  return 0;
}

