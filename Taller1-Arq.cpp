#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Hacer un programa que calcule la multiplicación de dos enteros sin signo usando solo sumas.

int sumas (int n, int m)
{
    int r=0;
    for(int i=1; i<=m; i++)
            r=r+n;
    return r;
}

int main1()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", sumas(n,m));
    system("pause");
    return 0;
}

//Realice un programa que calcule la potencia de dos números enteros sin signo realizando llamados a la función desarrollada en el punto 1.

int potencia (int m, int n)
{
    int r=1;
    for(int i=1; i<=n; i++)
            r=sumas(m,r);
    return r;
}   

int main2(){
    int m,n;
    scanf("%d %d", &m, &n);
    printf("%d\n", potencia(m,n));
    system("pause");
    return 0;
}

/*Realice un programa que calcule un polinomio de grado n, en donde los coeficientes del polinomio se encuentran 
almacenados en un vector k de n+1 posiciones, de la siguientes forma:*/

int polinomio(int x, int pos)
{
    int exp=pos;
	int vec[pos+1];
	int resultado=0;
	for(int i=0;i<=pos;i++)
	{
		scanf("%d", vec[i]);
		
	}
	for(int i=0;i<=pos;i++)
	{
		resultado=resultado+(vec[i]*(pow(x,exp)));
		exp--;
	}
	return resultado;
}

int main()
{
    int z;
    z=polinomio(2,3);
    printf("%d", z);
    return 0;
}
    



//Realice un programa que calcule el factorial de un número entero sin signo

int factorial(int n)
{
	int f=1;
    for (int a=1 ; a<=n ; a++)
         f=a*f;
    return f;
}

int main4()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    system("pause");
    return 0;
}

//Realice un programa calcule la división entera entre dos números enteros.

int division (int m, int n) 
{
    int c=0;
    while(m>=n)
    {
        m=m-n;
        c++;
    }
    return c;
}

int main5()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", division(m,n));
    system("pause");
    return 0;
}
