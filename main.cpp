#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

void print(set<int> s){
    for (auto& x : s) cout << x << " " << endl;
    cout << "--------" << endl;
}
void print(unordered_set<float> s){
    for (auto& x : s) cout << x << " " << endl;
    cout << "--------" << endl;
}

int main() {
    set<int> si;
    si.insert(5);
    si.insert(2);
    si.insert(9);
    
    //iteratori
    set<int>::iterator iter;
    for(iter = si.begin(); iter != si.end(); ++iter){
        cout << *iter << endl;
    }

    cout << "--------" << endl;

    set<int>::const_iterator citer;
    for(citer = si.cbegin(); citer != si.cend(); ++citer){
        cout << *citer << endl;
    }

    cout << "--------" << endl;

    set<int>::reverse_iterator riter;
    for(riter = si.rbegin(); riter != si.rend(); ++riter){
        cout << *riter << endl;
    }

    cout << "--------" << endl;

    //erase()
    iter = si.find(5);
    if(iter != si.end()){
        //chiamo erase solo se trovo il valore
        si.erase(iter);
    }
    print(si);

    //unordered sets
    unordered_set<float> usf;
    usf.insert(22.5);
    usf.insert(1.9);
    usf.insert(9.99);
    usf.insert(22.5);
    print(usf);

    //multiset 
    //idem al set ma con duplicati
} 