char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		char *tmpstr = str;
		char *tmpto_find = to_find;
		while(*tmpstr != '\0' && *tmpto_find != '\0' && *tmpstr == *tmpto_find){
			tmpstr++;
			tmpto_find++;
		}
		
		if (*tmpto_find == '\0')
		{
			return str;
		}
		str++;
	}
	return 0;
}