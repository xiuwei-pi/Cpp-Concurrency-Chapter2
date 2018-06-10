#include<iostream>
//右值引用： 使用&& 只能绑定右值，不能绑定左值，右值指的是可以出现在赋值表达式
//右侧的对象。
int main(void)
{
  int && i=42;
  int j=42;
  int &&k=31;//note: int &&k=i or j is wrong since i and j is left value
  std::cout<<i<<std::endl;
  std::cout<<j<<std::endl;
  std::cout<<k<<std::endl;
  return 0;
}
