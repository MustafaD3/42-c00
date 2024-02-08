#include <stdio.h>
#include <unistd.h> //Write Ekle bu sonrakile egzersizlere
int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int diff_count;

	number = 0;
	diff_count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			diff_count++;
		else if (str[i] == ' ' || str[i] == '+')
		{

		}
		else if(str[i] >= '0' && str[i] <= '9' )
		{
			number *= 10;
			number += str[i] - '0';
		}
		else if(!(str[i] >= '0' && str[i] <= '9') && !(str[i] == ' ' || str[i] == '+'))
			break;
		i++;
	}
	if(diff_count % 2 == 1)
		number *= -1;
	return(number);
}

int main(){
	char *str = "----++14263525sdaasdas35d";
	printf("%d",ft_atoi(str));
}