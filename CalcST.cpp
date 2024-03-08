// Hola esta es la mejor calculadora en equipo
//este es nuestro primer pull, te quiero mucho :3
#include<cstdlib>
#include<iostream>
int main(){
    int n1,n2,op,d;
    float res;
    std::cin>>n1;
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
            res=n1/n2;
            if (n2!=0){ 
              std::cout<<"El resultado de la division entre "<<n1<<" y "<<n2<<" es "<<res<<std::endl;}
            else{
              std::cout<<"Dividir entre 0 no esta definido en matematicas aun"<<std::endl;                
            }
        break;
        case 5:
            res=n1%n2;
            if (n2!=0){ 
              std::cout<<"El resultado de la division entre "<<n1<<" y "<<n2<<" es "<<res<<std::endl;}
            else{
              std::cout<<"Dividir entre 0 no esta definido en matematicas aun"<<std::endl;}     
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
