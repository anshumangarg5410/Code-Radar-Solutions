#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cout << "Enter the number of elements in your array: "; cin >> a; cout << endl;
    vector<int>myvector;
    for(int i =0; i<a; i++){
        int temp; cin >> temp;
        myvector.push_back(temp);
    }
    vector<int>freqvector = {0,0};
    for(int i =0; i<a; i++){
        int count = 1;
        for (int j =i+1; j<a; j++){
            if (myvector[i] == myvector[j]) {
                count++;
            }
        }
        if (count > freqvector[1]) {
        freqvector[0] = myvector[i];
        freqvector[1] = count;
        }
    }
    cout << freqvector[0];
}