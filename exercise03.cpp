#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct BOX 
{
    int hight;
    int length;
    int width;
} box1,box2;

int main() { 
 
    int totalVolume;
    cout << "Enter Box 1 Height : ";
    cin >> box1.hight;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.hight;
    cout << "Enter Box 2 Width : ";
    cin >> box2.width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1.hight,box1.width,box1.length )
             + volume(box2.hight,box2.width,box2.length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
    return height * width * length;
}