#include <iostream>
#include <vector>

using namespace std;

int main() {
  
  vector<int> A = {0, 1};
  int n;

  cout << "Введите n: ";
  cin >> n;

  if(n < 1){
    cout << "Некорректное число n!";
    return 0;
  }
  else if(n == 1){
    cout << "Ряд Фибонначи от числа 1: " << 0;
    cout << "\nSumma: " << 0;
    return 0;
  }
  else if(n == 2){
    cout << "Ряд Фибонначи от числа 2: " << 0 << " " << 1;
    cout << "\nSumma: " << 1;
    return 0;
  }
  

  for(int i = 0; i < n - 2; i++){
    int num = A[i] + A[i + 1];
    A.push_back(num);
  }

  int summa = 0;

  cout << "Ряд Фибонначи от числа " << n << ":\n";
  for(int i = 0; i < A.size(); i++){
    cout << A[i] << " ";
    summa += A[i];
  }

  cout << "\nSumma: " << summa << "\n\n";

  return 0;
}
