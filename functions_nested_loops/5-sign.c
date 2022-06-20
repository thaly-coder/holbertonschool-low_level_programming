#include "main.h"

/**
 *Prototype: Prototype: int print_sign(int n)
 *Descripcion: function that prints the sign of a number
 *Return: Returns 1 and prints + if n is greater than zero
 *Return: Returns 0 and prints 0 if n is zero
 *Return: -1 and prints - if n is less than zero
 */

int print_sign(int n)

{
        int num
        
	if (n > 0) 
	{	
	num = 1;
	_purchar('+');
	}

	else if (n == 0)
	{	
	num = 0;
        _purchar('0');
	}
        
	else 
	{
	num = -1;
	_putchar('-');	

        }
       

        return(num);

}

