/**
  * _pow_recursion - a function that returns @x raised to power @y
  * @x: integer x
  * @y: integer y
  * Return: @x raised to the power of @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
