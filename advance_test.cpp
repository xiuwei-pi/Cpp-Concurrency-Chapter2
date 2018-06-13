#include<iostream>
#include<iterator>
#include<vector>
int main()
{
  std::vector<int> v{1,2,3,4};
  auto vi=v.begin();
  std::advance(vi, 4);//如果超过这个范围，那么值就是0了
  std::cout<<*vi<<"\n";
  return 0;
}
