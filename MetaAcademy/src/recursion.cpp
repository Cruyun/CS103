/* 
 * TODO: put your own comments here. Also you should leave comments on
 * each of your methods.
 */

#include <math.h>
#include "recursion.h"
#include "map.h"
#include "vector.h"
#include "set.h"
#include "gwindow.h"
#include "gobjects.h"
#include "tokenscanner.h"
using namespace std;

int gcd(int a, int b) {
    if (a % b !=0) {
        cout << "gcd(" << a << "," << b << ") = gcd(" << b << "," << a % b << ")" <<endl;
        return gcd(b, a%b);
    }else{
        cout << "gcd(" << a << "," << b << ") = gcd(" << b <<", 0)"<<endl;
        cout << "gcd(" << b <<", 0)"<< "= " << b <<endl;
         return b;
    }
}

void serpinskii(GWindow &w, int leftX, int leftY, int size, int order) {
    cout << "[recursion serpinskii called]" << endl;
}

int floodFill(GBufferedImage& image, int x, int y, int newColor) {
    // your code here
    cout << "[recursion flood fill called]" << endl;
    return 0;
}

void personalCurriculum(Map<string, Vector<string>> & prereqMap,string goal) {
    // your code here
    cout << "[recursion personal curriculum called]" << endl;
}

string generate(Map<string, Vector<string> > & grammar, string symbol) {
    // your code here
    cout << "[recursion generate called]" << endl;
    return "";
}