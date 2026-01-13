template <typename T> 
void insertionSort(T d[], int N) {
    for (int i = 1; i < N; i++) {
        int j = i;
        
        while (j > 0 && d[j] > d[j - 1]) {
            swap(d[j], d[j - 1]);
            j--;
        }

        
        cout << "Pass " << i << ":";
        for (int k = 0; k < N; k++) cout << d[k] << " ";
        cout << endl;
    }
}