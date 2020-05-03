int gcd(int a,int b)
{
	int c;
	if((c=a%b)!=0)
	{
		a=b;
		b=c;
		gcd (a,b);
	}
	return b;
}
int reverse (int n)
{
	static int i =0;
	if(n>0)
	{
		i=i*10+n%10;
		n=n/10;
		reverse (n);
	}
	return i;
}
int prime(int n)
{
	static int i=1,c=0;
	if(i<=n)
	{
		if((n%i)==0)
			c++;
		i++;
		prime(n);	

	}
	return c;
}
