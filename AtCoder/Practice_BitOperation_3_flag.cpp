#include <iostream>
#include <bitset>
using namespace std;

const unsigned int BIT_FLAG_0 = (1 << 0);
const unsigned int BIT_FLAG_1 = (1 << 1);
const unsigned int BIT_FLAG_2 = (1 << 2);
const unsigned int BIT_FLAG_3 = (1 << 3);
const unsigned int BIT_FLAG_4 = (1 << 4);
const unsigned int BIT_FLAG_5 = (1 << 5);
const unsigned int BIT_FLAG_6 = (1 << 6);
const unsigned int BIT_FLAG_7 = (1 << 7);

int main () {
  unsigned int bit = BIT_FLAG_1 | BIT_FLAG_3 | BIT_FLAG_5;
  cout << "{1, 3, 5} = " << bitset<8>(bit) << endl;

  if (bit & BIT_FLAG_3) {
    cout << "3 is in     " << bitset<8>(bit) << endl;
  }

  if (!(bit & BIT_FLAG_0)) {
    cout << "0 is not in     " << bitset<8>(bit) << endl;
  }

  unsigned int bit2 = BIT_FLAG_0 | BIT_FLAG_3 | BIT_FLAG_4;
  cout << bitset<8>(bit) << " AND " << bitset<8>(bit2) << " = " << bitset<8>(bit & bit2) << endl;
  cout << bitset<8>(bit) << " OR  " << bitset<8>(bit2) << " = " << bitset<8>(bit | bit2) << endl;

  cout << "before: " << bitset<8>(bit) << endl;
  bit |= BIT_FLAG_6;
  cout << "after : " << bitset<8>(bit) << " (6 included)" << endl;

  cout << "before: " << bitset<8>(bit2) << endl;
  bit2 &= ~BIT_FLAG_3;
  cout << "after : " << bitset<8>(bit2) << " (3 excluded)" << endl;
}
