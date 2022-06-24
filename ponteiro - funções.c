 #include <stdio.h>
 
//protótipos das funções 
void um();
void dois();
void tres();
void quatro();
int calcula(int); 
 
int main(){
	um();
	dois();
	tres();
	quatro();	
	return 0;
} 
 
 void um(){
   int a, b, *c; 
	 a = 3;
   b = 4;
   c = &a;
   b = b + 1;
   *c = a + 2;
   printf("\num --> %d %d\n",a,b);
 }
 
 
void dois(){
  int a, b, *c;
  a = 4;
  b = 3;
  c = &a;
  *c = *c +1;
  c = &b;
  b = b + 4;
  printf("\ndois--> %d %d %d\n",a,b,*c);
}
 
void tres(){
  int a, b, *c, *d, *f;
  a = 4;
  b = 3;
  c = &a;
  d = &b;
  *c = *c / 2;
  f = c;
  c = d;
  d = f;
  printf("\ntres --> %d %d\n",*c,*d);
}
 
void quatro(){
  int a, b, c;
  char d;
  a = 1;
	b = 2;
	c = 3;
	d = 'A';
  a = a + b * c;
  d = (a > 7) ? d - 1 : d + 1; //if ternário
  b = calcula(b);
  c = calcula(calcula(a));
  a = c + 1;
  printf("\nquatro --> %d %d %d %c\n",a,b,c,d);
 }
 
int calcula(int x){
 int i;
 if ((x = x * 2) > 5) 
   return(x + 3);
 for(i = 0;i < 10;i++){
   if (i < 5) 
	   continue;
   if (x > 8) 
	   break;
   x += 2;
 }
 return(x);
}