int ft_isascii(int ch)
{
	if (ch >= 0 && ch < 128)
		return (1);
	return (0);
}
