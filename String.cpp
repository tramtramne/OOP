#include <iostream>
#include<string>
#include<queue>
#include <cstring>
using namespace std;


class String{
  public: string str;
  public: 
    void Set(char a[])
    {
      for (int i=0; i < strlen(a); i++)
      {
        if (a[i] == '\0') break;
        str[i]= a[i];
      }

     // cout<<str;
    }
    void cancel()
    {
      str ="";
    }
    int Length()
    {
      int count = 0;
      int i=0;
      while (true)
      {
        if (str[i] !=  '\0') count++;
        else break;
        i++;
      }
      return count;
    }
    void input()
    {
      getline(cin,str);
    }
    
    void output()
    {
      for (int i=0; i< Length(); i++)
        cout<<str[i];
    }
    String* concatenate(String* temp)
    {
      int len1 = Length();
      int len2 = temp->Length();
      temp->output();
      String* x = new String;
      x->Set(&(str[0]));
      for (int i=0; i< len2; i++)
      {
        x->str[len1-1+i] = (temp->str)[i];
      }
      return x;

    }
    void Reverse()
    {
      for (int i=0; i<= Length()/2; i++)
      {
        swap(str[i],str[Length() - 1-i]);
      }
      
    }
    
};

// ostream& operator << (ostream& out, String s)
// {
//   out <<s.
// }

int main()
{
  char a[]= "anjdj";
  //cout<<sizeof(a)<<endl;
  String* s = new String;
  s->Set(a);
  //cout<<s->str<<"h"<<endl;
  String* temp = new String;
   char b[] = "abc";
   temp->Set(b);
  String* x3 = new String;
   x3 =s->concatenate(temp);

  cout<<endl;
  x3->output();
  delete s;
  delete temp;
  delete x3;
}