/*
 * Filename: /home/ubuntu/Code/CPlus/STL/studytonight/list.cpp
 * Path: /home/ubuntu/Code/CPlus/STL/studytonight
 * Created Date: Thursday, April 30th 2020, 4:48:18 pm
 * Author: liuwenwen
 * 
 * Copyright (c) 2020 yuhai.tech
 */
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> foo{1, 2, 3, 4, 5};
    list<int>::iterator it=foo.begin();
    it++;       //记录这里不能用it=it+1，因为list的本质是双向链表，它不支持随机访问
    foo.insert(it, 100);
    return 0;
}