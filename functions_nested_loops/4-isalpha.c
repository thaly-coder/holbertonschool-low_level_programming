#include "main.h"

/**
 *Prototype: int _isalpha(int c)
 *Descripcion:  function that checks for alphabetic character
 *Return: 1 if c is lowercase or upercase
 *Return: 0 otherwise
 */

 int _isalpha(int c)

{
        char minus, mayusc

        int isletter = 0;

        for  (minus = 'a'; minus <= 'z'; minus++)
	{
		for (mayusc = 'A'; mayusc <= 'Z'; mayusc++)
        	{
                if (c == minus || c  == mayusc)

                isletter = 1;
		}
        }

        return(isletter);
	
}
	
