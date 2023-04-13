/* The isBadVersion API is defined in the parent class VersionControl.
      bool IsBadVersion(int version); */

public class Solution : VersionControl {
    public int FirstBadVersion(int n) {
        int l=1,m;
        while(l<n){
            m=l+(n-l)/2;
            if(IsBadVersion(m))n=m;
            else l=m+1;
        }
        return l;
    }
}