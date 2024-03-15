// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Art
{
    public:
    int a,b;
   
    void input()
    {
        cout<<"Enter a and b=";
        cin>>a>>b;
    }
    void output(int a,int b);
};
    void Art :: output(int a,int b)
    {
        int add,sub;
        add=a+b;
        sub=a-b;
        cout<<"Add="<<add<<endl;
        cout<<"Sub="<<sub<<endl;
    }
   

int main() {
   
    Art a;
    a.input();
    a.output(a.a,a.b);

    return 0;
}
