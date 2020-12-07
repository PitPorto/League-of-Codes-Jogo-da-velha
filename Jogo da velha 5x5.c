#include <stdio.h>
	#include <stdlib.h>
	#define x 1
	#define o 2
	
		
			int Lertabuleiro();
			
			int jogo [5][5] = {
			 0,0,0,0,0,
			 0,0,0,0,0,
			 0,0,0,0,0,
			 0,0,0,0,0,
			 0,0,0,0,0
			
			};
			
			void ler_Jogo(){
				int i, j;
				printf("      1     2     3     4    5  \n");
				for(i=0;i<5;i++){
					printf("%d ",i+1);
					for(j=0;j<5;j++){
						if(jogo[i][j]==x) printf(" |   x");
						if(jogo[i][j]==o) printf(" |   o");
						if(jogo[i][j]==0) {
							if(i==2)printf(" | ");
							else printf(" | ");
							if(i==3)printf("___");
							else printf("___");
							
						}
					}
					printf("  \n");
				}
				printf("\n");
			}
						
			int Lertabuleiro(){
				if(jogo[0][0] ==x &&   jogo[0][1] ==x &&   jogo[0][2] ==x &&   jogo[0][3] ==x &&   jogo[0][4] ==x)
				   return 1;
				else if(jogo[0][0] ==o &&   jogo[0][1] ==o &&   jogo[0][2] ==o &&   jogo[0][3] ==o &&   jogo[0][4] ==o)
				   return 2;
				if(jogo[1][0] ==x &&   jogo[1][1] ==x &&   jogo[1][2] ==x &&   jogo[1][3] ==x &&   jogo[1][4] ==x)
				   return 1;
				else if(jogo[1][0] ==o &&   jogo[1][1] ==o &&   jogo[1][2] ==o &&   jogo[1][3] ==o &&   jogo[1][4] ==o)
				   return 2;
				if(jogo[2][0] ==x &&   jogo[2][1] ==x &&   jogo[2][2] ==x &&   jogo[2][3] ==x &&   jogo[2][4] ==x)
				   return 1;
				else if(jogo[2][0] ==o &&   jogo[2][1] ==o &&   jogo[2][2] ==o &&   jogo[2][3] ==o &&   jogo[2][4] ==o)
				   return 2;
				   	if(jogo[3][0] ==x &&   jogo[3][1] ==x &&   jogo[3][2] ==x &&   jogo[3][3] ==x &&   jogo[3][4] ==x)
				   return 1;
				else if(jogo[3][0] ==o &&   jogo[3][1] ==o &&   jogo[3][2] ==o &&   jogo[3][3] ==o &&   jogo[3][4] ==o)
				   return 2;
				   	if(jogo[4][0] ==x &&   jogo[4][1] ==x &&   jogo[4][2] ==x &&   jogo[4][3] ==x &&   jogo[4][4] ==x)
				   return 1;
				else if(jogo[4][0] ==o &&   jogo[4][1] ==o &&   jogo[4][2] ==o &&   jogo[4][3] ==o &&   jogo[4][4] ==o)
				   return 2;
				   
				   
				else if(jogo[0][0] ==x &&   jogo[1][0] ==x &&   jogo[2][0] ==x &&   jogo[1][4] ==x &&   jogo[2][4] ==x)
				   return 1;
				else if(jogo[0][0] ==o &&   jogo[1][0] ==o &&   jogo[2][0] ==o &&   jogo[1][4] ==o &&   jogo[2][4] ==o)
				   return 2;
				else if(jogo[0][1] ==x &&   jogo[1][1] ==x &&   jogo[2][1] ==x &&   jogo[1][4] ==x &&   jogo[2][4] ==x)
				   return 1;
				else if(jogo[0][1] ==o &&   jogo[1][1] ==o &&   jogo[2][1] ==o &&   jogo[1][4] ==o &&   jogo[2][4] ==o)
				   return 2;
				else if(jogo[0][2] ==x &&   jogo[1][2] ==x &&   jogo[2][2] ==x &&   jogo[1][4] ==x &&   jogo[2][4] ==x)
				   return 1;
				else if(jogo[0][2] ==o &&   jogo[1][2] ==o &&   jogo[2][2] ==o &&   jogo[1][4] ==o &&   jogo[2][4] ==o)
				   return 2;
				else if(jogo[0][3] ==x &&   jogo[1][3] ==x &&   jogo[2][3] ==x &&   jogo[1][4] ==x &&   jogo[2][4] ==x)
				   return 1;
				else if(jogo[0][3] ==o &&   jogo[1][3] ==o &&   jogo[2][3] ==o &&   jogo[1][4] ==o &&   jogo[2][4] ==o)
				   return 2;
				else if(jogo[0][4] ==x &&   jogo[1][4] ==x &&   jogo[2][4] ==x &&   jogo[1][4] ==x &&   jogo[2][4] ==x)
				   return 1;
				else if(jogo[0][4] ==o &&   jogo[1][4] ==o &&   jogo[2][4] ==o &&   jogo[3][4] ==o &&   jogo[4][4] ==o)
				   return 2;
				   
				 else if(jogo[0][0] ==x &&   jogo[1][1] ==x &&   jogo[2][2] ==x &&   jogo[3][3] ==x &&   jogo[4][4] ==x)
				   return 1;
				 else if(jogo[0][0] ==o &&   jogo[1][1] ==o &&   jogo[2][2] ==o &&   jogo[3][3] ==o &&   jogo[4][4] ==o)
				   return 2;  
				 else if(jogo[0][4] ==x &&   jogo[1][1] ==x &&   jogo[2][2] ==x &&   jogo[3][3] ==x &&   jogo[4][0] ==x)
				   return 1;
				 else if(jogo[0][4] ==o &&   jogo[1][1] ==o &&   jogo[2][2] ==o &&   jogo[3][3] ==o &&   jogo[4][0] ==o)
				   return 2;   
				
				else return 0;
			}		
					
			int main(){
				int i, j; 
				int rodada=0;
				int vencedor=0; 
				int escolha;
				printf("\t \t JOGO DA VELHA \n\n");
				printf("Começar a jogar (1)\n");
				printf("Sair (2)\n");
				printf("escolha:  \n");
				scanf("%d", &escolha);
				if(escolha=1){
					while(vencedor==0){
				    jg1: system ("cls");
						ler_Jogo();
						printf("vez do jogador 1. \n");
						printf("Digite a linha e a coluna: \n");
						scanf("%d %d", &i, &j);
						if (i<1 || i>5 || j<1 || j>5){
							printf("escolha invalida! digite de 1 a 5\n");
							
							goto jg1;
							
						}
					if (jogo[i-1][j-1]==x || jogo[i-1][j-1]==o)	{
						printf("lugar ocupado.\n");
							
							goto jg1;
					}
					jogo[i-1][j-1]=x;
					vencedor = Lertabuleiro();
					if (vencedor != 0) break;
					rodada++;
					if(rodada==25 && vencedor == 0) vencedor=5;
					jg2: system ("cls");
					ler_Jogo();
					printf("vez do jogador 2. \n");
					printf("Digite a linha e a coluna: \n");
					scanf("%d %d", &i, &j);
					if (i<1 || i>5 || j<1 || j>5){
							printf("escolha invalida! digite de 1 a 5\n");
							
							goto jg2;
					}
					if (jogo[i-1][j-1]==x || jogo[i-1][j-1]==o)	{
						printf("lugar ocupado.\n");
							
							goto jg2;
					}
					jogo[i-1][j-1]=o;
					vencedor = Lertabuleiro();
					if (vencedor != 0) break;
                	rodada++;
					if(rodada==25 && vencedor == 0) vencedor = 5;
					
				}
				system ("cls");
				ler_Jogo();
				if(vencedor !=3) printf("O jogador %d venceu! \n\n",vencedor);
				else printf("Empate\n");
				}
				
				exit(2);
	}

