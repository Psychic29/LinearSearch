class linear {
    public static int search(int arr[], int x)
    {
        int N = arr.length;
        for (int i = 0; i < N; i++) {
            if (arr[i] == x)
                return i;
        }
        return -1;
    }

    public static void main(String args[])
    {
        int arr[] = { 2, 3, 4, 10, 40 };
        int x = 3;
        System.out.print("[*] The elements of the array are: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        System.out.println("[*] The element to be searched is: " + x);
        int result = search(arr, x);
        if (result == -1)
            System.out.print(
                "[!] Element is not present in array\n");
        else
            System.out.print("[+] Element is present at index "
                             + result + ".\n");
    }
}
