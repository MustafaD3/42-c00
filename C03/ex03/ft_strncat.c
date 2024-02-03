char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *one = dest;
	while (*dest)
	{
		dest++;
	}
	while (nb > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (one);
}
