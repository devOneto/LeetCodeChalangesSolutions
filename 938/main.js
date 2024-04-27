var rangeSumBST = function(root, low, high) {
    let result = 0;
    for(let i = 0; i< root.length; i++){
        number = root[i];
        result += (number != null && number >= low && number <= high ) ? number : 0;
    }
    return result;
};

rangeSumBST([10,5,15,3,7,null,18], 7, 15)