#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
A estrutura tm é definida em C da seguinte forma:
struct tm {
int tm_sec; // Segundos, 0-59
int tm_min; // Minutos, 0-59
int tm_hour; //Horas 0-23
int tm_mday; //dia do mês, 1-31
int tm_mon; //mês a partir de janeiro, 0-11
int tm_year; // anos a partir de 1900
int tm_wday; // dias a partir de domingo, 0-6
int tm_yday; // dias a partir de 1 de janeiro 1-365
int tm_isdst; // Indicador de horário de verão
}
*/
int main()
{
	struct tm *local;
//horário no ponteiro 'local', que aponta para a estrutura tm.
	time_t t;
	int dia, mes, ano, hor, min, seg;
	t = time(NULL);
	local=localtime(&t);
	dia=local->tm_mday;
	mes=local->tm_mon+1;
	ano=local->tm_year+1900;
//é necessário acrescentar 1900 ao ano, pois o sistema retorna a partir de 1900.
//Basicamente, no lugar de 2004, o sistema retorna 104.
	hor=local->tm_hour;
	min=local->tm_min;
	seg=local->tm_sec;
	printf("\n\n %d \n\n", t);
	printf("Data do Sistema: %d/%d/%d\n",dia,mes,ano);
// Retorna a data
	printf("Hora do Sistema: %d:%d:%d\n",hor,min,seg);
// Retorna a hora
	return 0;
}
