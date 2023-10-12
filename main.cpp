#include <iostream>
#include <fstream>

using namespace std;

class Uzel {
    public:
            int key;
            char s;
            Uzel* left, + right;

            Uzel() {
                left = NULL;
                right = NULL;
            }

            Uzel(Uzel* l, Uzel* r) {
                left = l;
                right = r;
                key = l->key + r->key;
            }

            ~Uzel() {
                while (left)
                    delete left;
                while (right)
                    delete right;
                left = NULL;
                right = NULL;
            }
};


int main() {

}
