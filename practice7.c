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