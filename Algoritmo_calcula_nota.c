#include <stdio.h>
int main()
{


int nota;
printf("esciba su calificacion: ");
scanf("%i", &nota);
printf("\n");

if (nota == 5) {
printf("suficinete");
}

else{
if (nota == 6){
printf("bien");
}
 else{ 
if ((nota == 7) || (nota == 8 )){

printf("notable");
}
else{
if (nota == 9) {
printf("sobresaliete");

}
else{
if (nota == 10){
printf("Excelente!!");


}
else{
printf("suspenso");
}
}
}
}
}

 
printf("\n");














return 0;
}
