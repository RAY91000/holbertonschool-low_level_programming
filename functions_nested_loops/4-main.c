#include "main.h"

/**
 * main - Teste la fonction _isalpha
 *
 * Return: Toujours 0
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0'); /* Affiche '1' si 'H' est une lettre */

    r = _isalpha('o');
    _putchar(r + '0'); /* Affiche '1' si 'o' est une lettre */

    r = _isalpha('1');
    _putchar(r + '0'); /* Affiche '0' si '1' n'est pas une lettre */

    r = _isalpha(';');  /* Remplacer ';' par un caractère valide, si besoin */
    _putchar(r + '0'); /* Affiche le résultat pour ';' */

    _putchar('\n');

    return (0);
}
