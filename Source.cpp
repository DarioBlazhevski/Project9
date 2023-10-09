#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	double x, Y;

	cout << "Vnesi ja vrednosta na x : ";
		cin >> x;

		if (x < 0)
		{
			Y = pow(x, 5);
		}
		else 
			if (x < 5) 
			{
				Y = (x + 7) / 5;
			}
			else 
				if (5 <= x)
				{
					Y = sqrt(x + 5);
				}

		cout << "\nVrednosta e na Y e : " << Y << endl;


		




	















	cin.get(); cin.get();

	return 0;
}