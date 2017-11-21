//
//  4_check.hpp
//  
//
//  Created by KSUA on 11/15/17.
//

#ifndef __check_hpp
#define __check_hpp

#include <iostream>
#include <vector>
using std::vector;
using std::ostream;
using std::cout;
#include <stdio.h>

vector<vector<char>> populate(vector<vector<char>> v);
ostream & print_board(ostream & os,vector<vector<char>> v);
void check(vector<vector<char>> v,char color);


#endif
/* __check_hpp */

