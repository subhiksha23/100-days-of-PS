import java.util.Arrays;
class Rot{
static void rotateArr(int[]arr,int d){
int n=arr.length;
for(int i=0;i<d;i++){
int first=arr[0];
for(int j=0;j<n-1;j++)
{
arr[j]=arr[j+1]
}
arr[n-1]=first;
}
}
public static void main(String args[]){
int[]arr={1,2,3,4};
int d=3;
rotateArr(arr,d);
for(int i=0;i<arr.length;i++)
{
System.output.println(arr[i]+" ");
}
}
}
