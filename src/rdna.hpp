#include <string>
#include <random>
#include <iostream>
using namespace std;

string randDNA( int seed, string bases, int n)
{
	string DNAbb;
	int minimum=0;
	int maximum=bases.size()-1;
	
	if (bases.size()<1)
	return "";
	
	mt19937 ran(seed);
	
	uniform_int_distribution<>unifrm(minimum,maximum);
	
	for (int d=0; d<n; d++)
	{
		int randomIn=unifrm(ran);
		DNAbb=bases[randomIn]+DNAbb;
	}
	return DNAbb;
}
	
