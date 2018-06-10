#include<iostream>
#include<thread>
//传递一个成员函数指针作为线程函数，并提供一个合适的对象指针
//作为第一个函数
using namespace std;
class X
{
public:
  void do_lengthy_work(int x)
  {
    cout<<"x="<<x<<endl;
    return ;
  }
};
int main(void)
{
  X my_x;
  int num(0);
  thread t(&X::do_lengthy_work,&my_x,num);
  t.join();
  return 0;
}
