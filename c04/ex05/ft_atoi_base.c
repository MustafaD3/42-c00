#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_in_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

void	ft_print(unsigned int n, char *base, unsigned int size)
{
	
	if (n > size - 1)
	{
		ft_print(n / size, base, size);//Basamak Düşürerek Recursive Çağrı n < size - 1 olana kadar recursive devam eder yani oluşan sayı,sayı sisteminin maksimum indexini geçmiyecek
		
		n %= size;//Basamak Düşürme
	}
	ft_putchar(base[n]);
	//N Maksimum size - 1 yanı tabanın sonu olursa tabanda bu indexi arayıp ekrana yazdırabilirim yoksa bölmem gerekli
}

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

void	ft_atoi_base(char *str, char *base)
{
	int	number;
	number = ft_atoi(str);
	int size;

	size = -1;
	while (base[++size])
	{
		if (base[size] == '+' || base[size] == '-' || base[size] == ' ' //+-veya boşmu
			|| ft_in_base(base[size], base + size + 1)//Taban Aynı Karakteri İki Kere Bulunduruyormu kontrolu
			|| (base[size] >= 9 && base[size] <= 13))
			return ;
	}
	if (size < 2)
		return ;
	if (number < 0)
	{
		ft_putchar('-');
		ft_print(-number, base, size);
	}
	else
		ft_print(number, base, size);
	
}

int main(){
	char *str = "-----++8sdaasdas35d";
	char base[]="01";
	ft_atoi_base(str,base);
}