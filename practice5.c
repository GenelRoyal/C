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

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//   enum {DAIKICHI = 1, CHUKICHI, KICHI, KYO};
// //   const int DAIKICHI = 1;
// //   const int CHUKICHI = 2;
// //   const int KICHI = 3;
// //   const int KYO = 4;
  
//   printf("あなたの運勢を占います\n");
//   srand((unsigned)time(nullptr));
//   int fortune = rand () % 4 + 1;
  
//   switch (fortune) {
//     case DAIKICHI: printf("大吉\n"); break;
//     case CHUKICHI: printf("中吉\n"); break;
//     case KICHI: printf("吉\n"); break;
//     default: printf("凶\n");
//   }
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   for (int i = 0; i < 10; i++) {  //10は繰り返す回数
//     printf("こんにちは\n");
//   }
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   for (int i = 0; i < 3; i++) {
//     printf("現在%d周目です\n", i + 1); //i + 1は1周目からを指定
//   }
//   return 0;
// }



// #include <stdio.h>

// int main(void)
// {
//   for (int i = 1; i < 10; i++) {
//     for (int j = 1; j < 10; j++) {
//       printf("%2d", i * j);　//%2d 2桁の幅
//     }
//     printf("\n");
//   }
//   return 0;
// }

#include <stdio.h>

int main(void)
{
  printf("1~4までカウントします\n");
  printf("1\n");
  goto END;  //「END」ラベルまでジャンプしろ
  printf("2\n");
  printf("3\n");
  printf("4\n");
END:  // ラベル「END」
  printf("カウント終了\n");
  return 0;
}