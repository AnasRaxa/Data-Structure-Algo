#include <bits/stdc++.h>
using namespace std;

struct Array{

    int *arr;
    int size;
    int length;

    Array(int n){

        arr = new int[n];
        size  = n;
        length = 0;

    }

    void display(){

        for(int i = 0; i<length; i++){
            
            cout<<arr[i]<<" ";

        }


    }

    void add(int n){
        if(length<size){
            arr[length] = n;
            length++;
        }else{
            cout<<"No space empty\n";
        }
    }



    void insert(int index , int n){

        if(index<=length && index>=0){
            for(int i = length; i>index; i--){
            arr[i] = arr[i-1];
            }

            arr[index] = n;
            length++;

        }else{
            cout<<"Invalid index\n";
        }

    }
    void dlt(int index){

        if(index<length && index>=0){
            for(int i = index; i<length-1; i++){
                arr[i] = arr[i+1];
            }

            length--;

        }else{
            cout<<"Invalid index\n";
        }

    }

    void pop(){

        if(length>0){
            length--;
        }else{
            cout<<"Empty array\n";
        }
        

    }


    int srch1(int x){

        for(int i = 0; i<length; i++){
            if(arr[i] == x) return i;
        }

        return -1;

    }
    int srch2(int x){

        for(int i = 0; i<length; i++){ //transport method
            if(arr[i] == x){
                swap(arr[i],arr[i-1]);
                return i-1;
            }
        }

        return -1;

    }
    int srch3(int x){ // move to head

        for(int i = 0; i<length; i++){ //transport method
            if(arr[i] == x){
                swap(arr[i],arr[0]);
                return 0;
            }
        }

        return -1;

    }

    int bSearch(int x){

        int start = 0, end = length-1, mid;


        while(start<=end){

            mid = (start + end )/2;

            if(arr[mid] == x) return mid;
            else if(x>arr[mid]) start = mid + 1;
            else end = mid - 1;

        }

        return -1;

    }
    int bSearch2(int x,int start,int end){

        if(start>end) return -1;

        int mid = (start + end) / 2;


        

            if(arr[mid] == x) return mid;
            else if(x>arr[mid]) bSearch2(x,mid+1,end);
            else bSearch2(x,start,mid-1);

    }

    int get(int index){

        if(index>=0 && index<length){
            
            return arr[index];

        }
            cout<<"Invalid index\n";
            return -1;
        

    }

    void set(int index,int n){

        if(index>=0 && index<length){

            arr[index] = n;

        }else{
            cout<<"Invalid index\n";
        }

    }

    int max(){

        int mx = arr[0];

        for(int i = 1; i<length; i++){
            if(arr[i]>mx){
                mx = arr[i];
            }
        }

        return mx;

    }
    int min(){

        int mn = arr[0];

        for(int i = 1; i<length; i++){
            if(arr[i]<mn){
                mn = arr[i];
            }
        }

        return mn;

    }

    int sum(){

        int sum = 0;

        for(int i = 0; i<length; i++){
            sum+=arr[i];
        }

        return sum;

    }
    int avg(){

        

        return sum()/length;

    }


    void reverse(){

        int start = 0, end = length-1;

        while(start<end){

            swap(arr[start],arr[end]);
            start++;
            end--;

        }


    }

    void leftShift(){

        for(int i = 0; i<length-1; i++){

            arr[i] = arr[i+1];

        }
        length--;


    }
    void leftRotate(){

        int temp = arr[0];

        for(int i = 0; i<length-1; i++){

            arr[i] = arr[i+1];

        }

        arr[length-1] = temp;

    }

    void rightShift(){

        for(int i = length-1; i>0; i--){


            arr[i] = arr[i-1];

        }

        length--;


    }
    void rightRotate(){

        int temp = arr[length-1];

        for(int i = length-1; i>0; i--){


            arr[i] = arr[i-1];

        }

        arr[0] = temp;


    }


    void insertSorted(int x){

        
        int i = length - 1;

        while(i>=0 &&arr[i]>x){

            arr[i+1] = arr[i];
            i--;

        }

        arr[i+1] = x;
        length++;

    }

    bool isSorted(){

        for(int i = 0; i<length-1; i++){

            if(arr[i]>arr[i+1]) return false;

        }

        return true;


    }

    void negPosArrange(){

        int start = 0 , end = length - 1;

        while(start < end){

            while(arr[start] < 0) start++;
            while(arr[end] > 0) end--;

            if(start<end) swap(arr[start],arr[end]);

        }


    }

    Array merge(Array& a,Array& b){

        Array temp(50);

        int i = 0, j = 0, k = 0;

        while(i<a.length && j<b.length){

            if(a.arr[i] < b.arr[j]){
                temp.arr[k++] = a.arr[i++];
            }else{
                temp.arr[k++] = b.arr[j++];
            }

        }

        for(;i<a.length; i++){
            temp.arr[k++] = a.arr[i];
        }
        for(;j<b.length; j++){
            temp.arr[k++] = b.arr[j];
        }

        temp.length = a.length+b.length;
        return temp;

    }
    Array unions(Array& a,Array& b){

        Array temp(50);

        int i = 0, j = 0, k = 0;

        while(i<a.length && j<b.length){

            if(a.arr[i] < b.arr[j]){
                temp.arr[k++] = a.arr[i++];
            }else if(b.arr[j]<a.arr[i]){
                temp.arr[k++] = b.arr[j++];
            }else{
                temp.arr[k++] = a.arr[i++];
                j++;
            }

        }

        for(;i<a.length; i++){
            temp.arr[k++] = a.arr[i];
        }
        for(;j<b.length; j++){
            temp.arr[k++] = b.arr[j];
        }

        temp.length = k;
        return temp;

    }
    Array intersection(Array& a,Array& b){

        Array temp(50);

        int i = 0, j = 0, k = 0;

        while(i<a.length && j<b.length){

            if(a.arr[i] < b.arr[j]){
                i++;
            }else if(b.arr[j]<a.arr[i]){
                j++;
            }else{
                temp.arr[k++] = a.arr[i++];
                j++;
            }

        }

        

        temp.length = k;
        return temp;

    }

    



    Array diffrenec(Array& a,Array& b){

        Array temp(50);

        int i = 0, j = 0, k = 0;

        while(i<a.length && j<b.length){

            if(a.arr[i] < b.arr[j]){
                temp.arr[k++] = a.arr[i++];
            }else if(b.arr[j]<a.arr[i]){
                j++;
            }else{
                i++;
                j++;
            }

        }

        for(;i<a.length; i++){
            temp.arr[k++] = a.arr[i];
        }
        

        temp.length = k;
        return temp;

    }






};


int main(){

    
    Array a(20);

    for(int i = 0; i<6; i++){
        a.add(i);
    }
    
    a.reverse();
    a.display();
    



    return 0;
}