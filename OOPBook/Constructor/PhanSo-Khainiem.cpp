// #include<iostream>

// using namespace std;

class PhanSo{
  private: int tu,mau;
  public:
      PhanSo()
      {
        tu =0; mau =1;
      }
      PhanSo(int t)
      {
        tu  =t, mau =1;
      }
      PhanSo(int t, int m)
      {
        if (m<0){
          t = -t; m =-m;
        }
        if (m ==0) m=1;
        tu =t; mau =m;
      }
};

void test(PhanSo in)
{

}
int main ()
{
  PhanSo a(2,3);
  PhanSo b(a);      // Khởi tạo b bằng cách copy a
  PhanSo c =a;      // Khởi tạo c bằng cách copy a
  test(a);          // Khởi tạo in bằng cách copy a
}