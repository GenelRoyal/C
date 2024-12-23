// #include <stdio.h>

// int main(void)
// {
//   printf("%dバイト\n", (int)(sizeof(char)));
//   return 0;
// }

//int population = 121'270'000 //入れる位置は自由(実行時は無視される)  

#include <stdio.h>

int main(void)
{
  char c = 100;
  char d = c + 100;  //ここで溢れるはず！
  printf("%d\n", d);
  return 0;
}