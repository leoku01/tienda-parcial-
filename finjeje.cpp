#include<iostream>
#include<windows.h>
#define color SetConsoleTextAttribute
 using namespace std;
 
 main(){
 	//lista del producto 
 	int KK=0,ll=0,l=0;
 	int siono=0, tol=0, pollito=0;
 	int day=1;
 	int TK=0;
 	float precio[11]={0,1,2,3,4,5,6,7,8,9,10,};
 	string producto[11]={"0","coca","chetos","maruchan","jugo","pepsi","galletas","cafe","leche","pan","caguama"};
 	int diana[100]; //vector de indicador de productos 
 	int cant[100];
 	int nopalito[100];//suma 
 	float ing=0;//ingreso del dia 
 	int costoTK[100];
do{

cout<<"---------------lista de productos---------"<<endl;
cout<<" productos     "<<"precio"<<endl;
 	for(KK=1;KK<11;KK++){
	 cout<<KK<<".- "<<producto[KK]<<"  \t" <<precio[KK]<<endl;
	 
	 }
	 int K=1;
	 cout<<endl;
tol=0;
	 TK=TK+1;
do{
	cout<<"ingresa el NUMERO de producto que quiera comprar : ";
	cin>>diana[K];
	cout<<"cuantos quiere llevar? : ";
	cin>>cant[K];	
	pollito=( precio[diana[K]]*cant[K]);
	nopalito[K]=pollito;	
	tol=(precio[diana[K]]*cant[K])+tol;
	cout<<endl;	
	cout<<"¿quiere agregar otro producto? "<<endl<<"ingresa 1 para SI y 2 para NO: ";
	cin>>siono;
	cout<<endl;
	K=K+1; 
}while(siono==1);
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

 color (hConsole, 8);
cout<<"---------productos vendidos-------- "<<endl;
color (hConsole, 6);
	cout<<"                           TK00"<<TK<<endl;
cout<<"producto     "<<"cantidad  "<<"precio   "<<"total"<<endl;
for( l=1;l<=K-1;l++){
	cout<<l<< ".-"<<producto[diana[l]]<<"  \t"<<cant[l]<<"\t"<<precio[diana[l]]<<" \t"<<nopalito[l]<<endl;
}
cout<<endl;
color (hConsole, 5);
cout<< "total de venta : "<<tol<<endl;
color (hConsole, 7);
cout<<"------------------------------------"<<endl;
cout<<endl<<endl;
costoTK[TK]=tol;
	cout<<" ATENDER OTRO CLIENTE PRESIONE 1 DE LO CONTRARIO PRESIONE 2  "<<endl;
	cin>>day;
	cout<<endl<<endl;

}while(day==1);
cout<<"---------------fin del dia ---------"<<endl;
for(ll=1; ll<=TK;ll++){
	cout<<ll<<": TK00 "<<ll<<": "<<costoTK[ll]<<endl;
ing=costoTK[ll]+ing;
}
	cout<<"ingreso del dia "<<ing;	
}


