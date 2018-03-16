#include <stdio.h>
int datum2int(int tag, int monat);


int main(){
  int tag, monat, x, j;
  
  scanf("%d.%d" , &tag, &monat);
  datum2int(tag , monat);
  printf("Tag: %d\n" , x);

  return 0;
}
int datum2int(int tag, int monat){
  int x, j, t, m;
  t = tag;
  m = monat;
 
  switch (monat){

  case 1:
    j = 0;
    break;

  case 2:
    j = 31;
    break;

  case 3:
    j = 59;
    break;

  case 4:
    j = 90;
    break;

  case 5:
    j = 120;
    break;

  case 6:
    j = 151;
    break;

  case 7:
    j = 181;
    break;

  case 8:
    j = 212;
    break;

  case 9:
    j = 243;
    break;

  case 10:
    j = 273;
    break;

  case 11:
    j = 304;
    break;

  case 12:
    j = 334;
    break;
  }
  return j;

  x = tag + j;

  return x;
}
