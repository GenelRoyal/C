#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(nullptr));  //乱数整数の準備
  enum {FIRE, WATER, WIND, EARTH}; //宝石の属性を表す定数(0~3)
  
  //宝石の属性をランダムに決定
  for (int i = 0; i < 10; i++) {
    int gemType = rand() % 4;
    switch (gemType) {
      case FIRE: printf("$"); break;
      case WATER: printf("~"); break;
      case WIND: printf("@"); break;
      case EARTH: printf("#"); break;
    }
    printf(" ");  //見やすいようにスペースを入れる
  }
  printf("\n");  //最後に改行しておく
  return 0;
}


#include <stdio.h>

int main(void)
{
  int gems[10];
  gems[1] = 3;
  printf("%d\n", gems[1]);
  return 0;
}


#include <stdio.h>

int main(void)
{
  int gems[10] = {};
  printf("%d\n", gems[0]);
  printf("%d\n", gems[1]);
  printf("%d\n", gems[5]);
  printf("%d\n", gems[9]);
  return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(nullptr)); //乱数生成の準備
  enum {FIRE, WATER, WIND, EARTH}; //宝石の属性を表す定数(0~3)
  int gems[10];
  
  //宝石をランダムに生成
  for (int i = 0; i < 10; i++) {
    int gemType = rand() % 4;
    gems[i] = gemType; //ループのたびにiの値が0~9で変化する
  }
  
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int scores[] = {75, 57, 90, 46, 82}; //５教科のテスト結果
  int sum = 0; //合計を0でリセット
  for (int i = 0; i < 5; i++) {
    sum += scores[i]; //１科目ずつsumに足していく
  }
  int avg = sum / 5; //合計を科目数で割る
  printf("合計点：%d\n", sum);
  printf("平均点：%d\n", avg);
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(nullptr)); //乱数生成の準備
  enum {FIRE, WATER, WIND, EARTH}; //宝石の属性を表す定数(0~3)
  int gems[10];
  
  //宝石をランダムに生成
  for (int i = 0; i < 10; i++) {
    int gemType = rand() % 4;
    gems[i] = gemType; //ループのたびにiの値が0~9で変化する
  }
  
  //次に宝石10個の内容を画面に表示
  for (int i = 0; i < 10; i++) {
    switch (gems[i]) {
      case FIRE: printf("$"); break;
      case WATER: printf("~"); break;
      case WIND: printf("@"); break;
      case EARTH: printf("#"); break;
    }
    printf(" "); //見やすいようにスペースを入れる
  }
  
  printf("\n");  //最後に改行しておく
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(nullptr)); //乱数生成の準備
  enum {FIRE, WATER, WIND, EARTH}; //宝石の属性を表す定数(0~3)
  const char GEM_CHARS[] = {'$', '~', '@', '#'};
  int gems[10];
  
  //宝石をランダムに生成
  for (int i = 0; i < 10; i++) {
    int gemType = rand() % 4;
    gems[i] = gemType; //ループのたびにiの値が0~9で変化する
  }
  
  //次に宝石10個の内容を画面に表示
  for (int i = 0; i < 10; i++) {
    printf("%c ", GEM_CHARS[gems[i]]); //%c = char型を流し込むためのプレースホルダ
  }
  
  printf("\n");  //最後に改行しておく
  return 0;
}



#include <stdio.h>

int main(void)
{
  int scores[2][3];  //2人×3項目分の2次元配列を準備
  scores[0][0] = 80;
  scores[0][1] = 77;
  scores[0][2] = 65;
  scores[1][0] = 51;
  scores[1][1] = 80;
  scores[1][2] = 95;
  
  for (int i = 0; i < 2; i++) {
    printf("%d人目の点数を表示します\n", i + 1);
    for (int j = 0; j < 3; j++) {
      printf("%d科目め：%d\n", j + 1, scores[i][j]);
    }
  }
  
  return 0;
}