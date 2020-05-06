#include <iostream>
using namespace std;

int main () {
	int angkaAwal = 1;
	int angkaAkhir = 100;

	for ( int m = angkaAwal; m <= angkaAkhir; m++ )
	{	
		int counterPrima = 0;
		
		for ( int i = 1; i <= m; i++ ) 
		{
			if ( m % i == 0) 
			{
				counterPrima++;
			}
		}
	
		if ( counterPrima == 2 ) 
		{
			cout << m << " adalah bilangan PRIMA" <<endl;
		} 
		else 
		{
			cout << m << " adalah BUKAN bilangan PRIMA" <<endl;
		}
		
	}
	
	return 0;
}
