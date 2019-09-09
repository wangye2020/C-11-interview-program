#include<iostream>
void func(int a , const int * p)
{
	int b  = 100 ;
	p = &b;
	

}
int main()
{
	int a_ttr = 1;
	func(1,&a_ttr);

	return 0;



}