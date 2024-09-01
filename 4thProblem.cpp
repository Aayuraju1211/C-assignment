//Question
//WAP for finding the volume of the cylinder by taking radius and height as input.

//Solution

#include<iostream>
using namespace std;
int main(){
    int r,h;
    cin>>r>>h;
    float volume = 4/3*3.14*r*r*h;
    cout<<"Volume of the given cylinder is: "<<volume;
}