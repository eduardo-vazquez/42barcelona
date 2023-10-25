### subject
```
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
```
### code
```
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	reversed;
	int				i;

	i = 0;
	while (i < 8)
	{
		reversed = (reversed << 1) | (octet >> i & 1);
		i++;
	}
	return (reversed);
}
```
