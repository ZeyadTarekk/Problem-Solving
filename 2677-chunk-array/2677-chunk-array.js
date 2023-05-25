/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    const ans = [];

    let dum=[];
    for(let i=0;i<arr.length;i++){
        dum.push(arr[i]);
        if(dum.length==size){
            ans.push(dum);
            dum=[];   
        }
    }
    if(dum.length>0)
        ans.push(dum)
    return ans;
};
