/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let countObject = {};
    let max = 1;
    let maxElement;
    for (let i = 0; i < nums.length; i++){
        
        if (countObject[`${nums[i]}`]){
            countObject[`${nums[i]}`] += 1;
        }else{
            countObject[`${nums[i]}`] = 1;
        }
        if (countObject[`${nums[i]}`] >= nums.length / 2 && max < countObject[`${nums[i]}`] ){
                max = countObject[`${nums[i]}`];
                maxElement = nums[i];
        }
        
    }
    return nums.length == 1? nums[0]:maxElement;
    
};
