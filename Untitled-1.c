#include <stdio.h>



    int search(int nums[], int size, int target) {
        int left = 0;
        int right = size - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else if(nums[mid] > target) {
                right = mid - 1;
            }
            


        }
        return -1;
    }


    int main() {
        int nums[5]; 
        int target;
        //1.输入前五个有序数组
        for(int i=0;i<5;i++){
            if( scanf("%d",&nums[i])!=1){
                return 0;
            };
        }
        //2.输入要查找的目标
        if(scanf("%d",&target)!=1){
            return 0;
        }
        //3.调用函数得出结果
        int result = search(nums,5,target);
        printf("%d\n",result);

        return 0;
    }




