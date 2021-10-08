#include <iostream>
#include <vector>

using namespace std;

void display_vector(vector<int> vec);
void init_vector_with_number(vector<int> &vec, int start, int stop);
void del_numbers_from_vector(vector<int> &vec);
bool vector_is_have_number_is_not_divisible_three_or_five(vector<int> &vec);
int vector_diff_index(vector<int> &vec);
int vector_summa(vector<int> &vec);

int main(){
	
	vector<int> array;
	int start = 0;
        int stop = 1000;	

	init_vector_with_number(array, start, stop);
	del_numbers_from_vector(array);
	
	int summa = vector_summa(array);
	cout << summa;

	// display_vector(array);

	return 0;
}

void init_vector_with_number(vector<int> &vec, int start, int stop){
	
	if(start > stop){
		int len = start - stop;

		for(int i = start; i > stop; i--){
			vec.push_back(i);
		}
	}
	else if(start < stop){
		for(int i = start; i < stop; i++){
			vec.push_back(i);
		}
	}
	else{
		vec.push_back(start);
	}
}

void del_numbers_from_vector(vector<int> &vec){
	while(vector_is_have_number_is_not_divisible_three_or_five(vec)){
		int index = vector_diff_index(vec);
		if(index >= 0){
			vec.erase(vec.begin() + index);
		}
	}
}

int vector_summa(vector<int> &vec){
	int summa = 0;
	for(int i = 0; i < vec.size(); i++){
		summa += vec[i];
	}

	return summa;
}

bool vector_is_have_number_is_not_divisible_three_or_five(vector<int> &vec){
	bool is_have = false;

	for(int i = 0; i < vec.size(); i++){
		int num = vec[i];
		if(num % 3 != 0 && num % 5 != 0){
			is_have = true;
		}
	}

	return is_have;
}

int vector_diff_index(vector<int> &vec){
	for(int i = 0; i < vec.size(); i++){
		int num = vec[i];
		if(num % 3 != 0 && num % 5 != 0){
			return i;
		}
	}

	return -1;
}

void display_vector(vector<int> vec){
	for(int i = 0; i < vec.size(); i++){
		cout << vec[i] << " ";
	}
}
