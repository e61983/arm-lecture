int add(int, int);
int div(int, int);

int main()
{
	int a, b, c;
	a=10;
	b=12;
	c=div(a,b);
	return c;
}

int add(int a, int b)
{
	return a+b;
}

int div(int a, int b)
{
	return a/b;
}

