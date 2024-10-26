#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, count(0), sum(0), num;
	cout << "Введите число: ";
	cin >> n;
	num = n;
	while (num >= 10)
	{
		num /= 10;
	}
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
		count++;
	}
	cout << "Первая цифра вашего числа: " << num << endl;
	cout << "Сумма цифр вашего числа: " << sum << endl;
	cout << "Количество цифр вашего числа: " << count << endl;
	return 0;
}




