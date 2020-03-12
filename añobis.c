#include <stdio.h>

int main()
{
	int a;

	printf("Ingresa un año\n");
	scanf(  "%d", &a);

	if ( a % 4 == 0 && (a % 100 !=0 || a % 400 == 0)){
	printf( "El año %d si es bisiesto",a);

	}else{
	printf( "El año %d no es bisiesto",a);
 
}
	return 0;

}

