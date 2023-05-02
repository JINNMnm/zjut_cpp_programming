#include <iostream>
#include <string.h>
using namespace std;
class Test{
  char s[10];
  int n;
  public:
    Test(const char*t = "none",int b = 1);
    Test set(const char*t){
      cout << s << endl;
      Test temp(strcat(s,t),2);
      cout << s << endl;
      return temp;
    }
    ~Test();
};
Test::Test(const char* t ,int b): n (b){
  strcpy(s,t);
  cout << "constrcut:" << s << ' ' << n << endl;
}
Test::~Test(){
  cout << "destruct: " << s << ' ' << n << endl;
}


class a{
  private:
    char* s;
  public:
    a();
    a(const char * t);
    void getx();
    a& operator=(const a&right){
      
    }
    ~a(){delete [] s;};
};
a::a(){
  s = NULL;
}
a::a(const char * t){
  s = new char [strlen(t) + 1];
  strcpy(s,t);
}
void a::getx(){
  cout << &s[0] << endl;
}
int main(){
  a m("nihao"),n;
  n = m;
  n.getx();
  m.getx();
  return 0;
}
