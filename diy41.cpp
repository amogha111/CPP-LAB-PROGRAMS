
#include <iostream>
using namespace std;

class Matrix
{
    private:
        int m, n;
        int **a;

    public:
        // Constructor
        Matrix(int rows, int cols)
        {
            m = rows;
            n = cols;

            a = new int*[m];

            for (int i = 0; i < m; i++)
                a[i] = new int[n];
        }

        // Deep copy constructor
        Matrix(const Matrix &obj)
        {
            m = obj.m;
            n = obj.n;

            a = new int*[m];

            for (int i = 0; i < m; i++)
            {
                a[i] = new int[n];

                for (int j = 0; j < n; j++)
                    a[i][j] = obj.a[i][j];
            }
        }

        void getData()
        {
            cout << "Enter matrix elements:" << endl;

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                    cin >> a[i][j];
            }
        }

        void display()
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << a[i][j] << " ";

                cout << endl;
            }
        }

        // Destructor
        ~Matrix()
        {
            for (int i = 0; i < m; i++)
                delete[] a[i];

            delete[] a;

            cout << "Memory released!" << endl;
        }
};

int main()
{
    Matrix m1(2, 2);

    m1.getData();

    cout << "Original Matrix:" << endl;
    m1.display();

    Matrix m2 = m1;

    cout << "Copied Matrix:" << endl;
    m2.display();

    return 0;
}
