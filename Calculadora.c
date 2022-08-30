//Calculadora:
//Imports(Bibliotecas):
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Int main e locale:
int main(void){
setlocale(LC_ALL,"Portuguese");
//Vari�veis:
int operacao_menu, operacao_basic, operacao_fg, operacao_form, operacao_extra, somar_1, somar_2, somar_r, subtrair_1, subtrair_2, subtrair_r, multiplicar_1, multiplicar_2, multiplicar_r, raiz_1, raiz_r, potencia_1, potencia_2, potencia_r, bhaskara_a, bhaskara_b, bhaskara_c, bhaskara_delta, bhaskara_r1, bhaskara_r2, quadrado_1, quadrado_2, quadrado_r, triangulo_base, triangulo_altura, triangulo_r; 
float porcen_1, porcen_2, porcen_r, circulo_1, circulo_r, dividir_1, dividir_2, dividir_r;
//Intera��o:
printf("\n[Calculadora (V3.5)]\n\n");
printf("[Desenvolvido por: Matt]\n[Github: M4ttPizz4]\n\n");
printf("Selecione a opera��o teclando o n�mero correspondente e pressionando 'Enter':\n\n1.Opera��es b�sicas.\n2.Raiz Quadrada.\n3.Pot�ncia.\n4.F�rmula de Bh�skara.\n5.Porcentagem.\n6.Figuras geom�tricas.\n0.F�rmulas matem�ticas.\n\n");
scanf("%i", &operacao_menu);
printf("\n------------------------------------------------------------------------\n\n");
	//Opera��es b�sicas:
	if(operacao_menu == 1){
		printf("Selecione qual opera��o b�sica deseja realizar e pressione a tecla 'Enter':\n\n1.Somar.\n2.Subtrair.\n3.Multiplicar.\n4.Dividir.\n\n");
		scanf("%i", &operacao_basic);
		printf("\n------------------------------------------------------------------------\n\n");
	}
		//Somar:
	if(operacao_basic == 1){
		printf("Para come�ar a soma, digite o primeiro n�mero e em seguida aperte 'Enter':\n\n");
		scanf("%i", &somar_1);
		printf("\nDigite o segundo n�mero:\n\n");
		scanf("%i", &somar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			somar_r = somar_1 + somar_2;	//C�lculo
		printf("O resultado da soma � : %i \n", somar_r);
	}
		//Subtrair:
	if(operacao_basic == 2){
		printf("Para come�ar a subtra��o, digite o primeiro n�mero e em seguida aperte 'Enter':\n\n");
		scanf("%i", &subtrair_1);
		printf("\nDigite o segundo n�mero:\n\n");
		scanf("%i", &subtrair_2);
		printf("\n------------------------------------------------------------------------\n\n");
			subtrair_r = subtrair_1 - subtrair_2;	//C�lculo
		printf("O resultado da subtra��o � : %i \n", subtrair_r);
	}
		//Multiplica��o:
	if(operacao_basic == 3){
		printf("Para come�ar a multiplica��o, digite o primeiro n�mero e em seguida aperte 'Enter':\n\n");
		scanf("%i", &multiplicar_1);
		printf("\nDigite o segundo n�mero:\n\n");
		scanf("%i", &multiplicar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			multiplicar_r = multiplicar_1 * multiplicar_2;	//C�lculo
		printf("O resultado da multiplica��o � : %i \n", multiplicar_r);
	}
		//Divis�o:
	if(operacao_basic == 4){
		printf("Para come�ar a divis�o, digite o primeiro n�mero e em seguida aperte 'Enter':\n\n");
		scanf("%f", &dividir_1);
		printf("\nDigite o segundo n�mero:\n\n");
		scanf("%f", &dividir_2);
		printf("\n------------------------------------------------------------------------\n\n");
			dividir_r = dividir_1 / dividir_2;	//C�lculo
		printf("O resultado da divis�o � : %f. \n", dividir_r);
		}
	//Raiz Quadrada:
	if(operacao_menu == 2){
		printf("Para calcular a raiz, digite o n�mero que desejar e aperte 'Enter':\n\n");
		scanf("%i", &raiz_1);
		printf("\n------------------------------------------------------------------------\n\n");
			raiz_r = sqrt(raiz_1);	//C�lculo
		printf("O resultado da raiz quadrada � : %i. \n", raiz_r);
	}
	//Pot�ncia:
	if(operacao_menu == 3){
		printf("Para calcular a pot�ncia, digite o n�mero que desejar e aperte 'Enter':\n\n");
		scanf("%i", &potencia_1);
		printf("Digite o expoente do seu n�mero:\n\n");
		scanf("%i", &potencia_2);
		printf("\n------------------------------------------------------------------------\n\n");
			potencia_r = pow(potencia_1, potencia_2);
		printf("O resultado da potencia��o � : %i. \n", potencia_r);
	}
	//Bh�skara:
	if(operacao_menu == 4){
		printf("Para fazer o c�lculo da f�rmula de bhaskara digite o n�mero correspondente a 'A' e aperte 'Enter':\n\n");
		scanf("%d", &bhaskara_a);
		printf("\nDigite o valor de 'B':\n\n");
		scanf("%d", &bhaskara_b);
		printf("\nDigite o valor de 'C':\n\n");
		scanf("%d", &bhaskara_c);
			bhaskara_delta = pow(bhaskara_b, 2) - 4*bhaskara_a*bhaskara_c;	//C�lculo de delta
			bhaskara_r1 = -bhaskara_b+sqrt(bhaskara_delta)/(2*bhaskara_a);	//C�lculo de X1
			bhaskara_r2 = -bhaskara_b-sqrt(bhaskara_delta)/(2*bhaskara_a);	//C�lculo de X2
		printf("\n------------------------------------------------------------------------\n\n");
		printf("Utilizando raiz de delta positivo em X1 e raiz de delta negativo em X2, podemos adquirir o seguinte resultado:\nX1 = %d. \nX2 = %d. \n\n", bhaskara_r1, bhaskara_r2);
	}
	//Porcentagem:
	if(operacao_menu == 5){
		printf("\nPara calcular a porcentagem, digite o valor que deseja ser o porcento 'Enter':\n\n");
		scanf("%f", &porcen_1);
		printf("\nDigite o valor de onde o porcento ir� retirar o resultado:\n\n");
		scanf("%f", &porcen_2);
			porcen_r = porcen_2*(porcen_1/100);		//C�lculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("O resultado desse c�lculo �: %f. \n", porcen_r);
	}
	//�reas de figuras geom�tricas:
	if(operacao_menu == 6){
		printf("\nSelecione a figura geom�trica que desejar para calcular sua �rea:\n\n1.Quadrado ou ret�ngulo.\n2.C�rculo.\n3.Tri�ngulo.\n\n");
		scanf("%i", &operacao_fg);
	}
		//Quadrado/Ret�ngulo:
	if(operacao_fg == 1){
		printf("\nPara continuar a opera��o, informe o valor do lado de cima ou de baixo do quadrado/ret�ngulo: _\n\n");
		scanf("%i", &quadrado_1);
		printf("\nInsira o valor do lado esquerdo ou direito do quadrado/ret�ngulo: |\n\n");
		scanf("%i", &quadrado_2);
			quadrado_r = quadrado_1 * quadrado_2;	//C�lculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("O valor da �rea do quadrado/ret�ngulo �: %i \n", quadrado_r);
	}
		//C�rculo:
		if(operacao_fg == 2){
		printf("\nPara calcular a �rea do c�rculo, insira o valor do raio:\n\n");
		scanf("%f", &circulo_1);
			circulo_r = 3.14 * pow(circulo_1, 2);	//C�lculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("O valor da �rea do c�rculo � : %f \n", circulo_r);
	}
		//Tri�ngulo:
		if(operacao_fg == 3){
		printf("\nPara calcular a �rea do tri�ngulo, insira o valor da base:\n\n");
		scanf("%i", &triangulo_base);
		printf("\nInsira o valor da altura:\n\n");
		scanf("%i", &triangulo_altura);
			triangulo_r = (triangulo_base*triangulo_altura)/2;	//C�lculo
		printf("\n------------------------------------------------------------------------\n\n");
		printf("O valor da �rea do tri�ngulo � : %i \n", triangulo_r);
		}
	//F�rmulas matem�ticas:
		if(operacao_menu == 0){
		printf("\nDigite o n�mero correspondente a cada formula e pressione a tecla 'Enter':\n1.F�rmula de Bh�skara.\n2.Relatividade.\n3.�rea do quadrado/ret�ngulo.\n4.Circunfer�ncia.\n5.�rea do Tri�ngulo.\n6.Extras.\n\n");
		scanf("%i", &operacao_form);
		printf("\n------------------------------------------------------------------------\n\n");
		}
		//F�rmula de Bh�skara:
		if(operacao_form == 1){
		printf("delta = b� - 4*a*c\n\n-b +-raiz{delta}/2*a.\n");
		}
		//Relatividade:
		if(operacao_form == 2){
		printf("E = m*c*2.\n");
		}
		//�rea do quadrado/ret�ngulo:
		if(operacao_form == 3){
		printf("�rea = Base * Altura.\n");
		}
		//Circunfer�ncia:
		if(operacao_form == 4){
		printf("C = 2*pi*r.\n");
		}
		//Tri�ngulo:
		if(operacao_form == 5){
		printf("A = base*altura/2.\n");
		}
			//Extras:
		if(operacao_form == 6){
		printf("Insira o n�mero correspondente a op��o desejada:\n\n1.Valor de pi.\n2.Gravidade do planeta terra.\n3.Gravidade da lua da terra.\n\n");
		scanf("%i", &operacao_extra);
		}
				//Valor de Pi:
		if(operacao_extra == 1){
		printf("O valor de Pi �: 3,14159265358979323846�\n");
		}
				//Gravidade do planeta terra:
		if(operacao_extra == 2){
		printf("A gravidade da terra �: 9,807 m/s�.\n");
		}
				//Gravidade da lua:
		if(operacao_extra == 3){
		printf("A gravidade da lua �: 1,62 m/s�.\n");
		}
//Finaliza��es:
printf("\n------------------------------------------------------------------------\n\n");
printf("|***Obrigada pela visita! Feche a aplica��o.<3***|\n\n");
system("Pause");
return 0;
}
//Fim do c�digo.
