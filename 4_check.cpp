//
//  4_check.cpp
//  
//
//  Created by KSUA on 11/15/17.
//

#include "4_check.hpp"
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <iomanip>
using std::ostream;
using std::endl;
using std::cout;
using std::setw;

vector<vector<char>> populate(vector<vector<char>> v)
{
    vector<char> list = {'e','y','r'};
    srand (time(NULL));
    for(auto i=0u;i<6;++i)
    {
        for(auto j=0u;j<7;++j)
        {
            v[i][j] = list[rand()%2+1];
        }
    }
    return v;
}

ostream & print_board(ostream & os,vector<vector<char>> v)
{
    for(auto i=0u;i<6;++i)
    {
        for(auto j=0u;j<7;++j)
        {
            os << setw(2) <<v[i][j];
        }
        os << endl;
    }
    return os;
}
void check(vector<vector<char>> v,char color)
{
    int sum4 = 0;
    //horizontal check
    for(auto i=0u;i<6;++i)
    {
        for(auto j=0u;j<7;++j)
        {
            if(v[i][j]==color)
            {
                ++sum4;
            }
            else
            {
                sum4=0;
            }
            if(sum4==4)
                cout << "there is a connect 4 vertically at (" << i << "," << j << ")" << endl;
        }
        sum4=0;
    }
    cout << "There is no horizontal connect 4" << endl;
    //vertical check
    //loop throw columns
    for(auto i=0u;i<7;++i)
    {
        //loop threw rows
        for(auto j=0u;j<6;++j)
        {
            //check if index matches color
            if(v[j][i]==color)
            {
                ++sum4;
            }
            else
            {
                sum4=0;
            }
            if(sum4==4)
                cout << "there is a connect 4 vertically at (" << j << "," << i << ")" << endl;
        }
        sum4=0;
    }
    cout << "There is no vertical connect 4" << endl;
    
    //positive diagonal
    for(auto i = 0u;i<6;++i)
    {
        for(auto j = 0u;j<7;++j)
        {
            for(auto k = 0u;k<6;++k)
            {
                if(((j+k)>7) ||((i-k)<0))
                    cout << "I am breaking the boundary" << endl;
                    sum4=0;
                    break;
                if(v[i-k][j+k]==color)
                {
                    ++sum4;
                }
                else
                {
                    sum4 = 0;
                }
                if(sum4==4)
                    cout << "there is a connect 4 diagonally at (" << j << "," << i << ")" << endl;
            }
            
        }
    }
}
//    //Horizontal right check
//    for(auto h=0u;h<4;++h)
//    {
//        if(v[i][j+h] == color)
//        {
//            ++sum4;
//            if(sum4==4)
//            {
//                return 1;
//            }
//        }
//        else{
//            break;
//        }
//    }
//    //Horizontal left check
//    for(auto h=0u;h<4;++h)
//    {
//        if(v[i][j-h] == color)
//        {
//            ++sum4;
//            if(sum4==4)
//            {
//                return 1;
//            }
//        }
//        else{
//            break;
//        }
//    }
//
//
//}
//}
//}
//bool check(istream & is)
//{
//}

