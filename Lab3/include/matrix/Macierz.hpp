#include <string>
#include <iostream>
class Matrix
{
    int rows_;
    int cols_;
    double** matrix_;
    
    public:

    Matrix();
    Matrix(int p_row, int p_col);
    Matrix(int s_row);
    Matrix(std::string filename, std::string path);
    ~Matrix();
    void set(int row, int col, double value);
    double get(int row, int col) const;
    int cols() const {return cols_;}
    int rows() const {return rows_;}
    Matrix add(const Matrix &matrix_to_add) const;
    Matrix substract(const Matrix &matrix_to_sub) const; 
    Matrix multiply(const Matrix &matrix_to_mult) const; 
    void store(std::string filename, std::string path) const;
    void print() const;
    void random();
    Matrix operator+(const Matrix &matrix_to_add) const;
    Matrix operator-(const Matrix &matrix_to_sub) const;
    Matrix operator*(const Matrix &matrix_to_mul) const;
    bool operator==(const Matrix &matrix_to_comp) const;
    friend void operator<<(std::ostream& os, const Matrix &matrix_to_save);
    const double* operator[](int row) const {return matrix_[row];}
};
