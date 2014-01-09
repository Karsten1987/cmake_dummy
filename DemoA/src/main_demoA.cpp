#include <iostream>
#include <typeinfo>
#include <stdio.h>
#include <vector>

#include <LibA/ClassA.h>

using namespace std;

template <typename TYPE>
void show (TYPE tData){
    cout << typeid(tData).name() << endl;
}

template <typename TYPE1, typename TYPE2>
TYPE1 PrintTwice(TYPE1 data1, TYPE2 data2)
{
    return data1 + data2;
}

void scopeFunction (){
    ClassA aa("huhu");
    return;
}

int main()
{
	cout << "DemoA is launched";

    std::vector<int> karsten(2);
    karsten.push_back(0);
    karsten.push_back(1);

    cout << karsten[0] <<std::endl;
    cout << PrintTwice(360.1, 3) << endl;
    show<double>(1234);

    scopeFunction();

    ClassA a("hello world");
    return 0;
}

