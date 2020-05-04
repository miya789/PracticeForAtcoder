#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &inputArray, int N) {
  int oddOccurences = 0;
  for (int i: inputArray) {
    oddOccurences ^= i;
  }
  return oddOccurences;
}

int main() {
  int N;
  vector<int> inputArray;
  cin >> N;
  inputArray.resize(N);
  for (int i = 0; i < N; i++) cin >> inputArray[i];
  cout << solution(inputArray, N) << endl;
}
