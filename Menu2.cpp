#include <stdio.h>
int x;
int menu(){
  printf("\nInforme uma opcao: ");
  printf("\n-----MENU-----");
  printf("\n1 Fatorial");
  printf("\n2 Primo");
  printf("\n3");
  printf("\n4");
  printf("\n5");
  printf("\n6");
  printf("\n7");
  printf("\n8");
  printf("\n9");
  printf("\n");
  scanf("%d",&x);
  return x;
}
int main(void) {
  int fat, n;
  int num, i, resultado = 0;
  menu();
  do{
  switch(x){
    case 1:
      printf("Insira um valor para o qual deseja calcular seu fatorial: ");
      scanf("%d", &n);
      for(fat = 1; n > 1; n = n - 1)
      fat = fat * n;
      printf("\nFatorial calculado: %d", fat);
      menu();
      break;
    
    case 2:
    	printf("Digite um numero: ");
 		scanf("%d", &num);
 
 		for (i = 2; i <= num / 2; i++) {
    		if (num % i == 0) {
       		resultado++;
       		break;
    			}
 			}
 
 			if (resultado == 0)
    			printf("%d \ne um numero primo", num);
 			else{
    			printf("%d \nnao é um numero primo\n", num);
 
 			
			}
    	
    	
    	
      menu();
      break;
    
    case 3:
      menu();
      break;
   
    case 4:
      menu();
      break;
    
    case 5:
      menu();
      break;
    
    case 6:
      menu();
      break;
    
    case 7:
      menu();
      break;
    
    case 8:
      menu();
      break;
    
    case 9:
      menu();
      break;

    default:
      printf("Opcao inexistente\n");
      menu();
      break;
  }
}while (x!=0);
	printf("Finalizando");
}
