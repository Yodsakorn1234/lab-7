#include<iostream>
using namespace std;
typedef long long int lli;
int main(){
	
	lli i = 0;
	lli P[5000];

	while(i < 5000){
		P[i] = 2 * i + 1;
		i++;
	}

	lli k;
	cout << "Please input k: ";
	cin >> k;

	lli result;
	if (k > 0)
	{
		i = 0;
		result = 0;
		while (i < 5000)
		{
			if (P[i]%k == 0)
			{
				result = result - P[i];
			}
			else{
				result = result + P[i];
			}
			i = i+1;
		}
		cout << "Result = " << result << endl;
	}
	else{
		cout << "Invalid input!!!" << endl;
	}
	return 0;
}