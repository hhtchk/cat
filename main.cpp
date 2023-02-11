#include <iostream>
#include <cstdlib>
#include <iterator>
#include <list>
using namespace std;
int main() {
  srand(time(NULL));
  list <int> listik(10,1);
  list<int>::iterator it;
  for (it=listik.begin();it!=listik.end();++it){
      *it=rand()%10;}
  listik.sort();
  for (it=listik.begin();it!=listik.end();++it){
      cout<<*it<<' ';}
  return 0;
}
