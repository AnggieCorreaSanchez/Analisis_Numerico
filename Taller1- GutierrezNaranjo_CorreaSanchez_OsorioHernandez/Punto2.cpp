# include  < iostream >
# incluir  < cadena >
# include  < math.h >

short  int * formarPoly ( int medida)
{
    short  int * res = new  short  int [ 2 ];
    res [ 0 ] = medida;
    res [ 1 ] = - 2 ;
    
    devolver res;
}

short  int * multiplicarPoly ( short  int * polyLargo, short  int * polyAncho, int tamL, int tamA)
{
    short  int * res = new  short  int [tamL + tamA - 1 ];
    
    para ( int i = 0 ; i <tamL + tamA - 1 ; ++ i)
        res [ 0 ] = 0 ;
        
    para ( int i = 0 ; i <tamL; ++ i)
        for ( int j = 0 ; j <tamA; ++ j)
            res [i + j] + = polyLargo [i] * polyAncho [j];
    
    devolver res;        
}

void  coutPoly ( short  int * poly, int tam)
{
    para ( int i = 0 ; i <tam; ++ i)
    {
        std :: cout << poly [i];
        if (i! = 0 )
        std :: cout << " x ^ " << i;
        if (i! = tam- 1 )
        std :: cout << " + " ;
    }
}

flotar  raíces ( corto  int * polyAltura)
{
	int c = polyAltura [ 1 ];
	int b = polyAltura [ 2 ] * 2 ;
	int a = polyAltura [ 3 ] * 3 ;

	float discriminante = b * b - 4 * a * c;
	res flotante = 0.1 , x1 = 0.1 , x2 = 0.1 ;
	
	if (discriminante < 0 )
		std :: cout << " La solución no se encuentra entre los numeros reales. " << std :: endl;
	else  if (discriminante == 0 )
	{
		x1 = (-b + sqrt (discriminante)) / ( 2 * a);
		devolver x1;
	}
	else  if (discriminante> 0 )
	{
		x1 = (-b + sqrt (discriminante)) / ( 2 * a);
		x2 = (-b - sqrt (discriminante)) / ( 2 * a);
		
		int aa = a * 2 ;
	
		if ((aa * x1 - (b * - 1 )) < 0 )
			devolver x1;
		else  if ((aa * x2 - (b * - 1 )) < 0 )
			devolver x2;
	}

	if ((a * x1 * x1 + b * x1 + c == 0 ) && (a * x2 * x2 + b * x2 + c! = 0 ) || (a * x1 * x1 + b * x1 + c! = 0 ) && (a * x2 * x2 + b * x2 + c == 0 ))
 		std :: cout << " La respuesta ha sido validada. " << std :: endl;
	else  if ((a * x1 * x1 + b * x1 + c! = 0 ) && (a * x2 * x2 + b * x2 + c! = 0 ))
		std :: cout << " La respuesta no pudo validarse. Esta aproximada. " << std :: endl;
}

int  main ()
{
    / * int largo = 0, ancho = 0, altura = 0;
    
    std :: cout << "Por favor digite el largo de la lC! mina." << std :: endl;
    std :: cin >> largo;
    std :: cout << "Por favor digite el ancho de la lC! mina." << std :: endl;
    std :: cin >> ancho; * /
    
    int largo = 32 , ancho = 24 , altura = 0 ;
    short  int * polyLargo = new  short  int [ 2 ], * polyAncho = new  short  int [ 2 ];
    
    polyLargo = formarPoly (largo);
    polyAncho = formarPoly (ancho);
    
    short  int * polyX = nuevo  short  int [ 2 ];
    polyX [ 0 ] = 0 ;
    polyX [ 1 ] = 1 ;
    
    int polyLargoTam = sizeof (polyLargo) / sizeof (polyLargo [ 0 ]);
    int polyAnchoTam = sizeof (polyAncho) / sizeof (polyAncho [ 0 ]);
    
    short  int * polyDummy = new  short  int [polyLargoTam + polyAnchoTam - 1 ];
    
    polyDummy = multiplicarPoly (polyLargo, polyAncho, polyLargoTam, polyAnchoTam);
    
    int polyDummyTam = sizeof (polyDummy) / sizeof (polyDummy [ 0 ]);
    int polyXTam = sizeof (polyX) / sizeof (polyX [ 0 ]);
    
    short  int * polyAltura = new  short  int [polyDummyTam + polyXTam - 1 ];
    
    polyAltura = multiplicarPoly (polyDummy, polyX, polyDummyTam, polyXTam);

    float res = roots (polyAltura);

    std :: cout << " La medida requerida es de: " << res << std :: endl;
}

