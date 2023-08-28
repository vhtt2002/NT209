#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
 int result; // eax@15
  int v2; // [sp+1Ch] [bp-1Ch]@1
  int v3; // [sp+20h] [bp-18h]@1
  int v4; // [sp+24h] [bp-14h]@1
  int v5; // [sp+28h] [bp-10h]@1
  int v6; // [sp+2Ch] [bp-Ch]@1
  int a1;

 // v6 = *MK_FP(__GS__, 20);
  v4 = 0;
  v5 = 0;
  //cin>>a1;
  v5 = scanf("%d %d", &v2, &v3);
  if ( v5 <= 1 )
    //explode_bomb();
    cout<<"Fail"<<endl;
  switch ( v2 )
  {
    case 0:
      v4 = 898;
      break;
    case 1:
      v4 = 498;
      break;
    case 2:
      v4 = 292;
      break;
    case 3:
      v4 = 994;
      break;
    case 4:
      v4 = 773;
      break;
    case 5:
      v4 = 813;
      break;
    case 6:
      v4 = 781;
      break;
    case 7:
      v4 = 866;
      break;
    default:
      //explode_bomb();
      cout<<"Fail"<<endl;
      return result;
  }
  if ( v4 != v3 )
    //explode_bomb();
    cout<<"Fail"<<endl;
    return 0;
}
