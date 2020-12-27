#include <matrix/Macierz.hpp>
#include <time.h>
#include <fstream>

Matrix::Matrix() {}

Matrix::Matrix(int row, int col)
{
    rows_ = row;
    cols_ = col;
    matrix_ = new double *[row];
    for(int j = 0; j < row; j++)
    {
        matrix_[j] = new double[col];
        for(int i = 0; i < col; i++)  matrix_[j][i] = 0;
    }    
}

Matrix::Matrix(int row)
{
    rows_ = row;
    cols_ = row;
    matrix_ = new double *[row];
    for(int j = 0; j < row; j++)
    {
        matrix_[j] = new double[row];
        for(int i = 0; i < row; i++)  matrix_[j][i] = 0;
    }
}

Matrix::Matrix(std::string filename, std::string path) 
{
    std::fstream my_file;
    my_file.open(path + filename, std::ios::in);
    if (my_file.good() == false) std::cout << "Blad pliku"<<std::endl;
    else
    {
        my_file >> this->cols_;
        my_file >> this->rows_;
        matrix_ = new double *[rows_];
        for(int j = 0; j < rows_; j++)
        {
            matrix_[j] = new double[cols_];
            for(int i = 0; i < cols_; i++)  my_file >> matrix_[j][i];
        }
        
    }
    my_file.close();
}

Matrix::~Matrix()
{
    for (int j = 0; j < rows_; j++) delete[] matrix_[j];
    delete[] matrix_;
    // std::cout << "PAPA";
}

Matrix Matrix::add(const Matrix &matrix_to_add) const
{
    if(this->cols_ == matrix_to_add.cols_ && this->rows_ == matrix_to_add.rows_)
        {
        Matrix new_matrix(rows_, cols_);
        for(int i = 0; i < rows_; i++)
            for(int j = 0; j < cols_; j++) new_matrix.matrix_[i][j] = matrix_[i][j] + matrix_to_add.matrix_[i][j];
        return new_matrix;
        }
    else 
    {
        std::cout << "\nMacierze maja zle wymiary\n"<<std::endl;
        return *this;
    } 
}

Matrix Matrix::substract(const Matrix &matrix_to_sub) const
{
    if(this->cols() == matrix_to_sub.cols() && this->rows() == matrix_to_sub.rows())
    {
        Matrix new_matrix(rows_, cols_);
        for(int i = 0; i < rows_; i++)
            for(int j = 0; j < cols_; j++)  new_matrix.matrix_[i][j] = matrix_[i][j] - matrix_to_sub.matrix_[i][j];
        return new_matrix;
    }
    else 
    {
        std::cout << "\nMacierze maja zle wymiary\n" << std::endl;
        return *this;
    }
}

Matrix Matrix::multiply(const Matrix &matrix_to_mult) const
{
    
    Matrix new_matrix(rows_, matrix_to_mult.cols_);
    for(int i = 0; i < rows_; i++)
            for(int j = 0; j < matrix_to_mult.cols_; j++)
            {
                double suma = 0;
                for(int k = 0; k < cols_; k++)
                suma += matrix_[i][k] * matrix_to_mult.matrix_[k][j];
                new_matrix.matrix_[i][j] = suma;
            }
        return new_matrix;
 
}

void Matrix::store(std::string filename, std::string path) const
{
    std::fstream my_file;
        my_file.open(path + filename, std::ios::out);
        if (my_file.good() == false)
        {
            std::cout << "\n Plik ERROR \n";
            exit(0);
        }
        else
        {
            my_file << cols_ << " " << rows_ << "\n";
            for (int j = 0; j < rows_; j++)
            {
                for (int i = 0; i < cols_; i++) my_file << matrix_[j][i] << " ";
                my_file << "\n";
            }
        }
        my_file.close();
}

void Matrix::print() const
{
    for(int i = 0; i < rows_; i++)
        {
            for(int j = 0; j < cols_; j++) std::cout << matrix_[i][j]<<", ";
            std::cout << std::endl;
        }
        std::cout << std::endl;
}

void Matrix::random()
{
    srand(time(NULL));
    for(int i = 0; i < rows_; i++)
        for(int j = 0; j < cols_; j++)  matrix_[i][j] += rand()%50;
}

Matrix Matrix::operator+(const Matrix &Matrix_to_add) const
{
    Matrix new_matrix(this->rows_, this->cols_);
    for(int i = 0; i < this->rows_; i++)
        for(int j = 0; j < this->cols_; j++) new_matrix.matrix_[i][j] = matrix_[i][j] + Matrix_to_add.matrix_[i][j];
    return new_matrix;
}

Matrix Matrix::operator-(const Matrix &matrix_to_subb) const
{
    if(this->cols() == matrix_to_subb.cols() && this->rows() == matrix_to_subb.rows())
    {
        Matrix new_matrix(rows_, cols_);
        for(int i = 0; i < rows_; i++)
            for(int j = 0; j < cols_; j++)  new_matrix.matrix_[i][j] = matrix_[i][j] - matrix_to_subb.matrix_[i][j];
        return new_matrix;
    }
    else return *this;
    
}

Matrix Matrix::operator*(const Matrix &matrix_to_mult) const
{
    Matrix new_matrix(rows_, matrix_to_mult.cols_);
    for(int i = 0; i < rows_; i++)
            for(int j = 0; j < matrix_to_mult.cols_; j++)
            {
                double suma = 0;
                for(int k = 0; k < cols_; k++)
                suma += matrix_[i][k] * matrix_to_mult.matrix_[k][j];
                new_matrix.matrix_[i][j] = suma;
            }
        return new_matrix;
}

bool Matrix::operator==(const Matrix& matrix_to_comp) const
{
    bool comp = true;
    if(this->rows_ == matrix_to_comp.rows_ && this->cols_ == matrix_to_comp.cols_)
    {
        for(int i = 0; i < this->rows_; i++)
        {
            if(comp)
            for(int j = 0; j < this->cols_; j++)
            {
                if (matrix_[i][j] != matrix_to_comp.matrix_[i][j])
                {
                    comp = false;
                    break;
                }
            }
            else break;
        }
    }
    else comp = false;
    return comp;
}

void operator<<(std::ostream& os, const Matrix& matrix_to_save)
{
    os << matrix_to_save.cols_<<" "<<matrix_to_save.rows_<<'\n';
    for(int j = 0; j < matrix_to_save.rows_; j++)
    {
        for (int i = 0; i < matrix_to_save.cols_; i++) os << matrix_to_save.matrix_[j][i] << " ";
        os << "\n";
    }
}
