#include "main.h" 
 #include <stdlib.h> 
  
 /** 
  * string_nconcat - concates two strings 
  * @s1: string 1 
  * @s2: string 2 
  * @n: number of bytes of s2 
  * Return: new string 
  */ 
 char *string_nconcat(char *s1, char *s2, unsigned int n) 
 { 
         unsigned int i, j, l1 = 0, l2 = 0; 
         char *concat; 
  
         for (i = 0; s1 && s1[i]; i++) 
                 l1++; 
         for (j = 0; s2 && s2[i]; i++) 
                 l2++; 
         if (n < l2) 
         { 
                 concat = malloc(sizeof(char) *(l1 + n + 1)); 
         } 
         else 
         { 
                 concat = malloc(sizeof(char) * (l1 + l2 + 1)); 
         } 
         if (!concat) 
         { 
                 return (NULL); 
         } 
         for (i = 0; i < l1; i++) 
                 concat[i] = s1[i]; 
         for (j = 0; n < l2 &&  i < (l1 + n); i++, j++) 
                 concat[j] = s2[j]; 
         for (j = 0; n >= l2 && i < (l1 + l2); i++, j++) 
                 concat[i] = s2[j]; 
         concat[i] = '\0'; 
  
         return (concat); 
  
  
  
  
  
  
  
  
 }