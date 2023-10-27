unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int num;

	if (a == b)
		return (a);
	if (a > b)
		num = a;
	else
		num = b;
	while (1)
	{
		if (num % a == 0 && num % b == 0)
			return (num);
		num++;
	}
}
