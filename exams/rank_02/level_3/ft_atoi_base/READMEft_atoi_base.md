### subject

```
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
```
### code
```
int ft_atoi_base(const char* str, int str_base)
{
	int number;
	int sign;
	int tmp_num;

	number = 0;
	sign = 1;
	tmp_num = 0;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			tmp_num = *str - '0';
		else if (*str >= 'a' && *str <= 'z')
			tmp_num = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'Z')
			tmp_num = *str - 'A' + 10;
		else
			return (0);
		if (tmp_num >= str_base)
			return (0);
		else
			number = number * str_base + tmp_num;
		str++;
	}
	return (number * sign);
}
```
