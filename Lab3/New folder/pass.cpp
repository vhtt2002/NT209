#include <iostream>
#include <string.h>

using namespace std;
int main()
{
  size_t v0; // ebx@2
  char result[9]; // eax@3
  size_t v2; // eax@15
  size_t v3; // edx@16
  char v4[9]; // [sp+Ah] [bp-2Eh]@6
  char v5[10]; // [sp+13h] [bp-25h]@1
  char s[10]; // [sp+1Dh] [bp-1Bh]@1
  char v7[5]; // [sp+27h] [bp-11h]@1
  unsigned int i; // [sp+2Ch] [bp-Ch]@4

  v7[0] = 89;
  v7[1] = 101;
  v7[2] = 71;
  v7[3] = 64;
  v7[4] = 125;
  cout << ("Enter your username:");
  cin >> s;
  {
    for ( i = 0; (signed int)i <= 8; ++i )
    {
      if ( (signed int)i > 1 )
      {
        if ( (signed int)i > 3 )
          v4[i] = v7[i - 4];
        else
          v4[i] = s[i + 5];
      }
      else
      {
        v4[i] = s[i + 2];
      }
    }
    int x = sizeof v4;
    for ( i = 0; i < x ; ++i )
   {
        result[i] = (s[i] + v4[i]) / 2;
   } 

    for ( i = 0; i < x ; ++i )
   {
       cout << result[i] ;
   } 
  }

  return 0;
}