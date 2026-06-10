#include<iostream>
using namespace std;
int main(){
    char str[100];
    int freq[256] = {0}; // Initialize frequency array to 0
    cout << "Enter a string: ";
    cin.getline(str, 100); // Read a line of input into str
    for(int i=0;str[i]!='\0';i++){
        freq[str[i]]++; // Increment the frequency of the character

    }
    for(int i=0;str[i]!='\0';i++){
        if(freq[str[i]]!=0){
            cout << str[i] << ": " << freq[str[i]] << endl;
            freq[str[i]] = 0; // Reset frequency to avoid duplicates
        }
    }
    return 0;
}