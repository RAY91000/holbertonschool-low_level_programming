#include "main.h"

int square(int num, int root)

{
if ((root * root) > num)
{
return (-1);
}
else if ((root * root) == num)
{
return (root);
}
else
{
return (square(num, root + 1));
}
}
int _sqrt_recursion(int n)

{
if (n < 0)
return (-1);
else
return (square(n, 0));
}
