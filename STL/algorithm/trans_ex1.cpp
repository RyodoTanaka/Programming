#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// 変換関数
double reciprocal(double i)
{
  return 1.0/i; // 逆数を返す
}

int main(int argv, char* argc[])
{
  list<double> vals;
  int i;

  for(i=1; i<10; i++)
	vals.push_back((double)i);

  cout << "Original : " << endl;
  list<double>::iterator p = vals.begin();

  while(p != vals.end()){
	cout << *p << " ";
	p++;
  }
  cout << endl;

  // 値の変換
  p = transform(vals.begin(), vals.end(),
				vals.begin(), reciprocal);

  cout << "Transformed : " << endl;
  p = vals.begin();
  while(p != vals.end()){
	cout << *p << " ";
	p++;
  }
  cout << endl;

  return 0;
}
