#include<stdio.h>
#include<math.h>
int main()
{
for (int participante=1;participante<=5; participante++)
{
   // printf ("ingresar el numero del participante");
    //scanf  ("%d participante:",&participante);
  for (int disparo=1; disparo<=10; disparo++); {



float x, y;
printf("ingresar las coordenadas del eje x del disparo\n");
scanf ("%f", &x);
fflush(stdin);
printf("ingresar las coordenadas del eje y del disparo\n");
scanf ("%f", &y);
fflush(stdin);
if (x>0 && y>0)
    printf ("el tiro esta en el primer cuadrante\n");
if (x<0 && y>0)
    printf ("el tiro esta en el segundo cuadrante\n");
if (x<0 && y<0)
    printf ("el tiro esta en el tercer cuadrante\n");
if (x>0 && y<0)
    printf ("el tiro esta en el cuarto cuadrante\n");
  }
}

return 0;
}

