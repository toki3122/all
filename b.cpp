#include <iostream>
using namespace std;

class point {
private:
    int x;
    int y;

public:
    void display() {
        cout << "values: " << endl << x << endl << y << endl;
    }

    void setvalue(int a, int b) {
        x = a;
        y = b;
    }

    void swap(point &other) {
        int temp_x = x;
        int temp_y = y;
        x = other.x;
        y = other.y;
        other.x = temp_x;
        other.y = temp_y;
    }
};

int main() {
    point ob1, ob2;
    int n, m, n1, m1;
    cout << "1st data for ob1: ";
    cin >> n;
    cout << "2nd data for ob1: ";
    cin >> m;
    cout << "1st data for ob2: ";
    cin >> n1;
    cout << "2nd data for ob2: ";
    cin >> m1;
    ob1.setvalue(n, m);
    ob2.setvalue(n1, m1);

    cout << "Before swapping:" << endl;
    cout << "Ob1: ";
    ob1.display();
    cout << "Ob2: ";
    ob2.display();

    ob1.swap(ob2);

    cout << "After swapping:" << endl;
    cout << "Ob1: ";
    ob1.display();
    cout << "Ob2: ";
    ob2.display();

    return 0;
}

