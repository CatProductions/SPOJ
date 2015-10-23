#include <stdio.h>

void reverse(int *s)
{
	int k, a, r = 0;
	for(k = 1; (*s); k++)
		{
			a = (*s) % 10;
			(*s) /= 10;
			r *= 10;
			r += a;
		}
	(*s) = r;
}

int main(void)
{
	int i[2], n, s;
	for(scanf("%d", &n); n; n--)
	{
		scanf("%d %d", &i[0], &i[1]);
		reverse(i);
		reverse(i+1);
		s = i[0] + i[1];
		reverse(&s);
		printf("%d\n", s);
	}
	return 0;
}
