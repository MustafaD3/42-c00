int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-1); // s1, s2'den daha küçüktür
	else
		return (1); // s1, s2'den daha büyüktür
}
//Bu Kod 2 Stringi harf harf karşılaştırır ilk parametrenin herhangi bir indexteki harfi ikinci parametrenin aynı indexdeki harfinden küçükse negatif büyükse pozitif dizi eşitse 0 ama biryere kadar eşit olabilme durumu vardır oyuzden sonrasında uzunluk kontrolu saglanmalı