#include <iostream>
#include <string.h>

namespace constants
{
  inline constexpr int ElementMaxSize=30;
}
class Memory
{
  private:
  char* HeapMemory;

  public:
  Memory()
  {
    if(HeapMemory!=nullptr)
    {
      HeapMemory = new char[1]{3};
    }
    std::cout<<*HeapMemory;
  }
  Memory(char* string_name)
  {
    if(HeapMemory!=nullptr)
    {
      if(strlen(string_name)<=constants::ElementMaxSize)
      {
      HeapMemory = new char[strlen(string_name)];
      strcpy(HeapMemory,string_name);
      }
    }
    std::cout<<HeapMemory<<std::endl;
  }
  ~Memory()
  {
    if(HeapMemory!=nullptr)
    {
      delete HeapMemory;
    }
  }
};
int main() {
  char r[] ="test_string";
Memory a(r);
}