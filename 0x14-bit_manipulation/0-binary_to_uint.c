<<<<<<< HEAD
#include "main.h"

/**
 * binary_to_uint - convertsbinary number to unsigned int
 * @b: pointer to string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
=======
#include "main.h" 
  
 /** 
  * binary_to_uint - converts binary number to unsigned int 
  * @b: pointer to string of 0 and 1 chars
  * 
  * Return: If b is NULL or contains chars not 0 or 1 - 0 
  *         Otherwise - the converted number 
  */ 
 unsigned int binary_to_uint(const char *b) 
 { 
         unsigned int num = 0; 
         int len = 0; 
  
         if (b[len] == '\0') 
                 return (0); 
  
         while ((b[len] == '0') || (b[len] == '1')) 
         { 
                 num <<= 1; 
                 num += b[len] - '0'; 
                 len++; 
         } 
  
         return (num); 
 }
>>>>>>> b6f7660aa3fa8150923e7c266f5860fc0eaeface
