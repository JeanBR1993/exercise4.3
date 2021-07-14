#include "std_lib_facilities.h"

int main()
{
	vector<double>distances;

	double citiesdistance;
	double sum = 0.00;

	while (cin >> citiesdistance)
	{
		sum += citiesdistance;

		distances.push_back(citiesdistance);
	}

	sort(distances);

	cout << "The sum distance between the cities is: " << sum << "\n";

	double smallest = distances[0];
	double biggest = distances[(distances.size() - 1)];

	cout << "The smallest distance is: " << smallest << ".\n";
	cout << "The biggest distance is: " << biggest << ".\n";
	cout << "The mean distance between two cities is: " << sum / distances.size() << ".\n";

	keep_window_open();
	return 0;
}