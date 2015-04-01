// Kyle Fritz
// Lab2.cpp: Finds factorial of a number and the sum of all numbers from 0 to 
//   that number
#include <iostream>
using namespace std;

int main() {
    int num;
    char line[80];
    cout << "Type in an integer: ";
    cin >> num;
    cout << "Enter your name: ";
    cin.getline(line, sizeof(line));
    cin.getline(line, sizeof(line));
    int i = 0;
    int sum = 0;
    while (i < num) {
	i += 1;
	sum += i;
	if (i >= num) {
     cout << "The sum of all numbers from 0 to your number is " << sum << endl;
	}
      }

    int fact = 1;
    for (int j = 1; j <= num; j += 1) {
      fact *= j;
      if (j == num) {
	cout << num << " factorial is " << fact << endl;
      }
    }
    return 0;
}
