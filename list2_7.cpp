#include<iostream>
#include<thread>
int main(void )
{
  unsigned int n=std::thread::hardware_concurrency();
  std::cout<<n<<std::endl;
}
