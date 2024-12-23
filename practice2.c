// #include <stdio.h>

// int main(void)
// {
//   printf("%dバイト\n", (int)(sizeof(char)));
//   return 0;
// }

//int population = 121'270'000 //入れる位置は自由(実行時は無視される)  

// #include <stdio.h>

// int main(void)
// {
//   char c = 100;
//   char d = c + 100;  //ここで溢れるはず！
//   printf("%d\n", d);
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   int x = 20;
//   printf("%d\n", x);
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   int number = 7;
//   printf("私の好きな数字は%dです\n", number);
//   number = 3;
//   printf("本当に好きなのは%dです\n", number);
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   const double PI = 3.14;
//   int pie = 5;
//   printf("パイの半径を倍にします\n");
//   printf("半径%dcmのパイの面積は%f\n", pie, pie * pie * PI);
//   return 0;
// }

#include <stdio.h>

typedef char String[1024];

int main(void)
{
  String monsterName = "ドラゴン";
  printf("敵は%s\n", monsterName);
  return 0;
}