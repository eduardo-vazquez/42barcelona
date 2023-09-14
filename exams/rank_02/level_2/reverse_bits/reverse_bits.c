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
