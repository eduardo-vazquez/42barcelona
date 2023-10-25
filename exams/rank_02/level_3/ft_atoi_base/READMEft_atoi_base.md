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
int	ft_atoi_base(const char *str, int str_base)
{
	int		result;
	int 	sign;
	int		valid_input;
	int		digit;

	result = 0;
	sign = 1;
	valid_input = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	
	while (*str && valid_input)
	{
		if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else if (*str >= 'a' && *str <= 'z')
			digit = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'Z')
			digit = *str - 'A' + 10;
		else
			valid_input = 0;
		if (digit >= str_base)
			valid_input = 0;
		else
			result = result * str_base + digit;
		str++;
	}
	if (valid_input == 0)
		return (0);
	return (result * sign);
}
```
