void reverseArray(vector<int> &arr , int m)
{
    int first=m+1;
    int last=arr.size()-1;
    while(first<last){
        swap(arr[first++],arr[last--]);
    }

}
