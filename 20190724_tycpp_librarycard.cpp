#include <iostream>
using namespace std;

#define SIZE 40

class card {
  char title[SIZE];
  char author[SIZE];
  int copies;

public:
  void store(char t[], char a[], int c);
  void show();
};

void card::store(char t[], char a[], int c) {
  for (int i = 0; i < SIZE; i++) {
    title[i] = t[i];
    author[i] = a[i];
  }

  copies = c;
}

void card::show() {
  for (int i = 0; i < SIZE; i++) {
    cout << title[i];
  }
  cout << endl;

  for (int i = 0; i < SIZE; i++) {
    cout << author[i];
  }
  cout << endl;

  cout << copies << endl;
}

int main() {
  card a;
  char instant_title[SIZE];
  char instant_author[SIZE];
  int instant_copy;

  cin >> instant_title;
  cin >> instant_author;
  cin >> instant_copy; 

  a.store(instant_title, instant_author, instant_copy);

  a.show();

  return 0;
}