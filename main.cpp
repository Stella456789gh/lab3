#include <iostream>
#include "dayOfYear.h"
// 3. main.cpp: 테스트
// 객체1 선언, input 멤버함수 호출, print 멤버함수 호출
// 객체2 선언, set 함수들 호출, print 멤버함수 호출
// 객체1과 객체2가 같은지 비교 (모든 멤버변수 비교, get 함수들 이용)
int main()
{
    using namespace KwonMinSung2693018;

    dayOfYear d1;
    d1.input();
    d1.print();

    dayOfYear d2;
    d2.input();
    d2.print();

    if (d1.getMonth() == d2.getMonth()) std::cout << "Same month" << std::endl;
        else std::cout << "Different month" << std::endl;

    if (d1.getDay() == d2.getDay()) std::cout << "Same day" << std::endl;
        else std::cout << "Different day" << std::endl;
    
    
return 0;

}