#include <stdio.h>

int j;  // escopo de arquivo j começa

void f(int i) {         // i de escopo de bloco começa
  int j = 1;            // j de escopo de bloco começa; esconde j de escopo de arquivo
  i++;                  // i refere-se a um parâmetro de função
  for (int i = 0; i < 2; i++) {  // i de escopo de bloco localizado no loop começa
    int j = 2;          // j de escopo de bloco aninhado começa; esconde o j que está aninhando
    printf("%d\n", j);  // j aninhado está no escopo, escreve 2
  }                     // i e j de escopo de bloco aninhado terminam
  printf("%d\n", j);    // o j de escopo aninhador está no escopo, escreve 1
}  // i e j de escopo de bloco terminam
void g(int j);          // j possui escopo de protótipo de função; esconde j de escopo de arquivo

int main(void) {}
