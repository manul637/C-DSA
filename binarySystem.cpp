#include<iostream>
using namespace std;


//---------------------------------------DECIMAL TO BINARY ----------------------------------------------


// int decToBinary(int decNum ){
//     int ans = 0 , pow = 1;

//     while(decNum >0){
//       int rem = decNum%2;
//       decNum/=2;

//       ans += (rem*pow);
//       pow *= 10;

// }
// return ans;
// }

//--------------------------------------------------BINARY TO DECIMAL---------------------------------

int binaryToDec(int biNum){
    int ans =0, pow=1;
    
    while(biNum >0){
        int rem = biNum%10;
        ans += rem*pow;
        
        
        biNum /10;
        pow *= 2;

    }
    return ans;
}






int main(){

    // int n = 34;
    // cout << decToBinary(n) << endl;


    int n = 100010;
     cout << binaryToDec(n ) << endl;


    return 0;
}
