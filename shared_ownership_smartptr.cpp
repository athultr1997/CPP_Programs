#include <boost/shared_ptr.hpp>
#include <boost/shared_array.hpp>
#include <iostream>
#include <boost/make_shared.hpp>
#include <typeinfo>

int main()
{
  boost::shared_ptr<int> p1(new int{1});
  std::cout << *p1 << '\n';
  boost::shared_ptr<int> p2{p1};
  p1.reset(new int{2});
  std::cout << *p1.get() << '\n';
  p1.reset();
  std::cout << std::boolalpha << static_cast<bool>(p2) << '\n';

  auto p3 = boost::make_shared<int>(1);
  std::cout << typeid(p3).name() << '\n';
  auto p4 = boost::make_shared<int[]>(10);
  std::cout << typeid(p4).name() << '\n';

  boost::shared_array<int> p5{new int[1]};
  boost::shared_array<int> p6{p5};
  p6[0] = 1;
  std::cout << p5[0] << '\n';
}