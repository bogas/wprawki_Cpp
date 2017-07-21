#include <iostream>
#include <string.h>
#include <sstream>
#include <array>
using namespace std;
extern void reader(int** to, int& n);

int main()
{
	int** array;
	int i = 0;
	int& a = i;
	reader(array, a);
	
	
	return 0;
	
}
