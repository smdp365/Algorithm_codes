// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    // for(int i = 1; i <= n; i++){
    //     if(isBadVersion(i)){
    //         return i ;
    //     }
    // }

    // return -1;

    long int start = 0;
    long int end = n;

    while(start < end ){
        long int mid = (start + end)/2;
        (isBadVersion(mid)) ? (end = mid) : (start = mid + 1);
    }
    return start;
}


//---------------------------------------------------------------------------------------------

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// int firstBadVersion(int n) {
//     // for(int i = 1; i <= n; i++){
//     //     if(isBadVersion(i)){
//     //         return i ;
//     //     }
//     // }

//     long int start = 0;
//     long int end = n;

//     while(start < end ){
//         long int mid = (start + end)/2;
//         (isBadVersion(mid)) ? (end = mid) : (start = mid + 1);
//     }
//     return start;
// }



//---------------------------------------------------------------------------------------------------

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// int firstBadVersion(int n) {
//     // for(int i = 1; i <= n; i++){
//     //     if(isBadVersion(i)){
//     //         return i ;
//     //     }
//     // }

//     long int start = 0;
//     long int end = n;

//     while(start < end ){
//         long int mid = (start + end)/2;
//         if(isBadVersion(mid)){
//             end = mid;
//         }else {
//             start = mid + 1;
//         }

//     }
//     return start;
// }
