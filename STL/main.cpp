#include <iostream>
#include<array>
#include <vector>
#include<deque>
#include <forward_list>

using std::cin;
using std::cout;
using std::endl;

//https://legacy.cplusplus.com/reference/stl/
#define tab "\t"
#define delimiter "\n-------------------------------\n"

template<typename T> void vector_propereties(const std::vector<T>& vec)
{
	cout << "Size:\t" << vec.size() << endl;
	cout << "Capacity:\t" << vec.capacity() << endl;
	cout << "Max size:\t" << vec.max_size() << endl;
	
}
//#define STL_ARRAY
//#define STL_VECTOR
//#define STL_DEQUE
//#define STL_LIST
#define STL_FORWARD_LIST

void main()
{
	setlocale(LC_ALL, "");
#ifdef STL_ARRAY

	//array- это контейнер,который хранит данные в виде статического массива

#endif // STL_ARRAY
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
	for (int i = 0; i < vec.capacity(); i++)
	{
		//cout << vec[i] << tab;
		cout << vec.at(i) << tab;
	}
	cout << endl;
	vec.resize(8);
	try
	{
		for (int i = 0; i < vec.capacity(); i++)
		{
			//cout << vec.[i] << tab;
			cout << vec.at(i) << tab;
		}
		cout << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
	//vector_propereties(vec);
	//cout << delimiter << endl;
	//std::vector <int> vec2(100);
	//vector_propereties(vec2);
	//cout << delimiter << endl;
	//vec2.push_back(123);
	//vector_propereties(vec2);
	////cout << delimiter << endl;
	////vec2.shrilink_to_fit(); // убирает всю зарезервированную память,т.е. уменьшает capacity до фактического размера
	////vector_properties(vec2);
	//cout << delimiter << endl;
	//for (int i = 0; i < 90; i++)vec2.pop_back();
	//vec2.reserve(255);
	//vec2.resize(22);
	//vector_propereties(vec2);
	//cout << delimiter << endl;
	
#endif // STL_VECTOR
#ifdef STL_DEQUE
		//deque- это контейнер, хранит данные в виде списка динамических массивов
		// в отличии от Вектора,Deque не резервирует память, и может добавлять элементы не только в конец но и в начало


#endif // STL_DEQUE
#ifdef STL_LIST
	//list - это контейнер, кроторый хранит данные в виде двусвязного списка
	std::list<int> list = { 3, 5, 8, 13, 21 };
	/*for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << tab;
	}
	cout << endl;*/
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;
	for (std::list<int>::reverse_iterator rit = list.rbegin(); rit != list.rend(); ++rit)
	{
		cout << *rit << tab;
	}
	cout << endl;

	int index;
	int value;
	cout << "Введите индекс добавляемого элемента: "; cin >> index;
	cout << "Введите значение добавляемого элемента: "; cin >> value;
	std::list<int>::iterator position = list.begin();
	//for (int i = 0; i < index; i++)++position;
	std::advance(position, index);
	list.insert(position, value);
	for (int i : list)cout << i << tab; cout << endl;
#endif // STL_LIST

		
	std::forward_list<int> fl = { 0,1,1,2,3,5,8,13,21,34 };
	fl.resize(22);
	for (int i : fl) cout << i << tab; cout << endl;
	cout << delimiter << endl;
	fl.push_front(777);
	for (int i : fl) cout << i << tab; cout << endl;
	cout << delimiter << endl;
	std::forward_list<int>::iterator it = fl.begin();
	fl.insert_after(it,999);
	for (int i : fl) cout << i << tab; cout << endl;
	

}