

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    int i = 0;
    int j = numsSize-1;
    int k,l = -1, m=-1;;
    int* result = malloc(sizeof(int)*2);
    (* returnSize) = 2;
    result[0]=-1;
    result[1]=-1;
//     if (!numsSize) return result;
//     while (i<=j)
//     {
//         k = (i+j)/2;
//         if (nums[k] < target)
//             i = k+1;
//         else if (nums[k] > target)
//             j = k-1;
//         else
//         {
//             l = k;  // 3
//             m = k;
//             break;
//         }
//     }
//     if (l== -1)  return result;
    
//     if (nums[i] == target)
//         l= i;
//     else
//         while ((i+1)<l)
//         { 
//             k = (i+l)/2;
//             if (nums[k] == target)
//                 l=k;
//             else
//                 i=k;
//         } 
//     result[0] = l; 
               
//     if (nums[j] == target)
//         m = j;
//     else
//         while ((m+1)<j)
//         { 
//             k = (j+m)/2;
//             if (nums[k] == target)
//                 m=k;
//             else
//                 j=k;
//         } 
//     result[1] = m;    
    
        for ( i = 0; i < numsSize; i++){
        if (nums[i] == target && result[0] == -1 ){
            result[0] = i;
        }
        if (nums[i] == target && result[1] < i){
            result[1] = i;
        }
    }
    
    return (result);
}
