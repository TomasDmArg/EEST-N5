 #include <iostream>
using namespace std;

int start(){
	int type, typec;
	float a;
	string separador = " ------------------";
	cout << "\n Elige la medida: \n --> 1. Yardas \n --> 2. Pulgadas \n --> 3. Centimetros \n --> 4. Metros \n ------------------ \n  > " ;
    	cin >> type;
    	if(type > 4){
    	cout << "La medida seleccionada es incorrecta";	
    	cout << "\n" << separador << "\n";
    	start();
	}else{
		cout << separador;
    		cout << "\n Valor numerico de la medida: \n";	
    		cout << separador << "\n > ";
		cin >> a;
    		cout << separador;
    		cout << "\n Elige la medida a la cual queres convertir: \n --> 1. Yardas \n --> 2. Pulgadas \n --> 3. Centimetros \n --> 4. Metros \n ------------------ \n > " ;
	    	cin >> typec;
	    	cout << separador << "\n";
		if(typec > 4){
			cout << " La medida seleccionada es incorrecta";	
			cout << "\n" << separador << "\n";
			start();
		}else{
			if(type == typec){
				cout << " Las medidas son iguales" << endl;
				cout << separador << "\n";
				start();
			}else{
				switch(type){
					case 1 : 
						a = a*91.44;
						break;
					case 2 : 
						a = a*2.54;
						break;
					case 3 : 
						a = a+0;
						break;
					case 4 : 
						a = a*100;
						break;
				}
				switch(typec){
					case 1 :
						a = a/91.44;
						cout << " El resultado es: \n > " << a << "yd";
						break;
					case 2 : 
						a = a/2.54;
						cout << " El resultado es: \n > " << a << "in";
						break;
					case 3 : 
						a = a+0;
						cout << " El resultado es: \n > " << a << "cm";
						break;
					case 4 : 
						a = a/100;
						cout << " El resultado es: \n > " << a << "m";
						break;
				}
			}
		}
	}
}
int main(){
	start();	
	return 0;
}
