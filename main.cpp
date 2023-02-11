#include <iostream>
#include <cstdlib>
#include <iterator>
#include <list>
using namespace std;
int main() {
  srand(10);
  list <int> listik(10,1);
  list<int>::iterator it;
  for (it=listik.begin();it!=listik.end();++it){
      *it=rand()%10;}
  for (it=listik.begin();it!=listik.end();++it){
      cout<<*it<<' ';}
  return 0;
}
