#include<iostream>
using namespace std;

class MyIntArray{
  int* pArr;
  int size;
  public:
    MyIntArray(int sz)
    {
      size =sz;
      pArr = new int[size];
      for (int i=0;i <size;i++)
        pArr[i] = i;
    }
    
    // khac phuc tinh trang tro vo cung 1 vung nho:

    MyIntArray(const MyIntArray& src)
    {
      size = src.size;
      pArr = new int[size];
      for (int i = 0;i <size; i++)
      {
        pArr[i] = src.pArr[i];
      }
    }
    void update(int k, int val)
    {
      pArr[k]= val;
    }
    int get(int k)
    {
      return pArr[k];
    }
};

int main()
{
  MyIntArray a(10);
  MyIntArray b(a);        // copy a tuc la copy tung bit

  a.update(3,10);         // a[3] =10, anh huong den b[3] boi vi a va b deu tro den 1 vung nho

  cout<<b.get(3)<<endl;
  return 0;
}