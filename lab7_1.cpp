#include<iostream>
#include<cstring>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main()
{
	char string1[20];
	int i, length;
	int a = 0;

	cout << "Input text: ";
	cin >> string1;
	cout << "Reversed text: " << func1(string1) << "\n";
	string string2 = func3(string1);

	length = strlen(string1);

	for (i = 0; i < length; i++)
	{
		if (string2[i] != string2[length - i - 1])
			a = 1;
		break;
	}

	if (a)
	{
		cout << "Palindrome: No" << "\n";
	
	}else{
		cout << "Palindrome: Yes" << "\n";
	}
	return 0;
}