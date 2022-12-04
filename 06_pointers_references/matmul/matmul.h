#include <iostream>


using namespace std;


int** arr_create(int rows, int cols) 
{
    int** arr = new int* [rows];
    for (int k = 0; k < rows; k++)
    {
        arr[k] = new int[cols];
    }

    return arr;
}


void fill_array(int** arr, int rows, int cols) 
{
    for (int k = 0; k < rows; k++) 
    {
        cout << "row: " << k + 1 << endl;
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[k][j];
        }
    }
    cout << endl;
}


void print_array(int** arr, int rows, int cols) 
{
    for (int k = 0; k < rows; k++) 
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[k][j] << " ";
        }
        cout << endl << endl;
    }
}


void matmul(int** a, int r_a, int c_a, int** b, int r_b, int c_b, int** c) 
{
    for (int i = 0; i < r_a; i++) 
    {
        for (int j = 0; j < c_b; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < r_b; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}


void delete_arr(int** a, int m) 
{
    for (int i = 0; i < m; i++)
    {
        delete[] a[i];
    }
}


bool mateq(int** a, int m_a, int n_a, int** b, int m_b, int n_b)
{
    bool f = true;
    if (m_a != m_b || n_a != n_b)
        return f = false;
    else
    {
        for (int i = 0; i < m_a; i++)
        {
            for (int j = 0; j < n_a; j++)
            {
                if (a[i][j] != b[i][j])
                    return f = false;
            }
        }

        return f = true;
    }
}

