void InsertionSort(vi &arr){

for(int i = 0; i < arr.size(); i++){ int j = i;
int key = arr[i];

while(j and arr[j - 1] > key) arr[j] = arr[j - 1], j--;
arr[j] = key;
}
}

int32_t main(){ FIO

vi arr = {3, 5, 1, 7, 8, 4};

vi arr = {8}; InsertionSort(arr);
 

for(auto p : arr) cout << p << space; cout << endl;

return 0;
}
