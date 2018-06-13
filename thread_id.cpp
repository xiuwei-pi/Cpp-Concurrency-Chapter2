#include<iostream>
#include<thread>
// 根据主线程和其他线程，判断属于哪个线程
std::thread::id master_thread;
void do_master_work()
{
  std::cout<<"master work"<<std::endl;
}
void do_common_work()
{
  std::cout<<"common work"<<std::endl;
}
void some_core_part_of_algorithm()
{
  if(std::this_thread::get_id()==master_thread)
  {
    do_master_work();
  }
  do_common_work();
}

int main()
{
  master_thread=std::this_thread::get_id();
  std::cout<<master_thread<<std::endl;
  std::thread t(some_core_part_of_algorithm);
  t.join();
  some_core_part_of_algorithm();
  return 0;
}
