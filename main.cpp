//
//  main.cpp
//  
//
//  Created by KSUA on 11/15/17.
//

#include <stdio.h>
#include "4_check.hpp"
int main()
{
    vector<vector<char>> v;
    v.resize(6, std::vector<char>(7,'e'));
   vector<vector<char>> a = populate(v);
    print_board(cout, a);
    check(a,'r');
    check(a,'y');

}
