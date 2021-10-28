//
//  main.cpp
//  2dimensional arrays(excercise 4)
//
//  Created by MARTIN on 28/10/2021.
//

#include <iostream>
#define COLUMN_SIZE 4

using namespace std;

//function to calculate the sum of elements
int sum(const int a[][COLUMN_SIZE],int rowSize)
{
    int Sum=0;
    //for loop to add up sum of 2 diamensional array elements
    for (int i=0;i<rowSize;i++)
    {
        for(int j=0;j<COLUMN_SIZE;j++){
            Sum=Sum+a[i][j];
        }
    }

    return Sum;//return sum

}//end of function

//main program
int main()
{
    //declaration of variables
   int rowSize=3;
   int Array[rowSize][COLUMN_SIZE];
   
    //prompt user to enter numbers
    cout<<"Enter 3 and 4 columns\n";
    for (int i = 0; i < rowSize; ++i)
    {
      for (int j = 0; j < COLUMN_SIZE; ++j)
        {
         cin>>Array[i][j];//user input
      }
      cout<<" ";
   }//end of for loop
   
    //outputs the sum to the screen
   cout<<sum(Array,rowSize);
   
    return 0;

}//end of main program
