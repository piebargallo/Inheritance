import my_weather_prediction;
#include <iostream>

using namespace std;

int main()
{
	MyWeatherPrediction p;
	p.setCurrentTempCelsius(33);
	p.setPositionOfJupiter(80);
	p.showResult();
	std::cout << p.getTemperature() << std::endl;
	return 0;
}