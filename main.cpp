#include <iostream>
#include <set>
using namespace std;

void print(set<int> s){
    for (auto& x : s) cout << x << " " << endl;
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

} 