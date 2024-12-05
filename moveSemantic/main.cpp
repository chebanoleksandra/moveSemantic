#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
	Book a("Louisa May Alcott", "Little Women", 331, 2020);
	a.Print();
	cout << endl;
	Book b = move(a);
	b.Print();
	a.Print();
}