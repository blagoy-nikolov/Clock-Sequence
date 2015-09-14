#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int sumofdigits(int num)
{
	int sum=0;
	while (num > 0)
	{
		sum += num % 10;
		num=num/10;
	}
	return sum;
}
bool check_num(int num)
{
	string temp=to_string(num);
	return !any_of(temp.begin(), temp.end(), [](char x){return (x != '1'&&x != '2'&&x != '3'&&x != '4'); });
}

int main()
{
	int n; cin >> n;
	vector <int>numbers;
	for (int i = 1; i < n; i++)
	{
		
		for (int j = 1; j < 100000; j++)
		{
			if (sumofdigits(j) == i)
				if (check_num(j))
				{
					numbers.push_back(j);
					break;
				}
		}
		
	}
	for (int i = 0; i < numbers.size(); i++)
	{
		
		cout << numbers[i] << " ";
	}




	system("Pause");
	return 0;
}
