//
// Created by logan on 2020/5/28.
//

#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

template<int len, int beg_pos>
class num_sequence {
public:
    virtual ~num_sequence() {};

    int elem(int pos) const;

    const char *what_am_i() const;

    static int max_elems() { return _max_elems; }

    ostream &print(ostream &os = cout) const;

protected:
    virtual void gen_elems(int pos) const = 0;//纯虚函数

    bool check_integrity(int pos, int size) const;

    num_sequence(vector<int> *pe) : _pelems(pe) {
        printf("len = %d\n", len);
        printf("beg_pos = %d\n", beg_pos);
        printf("This is num_sequence::constructor\n");
    };
    static const int _max_elems = 1024;
    vector<int> *_pelems;
};

//output运算符的function template定义
template<int len, int beg_pos>
ostream &operator<<(ostream &os, const num_sequence<len, beg_pos> &ns) {
    return ns.print(os);
}

//num_sequence的member function
template<int len, int beg_pos>
int num_sequence<len, beg_pos>::
elem(int pos) const {
    if (!check_integrity(pos, _pelems->size())) {
        return 0;
    }
    return (*_pelems)[pos - 1];
}

template<int length, int beg_pos>
const char *num_sequence<length, beg_pos>::
what_am_i() const {
    return typeid(*this).name();
}

template<int length, int beg_pos>
bool num_sequence<length, beg_pos>::
check_integrity(int pos, int size) const {
    printf("This is num_sequence:check_integrity\n");
    printf("size = %d\n", size);
    if (pos <= 0 || pos > max_elems()) {
        cerr << "!!invalid position: " << pos
             << " Cannot honor request\n";
        return false;
    }
    if (pos > size) {
        gen_elems(pos);
        return true;
    }
}

template<int length, int beg_pos>
ostream &num_sequence<length, beg_pos>::
print(ostream &os) const {
    printf("This is num_sequence:print\n");
    int elem_pos = beg_pos - 1;
    int end_pos = elem_pos + length;
    if (!check_integrity(end_pos, _pelems->size())) {
        return os;
    }
    os << "( " << beg_pos << " , " << length << " ) ";
    while (elem_pos < end_pos) {
        os << (*_pelems)[elem_pos++] << ' ';
    }
    return os;
}

//带有默认值
template<int length, int beg_pos = 1>
class Fibonacci : public num_sequence<length, beg_pos> {
public:
    Fibonacci() : num_sequence<length, beg_pos>(&_elems) {
        printf("This is Fibonacci::constructor\n");
    }

protected:
    virtual void gen_elems(int pos) const;

    static vector<int> _elems;
};

//声明静态数据成员模板
template<int length, int beg_pos>
vector<int> Fibonacci<length, beg_pos>::_elems;

//成员函数
template<int length, int beg_pos>
void Fibonacci<length, beg_pos>::gen_elems(int pos) const {
    printf("This is Fibonacci::gen_elenms\n");
    if (pos <= 0 || pos > Fibonacci<length, beg_pos>::max_elems()) {
        return;
    }
    if (_elems.empty()) {
        _elems.push_back(1);
        _elems.push_back(1);
    }
    if (_elems.size() <= pos) {
        int ix = _elems.size();
        int n_2 = _elems[ix - 2];
        int n_1 = _elems[ix - 1];
        int elem;
        for (; ix < pos; ++ix) {
            elem = n_2 + n_1;
            _elems.push_back(elem);
            n_2 = n_1;
            n_1 = elem;
        }
    }

}

class printIt {
public:
    printIt(ostream &os) : _os(os) {}

    template<typename elemType>
    void print(const elemType &elem, char delimiter = '\n') {
        _os << elem << delimiter;
    }

private:
    ostream &_os;
};

int main() {
    printIt to_standard_out(cout);
    to_standard_out.print("hello");
    to_standard_out.print(1024);
    Fibonacci<8> fib1;//相当于Fibonacci<8,1>
    Fibonacci<8, 8> fib2;
    Fibonacci<12, 8> fib3;
    cout << "fib1: " << fib1 << '\n'
         << "fib2: " << fib2 << '\n'
         << "fib3: " << fib3 << endl;

/*    ifstream in_file("D://file_sort.txt");
    ofstream out_file("D://input_file.txt");
    if (!in_file || !out_file) {
        cerr << "!! unable to open file\n";
        return -1;
    }
    istream_iterator<string> is(in_file);
    istream_iterator<string> eof;
    vector<string> text;
    copy(is, eof, back_inserter(text));
    sort(text.begin(), text.end());
//    ostream_iterator<string> os(out_file, " ");
    ostream_iterator<string> os(cout, " ");
    copy(text.begin(), text.end(), os);*/
    return 0;
}