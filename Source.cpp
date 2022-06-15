#include<initializer_list>
#include<iostream>
using namespace std;


int main()
{
	//2D
	/*
	initializer_list<initializer_list<int>>list = { {1, 2 },{3, 4} };
	
	const initializer_list<int>* p = list.begin();
	const initializer_list<int>* q = list.end();
	
	while (p != q)
	{
		const int* x = p->begin();
		const int* y = p->end();

		while (x != y)
		{
			cout << *x << " ";
			x++;
		}
		p++;
	}
	*/

	/*
	//3D
	initializer_list<initializer_list<initializer_list<int>>>list =
	{
		{{1, 2},{3, 4}}, 
		{{5, 6},{7, 8}} 
	};
	
	const initializer_list<initializer_list<int>>* p = list.begin();
	const initializer_list<initializer_list<int>>* q = list.end();
	
	while (p != q)
	{
		const initializer_list<int>* a = p->begin();
		const initializer_list<int>* b = p->end();
		while (a != b)
		{
			const int* x = a->begin();
			const int* y = a->end();

			while (x != y)
			{
				cout << *x << " ";
				x++;
			}
			cout << endl;
			a++;
		}
		cout << endl << endl;
		p++;
	}
	*/

	/*
	int a;
	cout << typeid(a).name();
	*/
	
	/*
	initializer_list<initializer_list<int>>list = { {1, 2 },{3, 4} };

	const initializer_list<int>* p = list.begin();
	const initializer_list<int>* q = list.end();

	for (auto x : list)
	{
		for (auto y : x)
		{
			cout << y << " ";
		}
		cout << endl;
	}
	*/

	/*
	initializer_list<initializer_list<initializer_list<int>>>list =
	{
		{{1, 2},{3, 4}},
		{{5, 6},{7, 8}}
	};

	const initializer_list<initializer_list<int>>* p = list.begin();
	const initializer_list<initializer_list<int>>* q = list.end();

	for (initializer_list<initializer_list<int>> x: list)
	{
		for (initializer_list<int> y : x)
		{
			for (int z : y)
			{
				cout << z << " ";
			}
			cout << endl;
		}
		cout << endl << endl;
	}
	*/
}