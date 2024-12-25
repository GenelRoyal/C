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


#include <stdio.h>

int main(void)
{
  bool lowCharging = true;
  while (lowCharging == true) { //バッテリーが少ない間は
    printf("30分充電する\n");
  }
  return 0;
}