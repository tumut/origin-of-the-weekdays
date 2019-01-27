#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	/* Planets ordered by their period of revolution around the Earth */
	vector<string> planets = { "Moon", "Mercury", "Venus", "Sun", "Mars", "Jupiter", "Saturn" };

	/* We'll assign the planets with a longer period first */
	std::reverse(planets.begin(), planets.end());

	vector<string> weekdays = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };

	/*
	 * Let's assign a planet to each of the 24 hours of a day. We'll need to
	 * do it 7 times (for 7 days) in order to close the loop.
	 */

	int i = 0;

	for (int d = 0; d < 7; ++d) {
		for (int h = 0; h < 24; ++h) {
			if (h == 0) {
				cout << weekdays[d] << " - " << planets[i % planets.size()] << " Day\n";
				cout << "---\n";
			}

			cout << setw(2) << setfill('0') << h << "h - " << planets[i++ % planets.size()] << '\n';
		}

		cout << '\n';
	}
}