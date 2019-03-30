#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void calculaDeterminanteHasta4(int mat[][300], int N)
{
	int i,j;
	for (i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout << "Elemento de la fila " << i+1 << ", columna " << j+1 << ": ";
			cin >> mat[i][j];
		}
		cout << endl;
	}
	cout << endl;
	if (N==1)
	{
		cout << "Determinante: " << mat[0][0] << endl;
	}
	else if (N==2)
	{
		cout << "Determinante: " << ((mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0])) << endl;
	}
	else if (N==3)
	{
		cout << "Determinante: " << (mat[0][0]*((mat[1][1]*mat[2][2])-(mat[1][2]*mat[2][1]))-mat[0][1]*((mat[1][0]*mat[2][2])-(mat[1][2]*mat[2][0]))+mat[0][2]*((mat[1][0]*mat[2][1])-(mat[1][1]*mat[2][0]))) << endl;
	}
	else if (N==4)
	{
		cout << "Determinante: " << (mat[0][0]*(mat[1][1]*(mat[2][2]*mat[3][3]-mat[2][3]*mat[3][2])-mat[1][2]*(mat[2][1]*mat[3][3]-mat[2][3]*mat[3][1])+mat[1][3]*(mat[2][1]*mat[3][2]-mat[2][2]*mat[3][1]))-mat[0][1]*(mat[1][0]*(mat[2][2]*mat[3][3]-mat[2][3]*mat[3][2])-mat[1][2]*(mat[2][0]*mat[3][3]-mat[2][3]*mat[3][0])+mat[1][3]*(mat[2][0]*mat[3][2]-mat[2][2]*mat[3][0]))+mat[0][2]*(mat[1][0]*(mat[2][1]*mat[3][3]-mat[2][3]*mat[3][1])-mat[1][1]*(mat[2][0]*mat[3][3]-mat[2][3]*mat[3][0])+mat[1][3]*(mat[2][0]*mat[3][1]-mat[2][1]*mat[3][0]))-mat[0][3]*(mat[1][0]*(mat[2][1]*mat[3][2]-mat[2][2]*mat[3][1])-mat[1][1]*(mat[2][0]*mat[3][2]-mat[2][2]*mat[3][0])+mat[1][2]*(mat[2][0]*mat[3][1]-mat[2][1]*mat[3][0]))) << endl;
	}
}

int main()
{
	int N;
	char resp;
	int mat[300][300];
	cout << "Calculo de determinantes (Orden 1, 2, 3 y 4)" << endl;
	cout << endl;
	cout << "Desea iniciar? (S/N): ";
	cin >> resp;
	cout << endl;
	while((resp!='N')&&(resp!='n'))
	{
		cout << "Ingrese orden de la matriz (1, 2, 3 o 4): ";
		cin >> N;
		cout << endl;
		
		calculaDeterminanteHasta4(mat,N);
		
		cout << endl;
		cout << "Desea volver a calcular? (S/N):";
		cin >> resp;
		
		system("cls");
	}
	
	system("cls");
	
	cout << "\nDesarrollado por Francisco Elias Dreher";
	getch();
	
	return 0;
}

