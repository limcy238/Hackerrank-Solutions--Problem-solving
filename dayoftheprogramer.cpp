#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int year;
    cin >> year;
    if (year == 1918)
        cout << "26.09.1918\n";
    else 
	{
        if ((year < 1918 and year % 4 == 0) or (year % 4 == 0 and year % 100 != 0) or year % 400 == 0) 
           cout << "12.09." << year << '\n';
        else 
            std::cout << "13.09." << year << '\n';
    }
	return 0;
}
