/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    if (strs.length === 0) return "";
    if (strs.length === 1) return strs[0];
    for (let i = 0; i <= strs[0].length; i++){
        console.log(i)
        for (let j = 1; j < strs.length; j++){
            if(!strs[j].includes(strs[0].substring(0,i))){       
                    if (i == 0) {
                        return "";
                     }
                return strs[0].substring(0,i-1);
            }
        }
    }
    return "";
};