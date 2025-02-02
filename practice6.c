// #include <stdio.h>

// typedef char String[1024];

// int main(void)
// {
//   struct MONSTER {
//     String name;
//     int hp;
//     int attack;
//   };
  
//   struct MONSTER seiryu;
//   struct MONSTER suzaku;
//   struct MONSTER byakko;
//   struct MONSTER genbu;
  
//   return 0;
// }


// #include <stdio.h>

// typedef char String[1024];

// int main(void)
// {
//   typedef struct {
//     String name;
//     int hp;
//     int attack;
//   } Monster;
  
//   Monster seiryu = {"青龍", 80, 15};
//   Monster suzaku = {"朱雀", 100, 30};
//   Monster byakko = {"白虎", 100, 20};
//   Monster genbu = {"玄武", 120, 10};
  
//   const String TEMPLATE = "%s : HP=%3d 攻撃力=%2d\n";
//   printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);
//   printf(TEMPLATE, suzaku.name, suzaku.hp, suzaku.attack);
//   printf(TEMPLATE, byakko.name, byakko.hp, byakko.attack);
//   printf(TEMPLATE, genbu.name, genbu.hp, genbu.attack);
//   return 0;
// }



// #include <stdio.h>

// int main(void)
// {
//   typedef struct {
//     int x;
//     int y;
//   } Point;
  
//   Point p1 = {50, 70};
//   p1.x++;
//   p1.y++;
  
//   return 0;
// }


#include <stdio.h>

typedef char String[1024];

int main(void)
{
  typedef struct {
    String title;
    String from;
    String datetime;
    int size;
    bool attached;
    String body;
  } Mail;
  
  Mail m = {"あけましておめでとう", "appare@ziroulink.jp",
      "2025/01/01 10:10:58", 302, false};
      
  printf("%sさんから、%sにメールです。サイズは%dKB、添付は%s。\n",
      m.from, m.datetime, m.size, m.attached ? "あり" : "なし");

  return 0;
}