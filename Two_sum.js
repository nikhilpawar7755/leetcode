/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let number = [];
    let flg = 0;
    for (let i = 0; i < nums.length; i++){
        for ( let j = i+1; j < nums.length; j++){
            if (nums[i] + nums[j] === target ){
                number.push(i);
                number.push(j);
                flg = 1
            }
        }
        
        if (flg == 1){
            break;
        }
    }
    return number;
};