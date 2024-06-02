import java.util.Arrays;
class Stringreversal {
    public static void main(String[] args) {
        int[] array = {1,2,2,3,4};
        reverse(array);
        System.out.println(Arrays.toString(array));
    }
    static void reverse(int[] array) {
        int start = 0;
        int end = array.length-1;
        while(start<end) {
            swap(array, start, end);
            start++;
            end--;
        }
    }
    static void swap(int[] arr, int index1, int index2) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}
