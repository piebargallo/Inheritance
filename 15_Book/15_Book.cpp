#include <iostream>
#include <string>

class Book
{
public:
	virtual ~Book() {}
	virtual std::string getDescription() const { return "Book"; }
	virtual int getHeight() const { return 120; }
};

class Paperback : public Book
{
public:
	std::string getDescription() const override {
		return "Paperback " + Book::getDescription();
	}
};

class Romance : public Paperback
{
public:
	std::string getDescription() const override {
		return "Romance " + Paperback::getDescription();
	}
	int getHeight() const override { return Paperback::getHeight() / 2; }
};

class Technical : public Book
{
public:
	std::string getDescription() const override {
		return "Technical " + Book::getDescription();
	}
};

int main()
{
	Romance novel;
	Book book;
	std::cout << novel.getDescription() << std::endl; // Outputs "Romance Paperback Book"
	std::cout << book.getDescription() << std::endl;  // Outputs "Book"
	std::cout << novel.getHeight() << std::endl;      // Outputs "60"
	std::cout << book.getHeight() << std::endl;       // Outputs "120"
	return 0;
}