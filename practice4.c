// #include <stdio.h>

// int main(void)
// {
//   bool tenki = true;
//   if (tenki == true) { //もし変数tenkiがtrueだったら
//     printf("洗濯をします\n");
//     printf("散歩に行きます\n");
//   } else { //そうでなければ
//     printf("映画を観ます\n");
//   }
//   return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//   bool lowCharging = true;
//   while (lowCharging == true) { //バッテリーが少ない間は
//     printf("30分充電する\n");
//   }
//   return 0;
// }


#include <stdio.h>

int main(void)
{
  bool tenki = false;
  if (tenki == true) { //内容が2行なので波括弧省略不可
    printf("洗濯をする\n");
    printf("散歩をする\n");
  } else //内容が1行なので波括弧省略可能
    printf("映画を観る\n");
  return 0;
}