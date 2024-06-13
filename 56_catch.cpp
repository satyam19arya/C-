// catch block of child class should come first and then the catch block of parent class should come

#include <iostream>
using namespace std;

class MyException1{
    // Base exception class
};

class MyException2 : public MyException1{
    // Derived exception class
};

int main(){
    int x = 10, y = 0, z = 0;
    try{
        throw 'a'; // MyException1, MyException2, 1, 1.5
    }
    catch(int e){
        cout << "Int catch";
    }
    catch(double e){
        cout << "Double catch";
    }
    catch(char e){
        cout << "Char catch";
    }
    catch(MyException2 e){
        cout << "MyException2 catch";
    }
    catch(MyException1 e){
        cout << "MyException1 catch";
    }
    catch(...){
        cout << "All catch";
    }
    return 0;
}