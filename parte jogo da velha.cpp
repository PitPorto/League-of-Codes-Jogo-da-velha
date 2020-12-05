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
						if (i<1 || i>3 || j<1 || j>3){
							printf("escolha invalida! digite de 1 a 3\n");
							
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
					if(rodada==9 && vencedor == 0) vencedor=3;
					jg2: system ("cls");
					ler_Jogo();
					printf("vez do jogador 2. \n");
					printf("Digite a linha e a coluna: \n");
					scanf("%d %d", &i, &j);
					if (i<1 || i>3 || j<1 || j>3){
							printf("escolha invalida! digite de 1 a 3\n");
							
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
					if(rodada==9 && vencedor == 0) vencedor = 3;
					
				}
				system ("cls");
				ler_Jogo();
				if(vencedor !=3) printf("O jogador %d venceu! \n\n",vencedor);
				else printf("Empate\n");
				}
				
				exit(2);
	}