/ * Problema, resuelto por el método de completar cuadrados.
#include <iostream>
#include <cadena>
#include <math.h>
short int * formarPoly (int medida)
{
    short int * res = new short int [2];
    res [0] = medida;
    res [1] = -2;
    
    devolver res;
}
short int * multiplicarPoly (short int * polyLargo, short int * polyAncho, int tamL, int tamA)
{
    short int * res = new short int [tamL + tamA - 1];
    
    para (int i = 0; i <tamL + tamA - 1; ++ i)
        res [0] = 0;
        
    para (int i = 0; i <tamL; ++ i)
        for (int j = 0; j <tamA; ++ j)
            res [i + j] + = polyLargo [i] * polyAncho [j];
    
    devolver res;        
}
void coutPoly (short int * poly, int tam)
{
    para (int i = 0; i <tam; ++ i)
    {
        std :: cout << poly [i];
        if (i! = 0)
        std :: cout << "x ^" << i;
        if (i! = tam-1)
        std :: cout << "+";
    }
    std :: cout << "\ n";	
}
flotante fullSquare (short int * poly)
{
	float c = poly [1];
	flotante b = poli [2] * 2;
	float a = poly [3] * 3;
	
	a / = a;
	b / = a;
	c / = a;
	c * = - 1;
	cuadrado flotante = b / (2 * a);
	c + = pow (cuadrado, 2);
	flotante x1 = sqrt (c) + cuadrado;
	flotante x2 = (-1 * sqrt (c)) + cuadrado;
	if (24 * x1 - 224 <0)
		devolver x1;
	else if (24 * x2 - 224 <0)
		devolver x2;	
}
int main ()
{ * /
    / * int largo = 0, ancho = 0, altura = 0;
    
    std :: cout << "Por favor digite el largo de la lC! mina." << std :: endl;
    std :: cin >> largo;
    std :: cout << "Por favor digite el ancho de la lC! mina." << std :: endl;
    std :: cin >> ancho; * /
    
    / * int largo = 32, ancho = 24, altura = 0;
    short int * polyLargo = new short int [2], * polyAncho = new short int [2];
    
    polyLargo = formarPoly (largo);
    polyAncho = formarPoly (ancho);
    
    short int * polyX = nuevo short int [2];
    polyX [0] = 0;
    polyX [1] = 1;
    
    int polyLargoTam = sizeof (polyLargo) / sizeof (polyLargo [0]);
    int polyAnchoTam = sizeof (polyAncho) / sizeof (polyAncho [0]);
    
    short int * polyDummy = new short int [polyLargoTam + polyAnchoTam - 1];
    
    polyDummy = multiplicarPoly (polyLargo, polyAncho, polyLargoTam, polyAnchoTam);
    
    int polyDummyTam = sizeof (polyDummy) / sizeof (polyDummy [0]);
    int polyXTam = sizeof (polyX) / sizeof (polyX [0]);
    
    short int * polyAltura = new short int [polyDummyTam + polyXTam - 1];
    
    polyAltura = multiplicarPoly (polyDummy, polyX, polyDummyTam, polyXTam);
    float res = fullSquare (polyAltura);
    std :: cout << "La medida requerida es de:" << res << std :: endl;
}
* /

/ * ------------------------------------------------ -------------------------------------------------- --------------------------------------
1: Con el proceso llevado a cabo, la parte más crítica del proceso es la multiplicación de polinomios, ya que estos se pueden cambiar 
con más frecuencia, gracias a las entradas hechas por el usuario, a la vista que las multiplicaciones requeridas para sus derivadas
se asumen dentro del código.
2: Los conocimientos requeridos para formular un modelo matemático son una ecuación de formulación de mar de la situación en 
el mundo real, tener claro el método de resolución y cómo llevarlo a cabo en código.
3: La desventaja más significativa a la hora de obtener resultados por prueba y error es la pérdida de tiempo. Las medidas deseadas más
de tres cifras significativas, y son distancias bastante pequeñas; la probabilidad de que las personas probando cada combinación que se ocurra
la respuesta es abismal, lo que conlleva a no mucho tiempo gastado en intentos, sino a tiempo perdido.
4: El error de truncamiento es más preocupante en general, por descartar las demás cifras reales sin concideración, lo que puede llevar a cabo
a mayores errores que si se redondeara.
5: La venta de un método de cálculo computacional en el cual, como se dice, en procedimientos netamente lógicos y
aritméticos y las bastas capacidades de cómputo de los computadores actuales, que pueden resolver estos problemas en meras
fracciones de fracciones del tiempo que la llevaría a un ser humano.
6: Es importante validar las respuestas para saber que un proceso que sea capaz de terminar sin presentar errores
respuesta correcta
* /
