/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let res = nums.filter((num, index) => nums.indexOf(num) === index)
    return res;
 };