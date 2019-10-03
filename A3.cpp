
#include <iostream>
using namespace std;

class Log{
public:
    void e(){cout<<"Try again!\n";};

};

double d(int x, int y){
    if (y==0) throw Log();
    else return (x+0.0)/y;
}

int main(){
    int x, y;
    while(cin >> x >>y){
        try{
            cout << d(x, y);
        }catch(Log  &l){
            l.e();
        }
    }
    return 0;
}
