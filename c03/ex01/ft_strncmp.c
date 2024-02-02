int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int i;

	i = 0;
	if(n > 0){
		while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
		{
			if (s1[i] < s2[i])
				return (-1);
			else if(s1[i] > s2[i])
				return (1);
			i++;
		}
		if (i == n)
        return 0;
    		// Eğer biri daha uzunsa
		else if (s1[i] == '\0')
			return -1; // s1, s2'den daha küçüktür
		else
			return 1; // s1, s2'den daha büyüktür
		}
		return 0;
}
