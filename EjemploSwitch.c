#include <stdio.h>
//#include<conio.h>
int main(){
int b;
char departamento,dec;
float importe,total,adicional;
printf("Hola, buen dia, en que departamento realizara sus compras\n");
printf("\n(Perfumeria)=p, (salchichoneria)=sa, (carniceria)=c,(limpieza)=l");
scanf("%s",&departamento);
printf("\nIngrese el total de su compra");
scanf("%f",&total);
scanf("%s",&dec);
printf("Desea llevar bolsas (si)=s,(no)=n\n");
if (dec=='s'){
	printf("Cuantas bolsas desea llevar\n");
	scanf("%i",&b);
   adicional=(0.1*b);
  printf("Su total a pagar es: %f",importe);
}
else {
  adicional=0;
  printf("Su total a pagar es: %f",importe);
}
switch (departamento){
	case 'p': importe = (total-(total*0.20))+adicional;
            printf("El importe es %f\n",importe);
            break;
}


//getch();
//return 0;
}
