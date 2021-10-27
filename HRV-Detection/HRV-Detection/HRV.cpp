#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

fstream rawData;
vector<float> y;

void storeData()
{
	while (rawData.good())
	{
		string line;
		getline(rawData, line, '\n');
		y.push_back(stof(line));
	}
	cout << y.size();
}
int main()
{
	rawData.open("Dataset/ecg-1.csv");
	storeData();
	return 0;
}
