#pragma once
class Book
{
	char* author;
	char* text; int pages;
	int year;
public:
	Book() = default;
	Book(const char* a, const char* t, int p, int y);
	Book(const Book& obj) = delete;
	Book(Book&& obj);
	Book& operator=(const Book& obj) = delete;
	Book& operator=(Book&& obj);
	void Input();
	void Print();
	~Book();
};
