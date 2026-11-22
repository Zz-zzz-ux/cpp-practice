#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    char c;
    char flag;
    while(true)
    {
        cout<<"请输入第一个数字：";
        cin>>a;
        cout<<"请输入运算符：";
        cin>>c;
        cout<<"请输入第二个数字：";
        cin>>b;

        if (c == '+'){
            cout<<a<<c<<b<<"="<<a+b;
        }
        else if (c == '-'){
            cout<<a<<c<<b<<"="<<a-b;
        }
        else if (c == '*'){
            cout<<a<<c<<b<<"="<<a*b;
        }
        else if (c == '/'){
            if(b == 0)
            {
                cout << "除数不能为0！";
            }
            else
            {
                cout<<a<<c<<b<<"="<<a/b;
            }
        }
        else
        {
            cout << "请输入正确运算符！";
        }

        cout<<"继续计算吗？y继续，其他退出：";
        cin>>flag;
        if(flag != 'y')
        {
            break;
        }
        cout<<"-------------------------";
    }
    cout<<"程序结束！";
    return 0;
}

