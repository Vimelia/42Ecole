#include <stdio.h>
#include <stdlib.h>
char *strjoinn(int size, char **strs, char *sep)
{
	//Size'a kadar olan strs'nin tüm elemanlarının boyutunu ayarla
	
	int i, j, strSayac, sepSayac;
	i = 0;
	strSayac = 0;
	sepSayac = 0;
	
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			strSayac++;
		}
		i++;
	}
	
	//koyulacak tüm seplerin boyutunu bul
	i = 0;
	while (sep[i++] != '\0')
		sepSayac++;
	sepSayac = sepSayac * (size - 1);
	
	//ayrılmış dizinin boyutunu ayarla
	char *s = (char *)malloc(sizeof(char) * (sepSayac + strSayac) + 1);
	//ayırma islemini gerceklestir
	int boyut, c, k;
	boyut = 0;
	c = 0;
	while (boyut < size)
	{
		k = 0;
		while (strs[boyut][k] != '\0')
			s[c++] = strs[boyut][k++];
		k = 0;
		while (sep[k] != '\0' && boyut != size - 1)
			s[c++] = sep[k++];
		boyut++;
	}
	s[c] = '\0';
	return s;
}
int main()
{
	char *strs[] = {"selam", "yusuf", "mahmut"};
	printf("%s", strjoinn(3, strs, "--"));	
}
