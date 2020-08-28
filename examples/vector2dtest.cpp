#include <iostream>
#include "vector2d.h"

using Vec= vector::Vector2D;

void add(){
    std::cout << "Add Test" << std::endl;
    Vec v1(100,100);
    Vec v2(250.0,150.0);
    std::cout << v1.Print() << std::endl;
    std::cout << v2.Print() << std::endl;
    Vec v3 = v1 + v2;
    std::cout << v3.Print() << std::endl;
    v1 += v2;
    std::cout << v1.Print() << std::endl;
}


void mult(){
    std::cout << "Mult Test" << std::endl;
    Vec v1(2,3);
    Vec v2(2.5,1.5);
    std::cout << v1.Print() << std::endl;
    std::cout << v2.Print() << std::endl;
    Vec v3 = v1 * 2;
    std::cout << v3.Print() << std::endl;
    v2 *= 3;
    std::cout << v2.Print() << std::endl;
}

void divide(){
    std::cout << "Divide Test" << std::endl;
    Vec v1(2,3);
    Vec v2(2.5,1.5);
    std::cout << v1.Print() << std::endl;
    std::cout << v2.Print() << std::endl;
    Vec v3 = v1 / 2;
    std::cout << "v1 / 2 = "<< v3.Print() << std::endl;
    v2 /= 0.5;
    std::cout << v2.Print() << std::endl;
    std::cout << "v2 / 0.5 = "<< v3.Print() << std::endl;
    try{
        v1 /= 0;
    }catch(std::runtime_error& e){
        std::cout << e.what() << std::endl;
    }
    try{
        Vec v4 = v2 / 0;
        std::cout << v4.Print() << std::endl;
    }catch(std::runtime_error& e){
        std::cout << e.what() << std::endl;
    }
}

void sub(){
    std::cout << "Sub Test" << std::endl;
    Vec v1(2,3);
    Vec v2(2.5,1.5);
    std::cout << v1.Print() << std::endl;
    std::cout << v2.Print() << std::endl;
    Vec v3 = v2 - v1;
    std::cout << "v2 - v1 = "<< v3.Print() << std::endl;
    v2 -= v1;
    std::cout << "v2 -= v1 :"<< v2.Print() << std::endl;
}

void length(){
    std::cout << "Length Test" << std::endl;
    Vec v(3,4);
    std::cout << v.Print() << std::endl;
    std::cout << "Length\nexpected 5\nactual " << v.Length() << std::endl;

}

void norm(){
    std::cout << "Norm Test" << std::endl;
    Vec v(3,4);
    std::cout << v.Print() << std::endl;
    v.Normalize();
    std::cout << "Norm\nexpected x:0.6 y:0.8\nactual " << v.Print() << std::endl;
}

int main(){
    add();
    mult();
    divide();
    sub();
    length();
    norm();
}