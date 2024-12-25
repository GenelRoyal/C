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


// #include <stdio.h>

// int main(void)
// {
//   bool tenki = false;
//   if (tenki == true) { //内容が2行なので波括弧省略不可
//     printf("洗濯をする\n");
//     printf("散歩をする\n");
//   } else //内容が1行なので波括弧省略可能
//     printf("映画を観る\n");
//   return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// typedef char String[1024];

// int main(void)
// {
//   String answerNo;
//   printf("かっこよくて最高な、C言語男子の名前は？\n");
//   printf("1:ミナト 2:genel 3:ツバサ 4:タカシ\n");
//   scanf("%s", answerNo);
//   int n = atoi(answerNo);  //入力された数値の文字列をintに変換
//   if (n == 2)　　　　　　 //数値なら==で比較してok!
//     printf("大正解！ 見る目あるね！\n");
//   else
//     printf("残念。\n");
//   return 0;
// }


#include <stdio.h>

int main(void)
{
  printf("いただきます\nバナナを食べます\n");
  
  bool more = false;
  if (more)
    printf("おかわりをください\n");
  else
    printf("お腹いっぱいです\n");
  printf("ごちそうさまでした\n");
  return 0;
}



#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
  int temp = 30;
  int ansNo =1;
  String answer;
  
  while (ansNo == 1) {
    printf("現在の設定温度：%d\n", temp);
    printf("暑いですか？ Yes=1 No=2\n");
    scanf("%s", answer);
    ansNo = atoi(answer);
    if (ansNo == 1) {
      temp = temp - 1;
    } else {
      printf("設定を終了します\n");
    }
  }
  return 0;
}