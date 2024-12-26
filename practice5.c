// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//   printf("あなたの運勢を占います\n");
//   srand((unsigned)time(nullptr));
//   int fortune = rand () % 4 + 1; //1~4の乱数発生
  
//   switch (fortune) {
//     case 1: printf("大吉\n"); break;
//     case 2: printf("中吉\n"); break;
//     case 3: printf("吉\n"); break;
//     default: printf("凶\n");
//   }
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//   printf("あなたの運勢を占います\n");
//   srand((unsigned)time(nullptr));
//   int fortune = rand () % 5 + 1;
  
//   switch (fortune) {
//     case 1: //FALL THROUGH
//     case 2: printf("いいね!\n"); break;
//     case 3: printf("普通です\n"); break;
//     case 4:
//     case 5: printf("うーん•••\n");
//   }
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  enum {DAIKICHI = 1, CHUKICHI, KICHI, KYO};
//   const int DAIKICHI = 1;
//   const int CHUKICHI = 2;
//   const int KICHI = 3;
//   const int KYO = 4;
  
  printf("あなたの運勢を占います\n");
  srand((unsigned)time(nullptr));
  int fortune = rand () % 4 + 1;
  
  switch (fortune) {
    case DAIKICHI: printf("大吉\n"); break;
    case CHUKICHI: printf("中吉\n"); break;
    case KICHI: printf("吉\n"); break;
    default: printf("凶\n");
  }
  return 0;
}