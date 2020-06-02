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
int main(){
    ifstream in_file("D://file_sort.txt");
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
    copy(text.begin(), text.end(), os);
    return 0;
}