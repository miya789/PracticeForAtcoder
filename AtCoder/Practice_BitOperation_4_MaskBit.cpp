#include <iostream>
#include <bitset>
using namespace std;

const unsigned int BIT_FLAG_DAMAGE    = (1 << 0);
const unsigned int BIT_FLAG_DOKU      = (1 << 1);
const unsigned int BIT_FLAG_MAHI      = (1 << 2);
const unsigned int BIT_FLAG_SENTOFUNO = (1 << 3);

const unsigned int MASK_ATTACK = BIT_FLAG_DAMAGE;

const unsigned int MASK_PUNCH = BIT_FLAG_DAMAGE | BIT_FLAG_MAHI;

const unsigned int MASK_DEFEAT = BIT_FLAG_DAMAGE | BIT_FLAG_SENTOFUNO;

const unsigned int MASK_DOKU_MAHI = BIT_FLAG_DOKU | BIT_FLAG_MAHI;

int main () {
  unsigned int status = 0;
  cout << "start: " << bitset<4>(status) << endl;

  status |= MASK_ATTACK;
  cout << "attacked: " << bitset<4>(status) << endl;

  status |= MASK_PUNCH;
  cout << "punched: " << bitset<4>(status) << endl;

  if (status & MASK_DOKU_MAHI) {
    cout << "You are doke or mahi." << endl;
  }

  status &= ~MASK_DOKU_MAHI;
  cout << "kaihuku: " << bitset<4>(status) << endl;

  status |= MASK_DEFEAT;
  cout << "sentofuno: " << bitset<4>(status) << endl;

  status &= ~MASK_DOKU_MAHI;
  cout << "sentofuno no mama: " << bitset<4>(status) << endl;

  return 0;
}
