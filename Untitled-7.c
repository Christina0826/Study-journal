#include <stdio.h>
int main(){
    int arr[10];//先生成一个大一些的数组 
    int n =5;//确定数组的元素
    int to_delete,to_insert;
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }//输入数组的元素

    scanf("%d",&to_delete);//输入要删除的元素
    int delete_index=-1;
    //// 寻找第一个和 to_delete 相同的数字
    for(int i=0;i<n;i++){
        if(to_delete==arr[i]){
            delete_index=i;
            break;
        }
    }
    //覆盖删除
    if (delete_index != -1){
    for(int i= delete_index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    }
//输入要增加的数字
scanf("%d", &to_insert);
    arr[n] = to_insert; // 直接放到当前数组的最后面
    n++;                // 新增了一个数，总数加 1
    //冒泡排序
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
           
            if(arr[j]>arr[j+1]){
                 int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //打印结果
    

for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }



    return 0;
}
