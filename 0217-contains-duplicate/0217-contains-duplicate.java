class Solution {
    public boolean containsDuplicate(int[] nums) {
        boolean contains_duplicate=false;

        HashSet<Integer> set=new HashSet<>();

        for(int i=0;i<nums.length;i++){
            if(set.contains(nums[i])){
                contains_duplicate=true;
                break;
            }
            set.add(nums[i]);
        }

        return contains_duplicate;


    }
}