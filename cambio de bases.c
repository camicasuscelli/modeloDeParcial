#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void cambioabase2 (int);
void cambioabase8 (int);
void cambioabase16 (int);

int main ()
{
 int numero, base;
 printf ("Inserte numero: ");
 scanf ("%d", &numero);
 do{printf (" 1-Binario. \n 2-Octal. \n 3-Hexadecimal.\n");
 scanf ("%d", &base);
 printf ("Cambio de base:  ");
 }while (base<1 || base>3);
 switch (base)
 {  case 1: cambioabase2(numero);
            break;
    case 2: cambioabase8(numero);
            break;
    case 3: cambioabase16(numero);
            break;
 };
 getch ();
}

void cambioabase2 (int fnumero)
{
    if (fnumero/2 != 0)

        cambioabase2(fnumero/2);

    printf ("%d", fnumero%2);
};

void cambioabase8 (int fnumero)
{
    if (fnumero/8 != 0)

        cambioabase8 (fnumero/8);

    printf ("%d", fnumero%8);
};

void cambioabase16 (int fnumero)
{
    if (fnumero/16 != 0)
        cambioabase16 (fnumero/16);
    if ((fnumero%16)>9)
        printf ("%c", (fnumero%16)-10+65);
    else printf ("%d", fnumero%16);
};
