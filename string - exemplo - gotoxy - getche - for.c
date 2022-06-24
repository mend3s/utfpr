#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

int main(){
  char dia[3], mes[3], ano[5];
  int d, m, a, i;
  printf("Digite uma data DD/MM/AAAA -->   /  /    ");

  gotoxy(32,1);
  for(i = 0;i <= 1;i++)
  	dia[i] = getche();
  dia[i] = '\0';
  d = atoi(dia);

  gotoxy(35,1);
  for(i = 0;i <= 1;i++)
  	mes[i] = getche();
  mes[i] = '\0';
  m = atoi(mes);

  gotoxy(38,1);
  for(i = 0;i <= 3;i++)
  	ano[i] = getche();
  ano[i] = '\0';
  a = atoi(ano);

  gotoxy(1,4);
  printf("\nData = %02d/%02d/%04d",d,m,a);

  return 0;

}


