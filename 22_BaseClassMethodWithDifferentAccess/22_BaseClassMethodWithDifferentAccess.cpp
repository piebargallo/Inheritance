#include <iostream>

class Gregarious
{
public:
	virtual void talk() {
		std::cout << "Gregarious says hi!" << std::endl;
	}
};

class Shy : public Gregarious
{
protected:
	void talk() override {
		std::cout << "Shy reluctantly says hello." << std::endl;
	}
};

int main()
{
	{
		Shy myShy;
	}

	{
		Shy myShy;
		Gregarious& ref{ myShy };
		ref.talk();
	}
	return 0;
}