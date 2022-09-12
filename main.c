#include <stdio.h>
#include <stdlib.h>

void Menu();
void calculo(int ingresoPeso, int ingresoCambio);


int main()
{

    int Op;
    int ingresoPeso;
    int ingresoCambio;


    do
    {

        Menu();
        scanf("%d", &Op);
        system("cls");


        switch(Op)
        {
        case 1:
            calculo(ingresoPeso, ingresoCambio);
            break;

        }
      }
    while(Op!=6);


    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int Op, ingresoPeso, ingresoMoneda, total, acum;
	int i=0;


	do{
	
	Menu();
	scanf("%d", &Op);
    system("cls");
    printf("Ingrese monto de pesos :");
    scanf("%d", &ingresoPeso);
   

	
	switch(Op){
    	
    	case 1:
			printf("Ingrese monto en dolares a convertir :");
    		  scanf("%d", &ingresoMoneda);
			   total = ingresoPeso / ingresoMoneda;
			    printf("total : %d\n\n", total);
			  
			  while(total>=100){
    		  
			      total=total-100;
				
    			     i++;
    			}
    	         printf("Cantidad de billetes : %d\n\n", i); 
				  system("pause");
				   system("cls"); 	   	 	
	}
    	}while(Op != 6);	
	return 0;
}

void Menu(){
	
 printf("Elija la moneda a que desea convertir :\n\n");
 printf("1-Dolar.\n");	
 printf("2-Euro.\n");
 printf("3-Real.\n");
 printf("4-Libra.\n");
 printf("5-Yen.\n");
 printf("6-Salir\n");
 		
}


}



void Menu()
{
    printf("Elija a que moneda desea convertir.\n\n");
    printf("1 - Dolar.\n");
    printf("2 - Euro.\n");
    printf("3 - Real.\n");
    printf("4 - libra.\n");
    printf("5 - Yen.\n");
    printf("6 - Salir.\n\n");

}


void calculo(int ingresoPeso, int ingresoCambio)
{

   int i=1, y=1, z=1;
    int acum;
    printf("\nIngrese monto en pesos :");
    scanf("%d", &ingresoPeso);

    printf("\nIngrese monto en moneda a convertir :");
    scanf("%d", &ingresoCambio);

    system("cls");

    int total = ingresoPeso / ingresoCambio;

    printf("\nTotal : %d\n\n", total);

   if(total >= 5){
          acum = total;
   while(acum != 5){



        acum = acum - 5;

           i++;

    }

     printf("hay %d de billetes de 5\n\n", i);
     system("pause");

}


 if(total >= 10){
          acum = total;
   while(acum != 10){



        acum = acum - 10;

           y++;

    }

     printf("hay %d de billetes de 10\n\n", y);
     system("pause");

}

if(total >= 20){
          acum = total;
   while(acum != 20){



        acum = acum - 20;

           y++;

    }

     printf("hay %d de billetes de 20\n\n", z);
     system("pause");

}
















   }











