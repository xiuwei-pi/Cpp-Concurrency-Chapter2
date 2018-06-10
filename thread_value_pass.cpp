#include<thread>
#include<iostream>
using namespace std;
void f(int i,string& s )
{
  s[0]='b';
  return ;
}

int main(int agrc,char ** argv)

{
  string h=string(10,'c');
  thread t(f,2,ref(h));
  t.join();
  cout<<h[0]<<endl;
  return 0;
}
