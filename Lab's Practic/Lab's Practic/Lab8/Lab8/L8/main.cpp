#include <iostream>
#include <algorithm>
#include <functional>
struct tovar {
    char name[20];
    double price;
};

using namespace std;
int main(int argc, const char * argv[]) {
    
    
    //8.1
    int x = 4;
    int y = 6;
    cout << x << ", " << y << endl;
    
//    auto numx = [] (int *x) {return x;}(x);
//    auto numy = [] (int y) {return y;}(y);
//    cout << numx << ", " << numy << endl;
    auto number = [] (int *x, int *y) {
        cout << "Lambda started..." << endl;
        int a;
        a = *x;
        *x = *y;
        *y = a;
    };
    number(&x, &y);
    cout << "x = " << x << "\ny = " << y << endl;
    
    //8.2
    auto lambda = [&](){
        cout << "Lambda started..." << endl;

        int a;
        a = x;
        x = y;
        y = a;
        x++;
        y++;
    };
    lambda();
    cout << "x = " << x << "/ny = " << y << endl;
    
    //8.3
//    cout << "Incrementing: " << endl;
//    auto num3 = [&x] { return x; };
//    x++;
//    auto num4 = [&y] { return y; };
//    y++;
//    cout << num3() << ", " << num4() << endl << endl;
    
    //8.4
    
    int mas [] {3, 41, 93, 4, 31, 32, 11, 95, 2, 23};
    sort(begin(mas), end(mas), [](int a, int b) {return a < b; });
    cout << "Sorting in increasing order: " << endl;
    for (auto item : mas) {
        cout << item << " ";
    }
    cout << endl << endl;
    
    //8.5
    auto comp = [] (int w, int t) {return w > t; };
    sort(begin(mas), end(mas), comp);
    cout << "Sorting in decreasing order: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << mas[i] << " ";
    }
    cout << endl << endl;
    
    //8.6
    tovar arr[10] = {};
    for (int i = 0; i<10; i++) {
        cout << "Enter product name" << endl;
        cin >> arr[i].name;
        cout << "Enter price" << endl;
        cin >> arr[i].price;
    }
    sort(begin(arr), end(arr), [](const tovar& a, const tovar& b) {
        return a.price < b.price;
    });    cout << "Name\t\t Price" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i].name << "\t\t\t" << arr[i].price << endl;
    }
    
    
    return 0;
}
