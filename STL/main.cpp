#include <iostream>
#include<array>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n-------------------------------\n"

template<typename> T vector_propereties(const std::vector<T>& vec)
{
	cout << "Size:\t" << vec.size() << endl;
	cout << "Capacity:\t" << vec.capacity() << endl;
	cout << "Max size:\t" << vec.max() << endl;
}
void main()
{
	setlocale(LC_ALL, "");
#ifdef STL

	//array- это контейнер,который хранит данные в виде статического массива

#endif // STL
	const int N = 5;
	std::array<int, N> arr = { 3,5,8 };
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr.data()[i] << tab;
	}
	cout << endl;
#ifdef STL_VECTOR

	// vector- это контейнер,который хранит данные в виде динамического массива.
	// vector- позволяет добавлять значение толь в конец, и удалять элементы только с конца
	// это НЕ считая вставки и удаления по индексу
	std::vector<int> vec = { 0,1,1,2,3,5,8,13,21,34 };
	vec.resize(22);
	for (int i = 0; i < vec.size(); i++)
	{
		//cout << vec[i] << tab;
		cout << vec.at(i) << tab;
	}
	cout << endl;
	vec.resize(8);
	try
	{
		for (int i = 0; i < vec.capasity; i++)
		{
			//cout << vec.[i] << tab;
			cout << vec.at(i) << tab;
		}
		cout << endl;
	}
	catch (const std::exception&)
	{
		std::cerr << e.what() << endl;
	}
	vector_properties(vec);
	cout << delimiter << endl;
	std::vector<int>vec2(100);
	vector_propereties(vec2);
	cout << delimiter << endl;
	vec2.push_back(123);
	vector_propereties(vec2);
	//cout << delimiter << endl;
	//vec2.shrilink_to_fit(); // убирает всю зарезервированную память,т.е. уменьшает capacity до фактического размера
	//vector_properties(vec2);
	cout << delimiter << endl;
	for (int i = 0; i < 90; i++)vec2.pop_back();
	vec2.reserve(255);
	vec2.resize(22);
	vector_propereties(vec2);

#endif // STL_VECTOR

}