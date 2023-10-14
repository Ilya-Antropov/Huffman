#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

class Uzel {
    public:
            int key;
            char s;
            Uzel* left, * right;

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

class Hafman {
    Uzel* root;
    map<char, int> m;
    map<char, int> ::iterator ii;

    vector<bool> code;
    map<char, vector<bool> > buf;

    public:
    Hafman();
    ~Hafman();
};

Hafman::Hafman() {
    root = NULL;
}

Hafman::~Hafman() {
    delete root;
    root = NULL;
}


int main() {
    Hafman haf;
    return 0;
}
