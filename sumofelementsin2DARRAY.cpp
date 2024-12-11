#include <iostream>
using namespace std;
int carsNumber(int cars[5][5]);
int main()
{
	int cars[5][5] =
		{
			{12, 13, 141, 51, 15},
			{11, 2, 3, 5, 6},
			{1, 2, 3, 4, 5},
			{6, 77, 8, 9, 10},
			{11, 22, 4, 55, 0}};
	
	int total_cars = carsNumber(cars);
	
	cout << total_cars << "\t";
    return 0;
}
int carsNumber(int cars[5][5])
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sum = sum + cars[i][j];
		}
		cout << endl;
	}
	return sum;
}