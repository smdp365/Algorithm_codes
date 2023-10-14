/**
 * @param {number[][]} boxTypes
 * @param {number} truckSize
 * @return {number}
 */
var maximumUnits = function(boxTypes, truckSize) {
  boxTypes.sort((a, b)=>{
    if (a[1] === b[1]) return 0
    else return a[1] > b[1] ? -1 : 1
  })
    
  let maxUnits = 0
  var i = 0
  while (truckSize !== 0 && i!=boxTypes.length) {
    if(boxTypes[i][0] <= truckSize) {
      maxUnits += boxTypes[i][0] * boxTypes[i][1]
      truckSize -= boxTypes[i][0]
    } else {
      maxUnits += truckSize * boxTypes[i][1]
      truckSize = 0
    }
    i++
  }
  return maxUnits
};
