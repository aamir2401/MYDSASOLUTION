 public:
    void insert(int arr[], int i)
    {
        //code here
         int key = arr[i]; // Element to be inserted
    int j = i - 1;
    
    // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
         for (int i = 1; i < n; i++) {
        insert(arr, i); // Insert element at index 'i' into its correct position
    }
    }