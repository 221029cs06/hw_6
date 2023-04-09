using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

   
    cin >> r;

  
    cin >> c;

    cout<< endl;

    
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout  << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

  
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    cout << endl  << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
