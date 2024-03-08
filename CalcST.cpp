// Hola esta es la mejor calculadora en equipo
//este es nuestro primer pull, te quiero mucho :3
#include<cstdlib>
#include<iostream>
int main(){
    int n1,n2,op,d;
    float res;
    std::cout<<"Hola, bienvenido a tu calculadora de confianza :D"<<std::endl;
    std::cout<<"::::::::::::MENU::::::::::::"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"1. Suma"<<std::endl;
    std::cout<<"2. Resta"<<std::endl;
    std::cout<<"3. Multiplicacion"<<std::endl;
    std::cout<<"4. Division"<<std::endl;
    std::cout<<"5. Modulo"<<std::endl;
    std::cout<<"6. Verifica si tu numero es par o impar"<<std::endl;
    std::cout<<"7. Verifica si tu numero es primo"<<std::endl;
    std::cout<<"8. Viaje en tren :D"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"Ingrese una opcion"<<std::endl;
    std::cin>>op;
    std::cout<<"Ingrese el primer numero"<<std::endl;
    std::cin>>n1;
    std::cout<<"Ingrese el segundo  numero"<<std::endl;
    std::cin>>n2;
    switch(op){
        case 1:
            res=n1+n2;
            std::cout<<"El resultado de la suma entre "<<n1<<" y "<<n2<<" es "<<res<<std::endl;
        break;
        case 2:
            res=n1-n2;
            std::cout<<"El resultado de la resta entre "<<n1<<" y "<<n2<<" es "<<res<<std::endl;
        break;
        case 3:
            res=n1*n2;           
            std::cout<<"El resultado de la multiplicacion entre "<<n1<<" y "<<n2<<" es "<<res<<std::endl;
        break;
        case 4:
            if (n2!=0){ 
                res=n1/n2;
                std::cout<<"El resultado de la division entre "<<n1<<" y "<<n2<<" es "<<res<<std::endl;}
            else{
                std::cout<<"Dividir entre 0 no esta definido en matematicas aun"<<std::endl;                
            }
        break;
        case 5:
            if (n2!=0){
                res=n1%n2; 
                std::cout<<"El resultado de la division entre "<<n1<<" y "<<n2<<" es "<<res<<std::endl;
                }
            else{
                std::cout<<"Dividir entre 0 no esta definido en matematicas aun"<<std::endl;
                }     
        break;
        case 6:
            if (n1%2==0){
                std::cout<<"el numero"<<n1<<"es par"<<std::endl;
            }
            else{
                std::cout<<"el numero"<<n1<<"es impar"<<std::endl;
            }            
        break;
        case 7:
            d=0;
			for (int i=1; i<=n1; ++i)
			{
				if ((n1%i)==0)
				{
					d++;
				}
				if (d>2)
				{
					std::cout<<"Su numero no es primo"<<std::endl;
					break;
				}
			}
			if (d==2)
			{
				std::cout<<"Su numero es primo"<<std::endl;
			}
        break;
        case 8:
            std::cout<<"Mira, tu viaje en tren :D"<<std::endl;
    		system("sl");
        break;
        default:
        	std::cout<<"La opcion no es valida"<<std::endl;
    }
    return 0;
}
