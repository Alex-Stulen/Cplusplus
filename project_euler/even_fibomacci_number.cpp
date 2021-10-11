#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> fib = {0, 1};
	int summa = 0;
	
	bool done = false;
	int i = 0;
	while(!done){
		int num = fib[i] + fib[i + 1];
		if(num % 2 == 0 && num < 4000000){
			summa += num;
		}
		else if(num >= 4000000){
			done = true;
		}

		fib.push_back(num);
		i++;
	}

	cout << summa;
	
	cout << "\n\n";
	return 0;
}
