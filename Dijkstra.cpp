#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	char nodo_start;
	char nodo_end;
	int N_nodi;
	cout<<"quanti nodi vuoi inserire: ";
	cin>>N_nodi;
	
	int matrix[N_nodi][N_nodi];
	//cout<<rand()%5-1;

	
	for(int i=0;i<N_nodi;i++) {
		for(int j=i+1;j<N_nodi;j++) {
			/*char nodo1 = i+65;
			char nodo2 = j+65;
			cout<<"Inserire il valore del collegamento " <<nodo1<<nodo2<<" : ";
			cin>>matrix[i][j];*/
			matrix[i][j]=rand()%N_nodi-1;
		}
	}
	
	for(int i=0;i<N_nodi;i++) {
			matrix[i][i]=0;
	}
	
	for(int i=0;i<N_nodi;i++) {
		for(int j=i+1;j<N_nodi;j++) {
			matrix[j][i]=matrix[i][j];
		}
	}
	
	for(int i=0;i<N_nodi;i++) {
		for(int j=0;j<N_nodi;j++) {
			if(matrix[i][j]==-1)
				matrix[i][j]=99;
		}
	}
	
	for(int i=0;i<N_nodi;i++) {
		for(int j=0;j<N_nodi;j++) {
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	do { 
		cout<<"inserire il nodo di partenza: ";
		cin>>nodo_start;	
		nodo_start = toupper(nodo_start);
		if(nodo_start<'A'|| nodo_start>(N_nodi+65))
			cout<<"Hai sbagliato coglione\n";
	}while(nodo_start<'A'|| nodo_start>(N_nodi+65));
	
	do{
		cout<<"Inserire nodo di arrivo: ";
		cin>>nodo_end;
		nodo_end = toupper(nodo_end);
		if(nodo_end<'A'|| nodo_end>(N_nodi+65) || nodo_end==nodo_start)
			cout<<"Hai sbagliato coglione\n";
	}while(nodo_end<'A'|| nodo_end>(N_nodi+65) || nodo_end==nodo_start);
	
	int somma=0;
	bool fatti[N_nodo]=false;
	int pos,val,iterazioni=0;
	
	do{
		for(int i=iterazioni;i<N_nodi;i++) {
			if(matrix[i][iterazioni]!=0 && matrix[i][iterazioni]!=99) {
				val=matrix[i][0];
				pos=i;
				break;	
			}
		}
	
		for(int i=pos;i<N_nodi;i++) {
			if(matrix[i][0]<val)
			val=matrix[i][0];
		}
		
		for(int i=0;i<N_nodi;i++) {
			if(matrix[pos][i]+val < matrix[iterazione][pos])
				matrix[iterazione][pos]=99;
		}
			
		
		fatti[iterazione]=true;
		iterazioni++;
	}while(iterazioni<N_nodi);
	
	
	
	
	
	return 0;
}
