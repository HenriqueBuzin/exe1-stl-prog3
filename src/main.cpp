#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class List {
    vector<int> _numbers;

    public:
        void add(int number){ _numbers.push_back(number); }
        vector<int> get_numbers(){ return _numbers; }
        int smaller(){ return *min_element(_numbers.begin(), _numbers.end()); }
        int larger(){ return *max_element(_numbers.begin(), _numbers.end()); }
        vector<int> ascending_order(){
            vector<int> _numbers_sort = _numbers;
            sort(_numbers_sort.begin(), _numbers_sort.end());
            return _numbers_sort;
        }
};


int main() {
    cout << "(-1 para)" << endl;

    List lista;
    int x = 0;
    do {
        cout << "Digite um numero inteiro: ";
        cin >> x;
        lista.add(x);
    }
    while (x != -1);

    vector<int> numbers;

    cout << "Lista na ordem que o usuario preencheu: ";
    numbers = lista.get_numbers();
    for (auto n = numbers.begin() ; n != numbers.end(); n++){
        cout << *n << " ";
    }

    cout << endl << "O menor numero e: ";
    cout << lista.smaller();

    cout << endl << "O maior numero e: ";
    cout << lista.larger();


    cout << endl << "Lista em ordem crescente: ";
    numbers = lista.ascending_order();
    for(auto n = numbers.begin() ; n != numbers.end(); n++){
        cout << *n << " ";
    }

    cout << endl << "Tchau!";

    return 0;
}
