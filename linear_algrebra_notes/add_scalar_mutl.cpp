//Addition and scalar multiplcation
#include <iostream>

//Initialize Matrix A and B in global scope with 2 rows and 3 columns
int matrix_A[2][3] = {{1,2,4},{5,3,2}};
int matrix_B[2][3] = {{1,3,4},{1,1,1}};
int rows = 2, columns = 3;

//function to print matrix A and B
void print_matrix()
{
    //print matrix A
    std::cout << "matrix A = \n" << std::endl;
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            std::cout << "\t" << matrix_A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //Print matrix B
    std::cout << "\nmatrix B = \n" << std::endl;
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            std::cout << "\t" << matrix_B[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
//Add Matrix A to B and print result to see how element-wise additon works
void add_matrices()
{
    int result_matrix[2][3];
    std::cout << "\nmatrix A + matrix B = \n" << std::endl;
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            result_matrix[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }
    //print results
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            std::cout << "\t" << result_matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

//subract Matrix A and B to see how element-wise subraction works
void sub_matrices()
{
    int result_matrix[2][3];
    std::cout << "\nmatrix A - matrix B = \n" << std::endl;
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            result_matrix[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }
    //print results
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            std::cout << "\t" << result_matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
//See how scalar multiplication works
void scalar_multiplication()
{
    //declare a constant integer to multiply the matrix by
    const int s = 2;
    int result_matrix[2][3];

    std::cout << "\nmatrix A * 2 = \n" << std::endl;
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            result_matrix[i][j] = matrix_A[i][j] * s;
        }
    }
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            std::cout << "\t" <<result_matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

}
//see how scalar division works
void scalar_division()
{
    //declare a constant integer to divide the matrix by
    const float s = 2;
    float result_matrix[2][3];

    std::cout << "\nmatrix A / 2 = \n" << std::endl;
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            result_matrix[i][j] = matrix_A[i][j] / s;
        }
    }
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            std::cout << "\t" <<result_matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

//what happens if we add a matix + scalar?
void add_scalar()
{
    const int s = 2;
    int result_matrix[2][3];

    std::cout << "\nmatrix A + 2 = \n" << std::endl;
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            result_matrix[i][j] = matrix_A[i][j] + s;
        }
    }
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            std::cout << "\t" << result_matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

int main()
{
    print_matrix();
    add_matrices();
    sub_matrices();
    scalar_multiplication();
    scalar_division();
    add_scalar();
    return 0;
}