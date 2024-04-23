/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    nums.sort();
    let x= nums[0];
    for(let i=1;i<nums.length;i++){
        if(nums[i]==x)return true;
        x=nums[i];
    }
    return false;
};