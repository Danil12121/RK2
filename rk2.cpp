#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> substruct(vector<vector<int>> A,vector<vector<int>> B){
    unsigned int n, m;
    n = A.size();
    m = A[0].size();
    vector<vector<int>> C(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            C[i][j] = A[i][j] - B[i][j];
    return C;
}

int main() {
    cout << "Enter the size:" << endl;
    int n, m; cin >> n >> m;
    if (n <= 0 or m <= 0) {
        cout << "The size must be positive" << endl;
        return 1;
    }

    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(n, vector<int>(m));


    cout << "Enter the first matrix:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    cout << "Enter the second matrix:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> B[i][j];

    cout << "Result:" << endl;
    vector<vector<int>> C = substruct(A, B);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
