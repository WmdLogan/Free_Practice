//
// Created by logan on 2020/6/5.
//

#ifndef LEETCODE_LIBMAT_H
#define LEETCODE_LIBMAT_H
#include <string>
class LibMat{
public:
    virtual ~LibMat();

    LibMat();

    virtual void print() const;
};

class Book: public LibMat {
public:
    Book(const std::string &title, const std::string &author);

    virtual ~Book();

    virtual void print() const;

    const std::string &title() const;
    const std::string &author() const;

protected:
    std::string _title;
    std::string _author;
};

class AudioBook: public Book {
public:
    AudioBook(const std::string &title, const std::string &author, const std::string &narrator);

    ~AudioBook();

    virtual void print() const;

    const std::string narrator() const;
protected:
    std::string _narrator;
};
#endif //LEETCODE_LIBMAT_H
