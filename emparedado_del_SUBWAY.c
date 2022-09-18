#include  <stdio.h>

void main ()

{
int precionDelPanChico, precionDelPanGrande, tamañoDelPan, tipoDePan, jamon, salami, queso, pechuga, vegetales, mayonesa, aderezo, frioCaliente;
int totalDeCompara=0;
printf("\n Proporsioname los datos del emparedado que deseas\n");
printf("\n ¿Que tamaño de pan deseas?\n Coloca 1 si deseas que el pan sea de 15 centimetros\n Coloca 2 si deseas que el pan sea de 30cm\n \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&tamañoDelPan); /*dos (y una de cancelar) opciones de tamaño pan los precios del tamaño no aparecen en los requerimientos*/
// inicia bloqueo if (tamañoDelPan==1)
/*switch 1 tamañoDelPan*/ switch (tamañoDelPan)
{
/*pan chico*/case 1 : 

printf("\n Proporsioname el precio del pan chico\n");
scanf("%d", &precionDelPanChico);
totalDeCompara=precionDelPanChico;

printf("\n ¿Que tipo de pan deseas?\n Coloca 1 si deseas que el pan sea integral\n Coloca 2 si deseas que el pan sea blanco \n  Coloca otro numero si deseas cancelar \n");
scanf("%d",&tipoDePan); /*dos (y una de cancelar) opciones de tipo de pan*/
/*switch 1.2 tipoDePan*/ switch (tipoDePan)
{
/*pan chico integral*/case 1: 
totalDeCompara= totalDeCompara+15;
    break;
/*pan chico blanco*/ case 2: 
totalDeCompara= totalDeCompara+10;
    break;

default:
    break;
}
break;

/* pan grande*/ case 2: 

printf("\n Proporsioname el precio del pan Grande\n");
scanf("%d", &precionDelPanGrande);
totalDeCompara=precionDelPanGrande;
printf("\n ¿Que tipo de pan deseas?\n Coloca 1 si deseas que el pan sea integral\n Coloca 2 si deseas que el pan sea blanco \n  Coloca otro numero si deseas cancelar \n");
scanf("%d",&tipoDePan); /*dos (y una de cancelar) opciones de tipo de pan*/

/*break;*/
/*switch 2.2 tipoDePan*/
{switch (tipoDePan)
{
/* pan grande integral*/ case 1:
totalDeCompara= totalDeCompara+15;
    break;
/* pan grande blanco*/ case 2:
totalDeCompara= totalDeCompara+10;
    break;

default:
    break;
}
 /*   break;*/

default:
    break;
}}
 printf("\n Su total de compra es: $%d pesos\n",totalDeCompara);
printf("\n ¿Que tipo de jamon deseas?\n Coloca 1 si deseas que el jamon sea de pavo\n Coloca 2 si deseas que el jamon sea de cerdo \n\n Coloca 3 si deseas NO incluirlo \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&jamon); /*dos (y una de cancelar) opciones de tipo de jamon*/
switch (jamon)
{
case 1:
totalDeCompara=totalDeCompara+12;
    break;
case 2:
totalDeCompara=totalDeCompara+10;
    break;
    case 3:
totalDeCompara=totalDeCompara;
    break;
default:
    break;
}
printf("\n Su total de compra es: $%d pesos\n",totalDeCompara);
printf("\n ¿Quieres que tu emparedado contenga salami?\n Coloca 1 SI deseas incluirlo\n Coloca 2 si deseas NO incluirlo \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&salami); /*dos (y una de cancelar) opciones de salami, si o no*/
switch (salami)
{
case 1:
totalDeCompara=totalDeCompara+5;
    break;
case 2:
totalDeCompara=totalDeCompara;
    break;
default:
    break;
}
printf("\n Su total de compra es: $%d pesos\n",totalDeCompara);
printf("\n ¿Que tipo de queso deseas?\n Coloca 1 si deseas que el queso se asadero\n Coloca 2 si deseas que el queso sea philadephia \n Coloca 3 si deseas que el queso sea amarillo \n Coloca 4 si deseas que el queso sea manchego \n Coloca 5 si NO deseas queso\n Coloca otro numero si deseas cancelar \n");
scanf("%d",&queso); /*5 (y una de cancelar) opciones de tipo de queso*/
switch (queso)
{
case 1:
totalDeCompara=totalDeCompara+6;
    break;
case 2:
totalDeCompara=totalDeCompara+7;
    break;
    case 3:
totalDeCompara=totalDeCompara+6;
    break;
case 4:
totalDeCompara=totalDeCompara+6;
    break;
    case 5:
totalDeCompara=totalDeCompara;
    break;
    
default:
    break;
}
printf("\n Su total de compra es: $%d pesos\n",totalDeCompara);
printf("\n ¿Quieres que tu emparedado contenga pechuga de pollo?\n Coloca 1 SI deseas incluirlo\n Coloca 2 si deseas NO incluirlo \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&pechuga); /*dos (y una de cancelar) opciones de pechuga de pollo, si o no*/
switch (pechuga)
{
case 1:
totalDeCompara=totalDeCompara+15;
    break;
case 2:
totalDeCompara=totalDeCompara;
    break;
default:
    break;
}
printf("\n Su total de compra es: $%d pesos\n",totalDeCompara);
printf("\n ¿Quieres que tu emparedado contenga Vegetales?\n Coloca 1 SI deseas incluirlo\n Coloca 2 si deseas NO incluirlo \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&vegetales); /*dos (y una de cancelar) opciones de Vegetales, si o no*/
switch (vegetales)
{
case 1:
totalDeCompara=totalDeCompara+25;
    break;
case 2:
totalDeCompara=totalDeCompara;
    break;
default:
    break;
}
printf("\n Su total de compra es: $%d pesos\n",totalDeCompara);
printf("\n ¿Quieres agregar a tu emparedado Mayonesa?\n Coloca 1 SI deseas incluir Mayonesa Light\n Coloca 2 SI deseas incluir Mayonesa con limon \n Coloca 3 SI deseas incluir Mayonesa compuesta \nColoca otro numero si deseas cancelar \n Coloca 4 si NO deseas incluir Mayonesa\nColoca otro numero si deseas cancelar \n");
scanf("%d",&mayonesa); /*3 (y una de cancelar) opciones de Mayonesa, si o no*/
switch (mayonesa)
{
case 1:
totalDeCompara=totalDeCompara+3;
    break;
case 2:
totalDeCompara=totalDeCompara+4;
    break;
    case 3:
totalDeCompara=totalDeCompara+5;
    break;
    case 4:
totalDeCompara=totalDeCompara;
    break;
default:
    break;
}
printf("\n Su total de compra es: $%d pesos\n",totalDeCompara);
printf("\n ¿Quieres agregar a tu emparedado Aderezo?\n Coloca 1 SI deseas incluir Aderezo Ranch\n Coloca 2 SI deseas incluir Aderezo Barbacoa \n Coloca 3 SI deseas NO incluir Aderezo\nColoca otro numero si deseas cancelar \n");
scanf("%d",&aderezo); /* 2 (y una de cancelar) opciones de Aderezo*/
switch (aderezo)
{
case 1:
totalDeCompara=totalDeCompara+4;
    break;
case 2:
totalDeCompara=totalDeCompara+3;
    break;
    case 3:
totalDeCompara=totalDeCompara;
    break;

default:
    break;
}
printf("\n Su total de compra es: $%d pesos\n",totalDeCompara);
printf("\n ¿Quieres que tu emparedado este Frio o Caliente?\n Coloca 1 SI deseas Frio\n Coloca 2 SI deseas Caliente \n Coloca otro numero si deseas cancelar \n");
scanf("%d",&frioCaliente); /* 2 (y una de cancelar) opciones de frio o caliente*/
/*printf("\n Su total de compra es: %d\n",totalDeCompara);*/
}
