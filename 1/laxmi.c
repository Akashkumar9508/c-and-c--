//function declaration
int cuboid(int l,int b,int h);
int cube(int a);
void print();
//fun definnition
int cuboid(int l,int b,int h)
{
	return 2*(l*b+b*h+h*l);
}
int cube(int a)
{
	return 6*a*a;
}
void print()
{
	int a;
	printf("List of natural number upto 10\n");
	for(a=1;a<=10;a+=1)
	{
		printf("%d \t",a);
	}
}