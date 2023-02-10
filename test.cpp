#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

// cant remember how to mreate a makefile, but
// g++ -o test.exe test.cpp
// ./test.exe


int randindex(){

    
    int randindex = rand()%5;
    return randindex;
}


int main(){
    srand(248);


    float wins = 0 ;

for( int i = 1; i < 1001; i++ )
{
char test[6] = {'x','x','x','x','x'};
//  cout << i << endl;   
 

for( int j = 0; j != 3;  ){

    int index = randindex();
    // cout << "line 29\t" <<test << endl;
    
    if (test[index] == 'x')
    {
        // cout << "line 33\t" << (j) << index << endl;
        test[index] = static_cast<char>(48+j);

        
    }
    else
    {
         j--;
    }
    j++;}
// cout << test << endl;
    for( int k = 0; k != 3; k++ )
    {
        int index = randindex();
        if (test[index] != 'O')
        {
            test[index] = 'O';
        }
        else
        {
             k--;
        }
        // cout << "line 57\t" << test << endl;
    }

    
    
    for(int l = 0; l < 6; l++)
    {
        
        if (test[l] == 'x')
        {
            wins++;
        }
    }
    cout << "trial\t"<< i << "\t" << test << "\twins = \t" << wins<< "\tat a rate of\t" << wins/i << endl;

}

}