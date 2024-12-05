#include "Book.h"
#include "Book.h" 
#include <iostream> 
using namespace std;

Book::Book(const char* a, const char* t, int p, int y)
{
	author = new char[strlen(a) + 1];
	strcpy_s(author, strlen(a) + 1, a);
	text = new char[strlen(t) + 1];
	strcpy_s(text, strlen(t) + 1, t);
	pages = p;
	year = y;

}

Book::Book(Book&& obj)
{
	author = obj.author;
	text = obj.text;
	pages = obj.pages;
	year = obj.year;
	obj.author = nullptr;
	obj.text = nullptr;
	obj.pages = 0;
	obj.year = 0;
}

Book& Book::operator=(Book&& obj)
{
	author = obj.author;
	text = obj.text;
	pages = obj.pages;
	year = obj.year;
	obj.author = nullptr;
	obj.text = nullptr;
	obj.pages = 0;
	obj.year = 0;
	return *this;
}

void Book::Input()
{
	char buff[80];
	cout << "Input author: ";
	cin >> buff;
	if (author != nullptr)
	{
		delete[] author;
	}
	author = new char[strlen(buff) + 1];
	strcpy_s(author, strlen(buff) + 1, buff);
	cout << "Input text: ";
	cin >> buff;
	if (text != nullptr)
	{
		delete[] text;
	}
	text = new char[strlen(buff) + 1];
	strcpy_s(text, strlen(buff) + 1, buff);
	cout << "Input pages number: ";
	cin >> pages;
	cout << "Input publishing year: ";
	cin >> year;
}

void Book::Print()
{
	cout << "Author: " << author << endl;
	cout << "Text: " << text << endl;
	cout << "Pages number: " << pages << endl;
	cout << "Publishing year: " << year << endl;
}

Book::~Book()
{
	delete[] author;
	delete[] text;
}
