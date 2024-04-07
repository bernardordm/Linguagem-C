#include <stdio.h>

int calculadoraSalario(int x, int y, int z, int t){
  
  printf("Digite o valor da hora de salário:\n");
  scanf("%d", &x);
  
  printf("Digite o quantidade de horas trabalhadas:\n");
  scanf("%d", &y);
  z = y * x;
  t = z * 0.93;
  return t;
}
int main(void) {
  int valor, horas, parcial, total;
  printf("O salário líquido é %d", calculadoraSalario(valor, horas, parcial, total));}
  