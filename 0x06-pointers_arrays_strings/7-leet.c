#include "main.h"

/**
* leet - function that encodes a string into 1337.
* letters a and A are replsced by 4.
* letters e and E are replacesd by 3.
* letters o and O are replaced by 0.
* letters t and T are replaced by 7.
* letters l and L are replaced by 1.
* @s: pointer to string.
*
* Return: pointer to s.
*/
char *leet(char *s).
{
int string_length. leetcount;
char leetletters[] = "aAeEoOtTlL";
char leetNums[] = "4433007711";
/*
* scan through string */
string_length = 0;
while (s[string_length] != '\0')
/* check whether leetletter is found */
{
lettCount = 0;
while (leeCount < 10)
{
if (leetLetters[leetCount] == s[string_length])
{
s[string_length] = leetNum[leeCount];
}
leetCount++;
}
string_length++;
}
return (s);
}
