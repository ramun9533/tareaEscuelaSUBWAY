#include  <stdio.h>

void main ()

{
int tamañoDelPan, tipoDePan, jamon, salami, queso, pechuga, vegetales, mayonesa, aderezo, frioCaliente;

printf("\n Proporsioname los datos del emparedado que deseas\n");
printf("\n ¿Que tamaño de pan deseas?\n Coloca 1 si deseas que el pan sea de 15 centimetros\n Coloca 2 si deseas que el pan sea de 30cm\n \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&tamañoDelPan); /*dos (y una de cancelar) opciones de tamaño pan*/
printf("\n ¿Que tipo de pan deseas?\n Coloca 1 si deseas que el pan sea integral\n Coloca 2 si deseas que el pan sea blanco \n \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&tipoDePan); /*dos (y una de cancelar) opciones de tipo de pan*/
printf("\n ¿Que tipo de jamon deseas?\n Coloca 1 si deseas que el jamon sea de pavo\n Coloca 2 si deseas que el jamon sea de cerdo \n\n Coloca 3 si deseas NO incluirlo \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&jamon); /*dos (y una de cancelar) opciones de tipo de jamon*/
printf("\n ¿Quieres que tu emparedado contenga salami?\n Coloca 1 SI deseas incluirlo\n Coloca 2 si deseas NO incluirlo \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&salami); /*dos (y una de cancelar) opciones de salami, si o no*/
printf("\n ¿Que tipo de queso deseas?\n Coloca 1 si deseas que el queso se asadero\n Coloca 2 si deseas que el queso sea philadephia \n Coloca 3 si deseas que el queso sea amarillo \n Coloca 4 si deseas que el queso sea manchego \n Coloca 5 si NO deseas queso\n Coloca otro numero si deseas cancelar \n");
scanf("%d",&queso); /*5 (y una de cancelar) opciones de tipo de queso*/
printf("\n ¿Quieres que tu emparedado contenga pechuga de pollo?\n Coloca 1 SI deseas incluirlo\n Coloca 2 si deseas NO incluirlo \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&pechuga); /*dos (y una de cancelar) opciones de pechuga de pollo, si o no*/
printf("\n ¿Quieres que tu emparedado contenga Vegetales?\n Coloca 1 SI deseas incluirlo\n Coloca 2 si deseas NO incluirlo \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&vegetales); /*dos (y una de cancelar) opciones de Vegetales, si o no*/
printf("\n ¿Quieres agregar a tu emparedado Mayonesa?\n Coloca 1 SI deseas incluir Mayonesa Light\n Coloca 2 SI deseas incluir Mayonesa con limon \n Coloca 3 SI deseas incluir Mayonesa compuesta \nColoca otro numero si deseas cancelar \n");
scanf("%d",&mayonesa); /*3 (y una de cancelar) opciones de Mayonesa, si o no*/
printf("\n ¿Quieres agregar a tu emparedado Aderezo?\n Coloca 1 SI deseas incluir Aderezo Ranch\n Coloca 2 SI deseas incluir Aderezo Barbacoa \n Coloca 3 SI deseas NO incluir Aderezo\nColoca otro numero si deseas cancelar \n");
scanf("%d",&aderezo); /* 2 (y una de cancelar) opciones de Aderezo*/
printf("\n ¿Quieres que tu emparedado este Frio o Caliente?\n Coloca 1 SI deseas Frio\n Coloca 2 SI deseas Caliente \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&frioCaliente); /* 2 (y una de cancelar) opciones de frio o caliente*/






}