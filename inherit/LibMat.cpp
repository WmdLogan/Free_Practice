//
// Created by logan on 2020/6/5.
//

#include "LibMat.h"
#include <iostream>

using namespace std;
LibMat::LibMat() { cout << "LibMat::LibMat() default constructor!\n"; }

LibMat::~LibMat() {cout << "LibMat::~LibMat() default destructor!\n"; }

void LibMat::print() const {cout << "LibMat::print() --I am a LibMat object!\n"; }

void print(const LibMat &mat){
    cout << "in global print(): about to print mat.print()\n";
    mat.print();
}

Book::Book(const string &title, const string &author) : _title(title), _author(author) {
    cout << "Book::Book(" << _title << ", " << _author << ") constructor\n";
}

Book::~Book() {cout << "Book::~Book() default destructor!\n";}

void Book::print() const {
    cout << "Book::print() -- I am a Book object!\n"
         << "My title is: " << _title << '\n'
         << "My author is: " << _author << endl;
}

const std::string &Book::title() const {
    return _title;
}

const std::string &Book::author() const {
    return _author;
}


AudioBook::AudioBook(const string &title, const string &author, const string &narrator)
        : 0, _narrator(narrator) {
    cout << "AudioBook::AudioBook( " << _title
         << ", " << _author << ", " << _narrator << " ) constructor\n";
}

AudioBook::~AudioBook() {cout << "AudioBook::~AudioBook() default destructor!\n";}

void AudioBook::print() const {
    cout << "AudioBook::print() -- I am a AudioBook object!\n"
         << "My title is: " << _title << '\n'
         << "My author is: " << _author << '\n'
         << "My narrator is: " << _narrator << endl;
}

const std::string &AudioBook::narrator() const {
    return _narrator;
}
int main(){
/*    LibMat libmat;
    print(libmat);
    cout << endl;
    Book book("The Castle", "Franz Kafka");
    print(book);*/
//    LibMat *au = new AudioBook("Mason and Dixon", "Thomas Pynchon", "Edwin Leonard");
    AudioBook audioBook("Mason and Dixon", "Thomas Pynchon", "Edwin Leonard");
    print(audioBook);
    return 0;
}