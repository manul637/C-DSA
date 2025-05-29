#include<iostream>
using namespace std;

// int sumN(int  n){                                            //FUNCTION 1
//     int sum = 0;

//     for (int i =1 ; i <=n ; i++){
//         sum = sum+i;
//     }
//     return sum;
// }


// int factorialN(int n){
//     int fact = 1;                                               //FUNCTION 2

//     for(int i = 1 ; i<=n ;i++){
//         fact = fact*i;
//     }
//     return fact;
// }


// int changeX(int x){
//     x = 2*x;                                                     //  FUNCTION 3
//     cout << "x=" << x << endl;

//     return 0;
// }

// ------------------------------------------------SUM OF DIGIT OF NUMBERS----------------------------------

// int sum_of_digit(int n){
//     int digitSum = 0;

//     while(n>0){                                                            //FUNCTION 4
//         int lastDigit = n%10;
//         n/=10;

//         digitSum += lastDigit;
//     }
//     return digitSum;
// }

//--------------------------------------------------------nCr--------------------------------------

// int nCr(int n , int r){

//    int  nCr = factorialN(n)/(factorialN(r)*factorialN(n-r));          //FUNCTION 5
//    return nCr;
// }

//-------------------------------------prime number or not --------------------------------------


bool isPrime(int number) {
    if (number <2) return false;
    if (number == 2) return true;


    for (int i = 2; i * i <= number; i ++) {
        if (number % i == 0)
            return false;
    }
    return true;
}

//-------------------------------PRITN PRIME NO FROM 2 TO N ----------------------------------------

void printPrime(int n){
    for(int i = 2 ; i<=n ; i++){
        if(isPrime(i)){
            cout << i <<" ";
    }

    }
    cout << endl;
}



int main(){

    // cout << sumN(5) <<endl;                                  //Call function 1

    //  cout << factorialN(5) << endl;                                //call function 2

    // int x = 5;                                                  // call function 3
    // changeX(x);
    // cout << " x =" << x <<endl;
                                                                    

    //    int n =734935;                                              // call function 4
    //    cout << sum_of_digit(n) << endl;

    // int n=10;                                                       
    // int r=7;                                                       //call function 5
    // cout << nCr(n,r)<< endl;

      
    // int num =67;

    // if (isPrime(num))
    //     cout << num << " is a prime number.\n";
    // else                                                              // call function 6
    //     cout << num << " is not a prime number.\n";

    
    


    int n= 100 ;

    printPrime(n);





    return 0;
}