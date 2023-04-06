#include<iostream>
using namespace std;

int factorial (int n)
{
	if (n > 12)throw std::exception("Arifmetical overflow");
	int f = 1;
		for (int i = 1; i <= n; i++)
		{
			//cout << i << "!= ";
			f *= i;
			//cout << f << endl;
		}
		return f;
}
//#define EXEPCTION_BASICS
//#define DIVISION_BY_ZERO
void main()
{
	setlocale(LC_ALL, "");
#ifdef EXEPCTION_BASICS
	/*int a=2;
cout << a << endl;
cout << "Finish" << endl;*/
	try
	{
		throw;
		//throw 1;     //throw- ключевое слово(бросить) бросает исключение
		//throw "something went wrong";
		throw std::exception("STD exeption thrown");
	}
	catch (int e)
	{
		std::cerr << "Errow #" << e << std::endl;
	}
	catch (const char* e)
	{
		std::cerr << "Error #" << e << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
		// метод what() сообщение об ошибке в виде С-string (const char*)
	}
	catch (...)
	{
		std::cerr << "Something went wrong" << endl;
	}
	cout << "Final" << endl;
#endif // EXEPCTION_BASICS
#ifdef DIVISION_BY_ZERO

	int a, b;
	cout << "ВВедите двачисла: "; cin >> a >> b;
	try
	{
		cout << a / b << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
	catch (...)
	{
		std::cerr << "Something went wrong" << endl;
	}
#endif // DIVISION_BY_ZERO

	int n;
	cout << "Введите число: "; cin >> n;
	try
	{
		cout << factorial(n) << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}

}