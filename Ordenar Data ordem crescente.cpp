#include <iostream>
using namespace std;

const int coluna = 3;

void ordenar(int array[][coluna], int linhas){
	
	int auxiliador;
	
	for(int k = 0; k < linhas-1; k++){
		
		for (int i = 0; i < linhas-1; i++){
			
			if(array[i][2] > array[i+1][2]){
			
				auxiliador = array[i][2];
				array[i][2] = array[i+1][2];
				array[i+1][2] = auxiliador;
				
				auxiliador = array[i][1];
				array[i][1] = array[i+1][1];
				array[i+1][1] = auxiliador;
				
				auxiliador = array[i][0];
				array[i][0] = array[i+1][0];
				array[i+1][0] = auxiliador;
				
			}
			else if(array[i][2] == array[i+1][2] && array[i][1] > array[i+1][1]){
				
				auxiliador = array[i][1];
				array[i][1] = array[i+1][1];
				array[i+1][1] = auxiliador;
				
				auxiliador = array[i][0];
				array[i][0] = array[i+1][0];
				array[i+1][0] = auxiliador;	
			}
			else if(array[i][2] == array[i+1][2] && array[i][1] == array[i+1][1] && array[i][0] == array[i+1][0]){
				
				auxiliador = array[i][0];
				array[i][0] = array[i+1][0];
				array[i+1][0] = auxiliador;	
			}
			
		}
	}
}

void print_Datas(int array[][coluna],int linha){

	for (int i = 0; i < linha ; i++){
		for(int j = 0; j < coluna; j++){
			cout << array[i][j];
			
			if(j!= coluna-1)
				cout << "/";
		}
		cout <<"\n\n";
	}
}

void inserir_datas(int qtLinhas, int matriz[][coluna]){
	
	cout << "\n\nInforme as datas:\n\n";
	
	for (int i = 0; i < qtLinhas; i++){
		
		cout << "\tInforme o dia da " << i+1 << "ª pessoa: ";
		cin >> matriz[i][0];
		
		cout << "\tInforme o mês: " << i+1 << "ª pessoa: ";
		cin >> matriz[i][1];
		
		cout << "\tInforme o ano: " << i+1 << "ª pessoa: ";
		cin >> matriz[i][2];
		
		cout << "\n\t______________________________\n\n";
	}
}

int main (){
	
setlocale(LC_ALL,"Portuguese");
	
	int qtLinhas;
	cout << "Quantas datas: ";
	cin >> qtLinhas;
	
	int matriz[qtLinhas][coluna]; 
	
	inserir_datas(qtLinhas, matriz);
	
	cout << '\n';
	
	system("pause");
	system ("cls");
	
	cout << "Datas informadas:\n\n";
	print_Datas(matriz , qtLinhas);

	ordenar(matriz, qtLinhas);
	cout << "\n\nDatas informadas em ordem:\n\n";
	print_Datas(matriz , qtLinhas);
	
return 0;
}


