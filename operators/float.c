#include"stdio.h"
main()
{
	float x=5/2;
	float y=5%2;
	float z=5.0/2;
//	float w=5.0%2;	printing these values would lead to compilation error since modulous cant be operated on floating nums coz for floats reminder means nothing
//	int a=5.0%2;
	printf("%f %f %f",x,y,z);
}
