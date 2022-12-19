#include <stdio.h>

void * ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned int i;
	char *to_c;
	char *from_c;
	char temp[numBytes];

	i = 0;
	to_c = (char *) to;
	from_c = (char *) from;
	while (i < numBytes)
	{
		temp[i] = from_c[i];
		i++;
	}
	i = 0;
	while (i < numBytes)
	{
		to_c[i] = temp[i];
		i++;
	}
	return (to_c);

}
// int main()
// {
// 	char *arr1 = "copy";
// 	char arr2[100];
// 	ft_memmove(arr2, arr1, 5);
// 	printf("%s",arr2);
// }