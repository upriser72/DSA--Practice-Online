/*
We have N cards. A number ai is written on the i-th card.
Alice and Bob will play a game using these cards. In this game, Alice and Bob alternately take one card. Alice goes first.
The game ends when all the cards are taken by the two players, and the score of each player is the sum of the numbers written on the cards he/she has taken. 
When both players take the optimal strategy to maximize their scores, find Alice's score minus Bob's score.

Constraints:
N is an integer between 1 and 100 (inclusive).
ai(1≤i≤N) is an integer between 1 and 100 (inclusive).
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> cards(n);
  for (int i = 0; i < n; i++) {
    cin >> cards.at(i);
  }
  
  for (int i = 0; i < n -1; i++) {
    if (cards.at(i) < cards.at(i + 1)) {
      int tmp = cards.at(i);
      cards.at(i) = cards.at(i + 1);
      cards.at(i + 1) = tmp;
      i = -1;
    }
  }
  int alice = 0, bob = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      alice += cards.at(i);
    }
    else {
      bob += cards.at(i);
    }
  }
  cout << alice - bob << endl;

}

