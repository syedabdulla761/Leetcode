/* The isBadVersion API is defined in the parent class VersionControl.
      bool IsBadVersion(int version); */

public class Solution : VersionControl {
    public int FirstBadVersion(int n) {
        for(int i=n;i>0;i--){
            if(!IsBadVersion(i))return i+1;
}
        return 1;
    }
}