#include <iostream>
using namespace std;
// class Adder{
//     public:
//         Adder(int x, int y): a(x), b(y), sum(0) {}
//         int add(){
//             sum = a + b;
//             return sum;
//         }
        

//     private:
//         int a;
//         int b; 
//         int sum; 
// };

// int main(){
//     Adder adder(3, 4);
//     cout << "Sum: " << adder.add() << endl;



//     return 0;
// }
class Adder{
    public:
        Adder(int i){//constructor(yapıcı metot)
            total = i; 
        }
        void addNum(int number){
            total += number;
        }
        int getTotal(){
            return total;
        }   


    private:
        int total;

};


int main(){
    Adder a(3);
    a.addNum(3);
    cout << "Total: " << a.getTotal() << endl;
   

    return 0;
}