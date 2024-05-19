class Solution {

    // Time complexity O(N^2) becuase of remove method
    public String getPermutation(int n, int k) {
        StringBuilder kthPerm = new StringBuilder();
        int fact = 1;
        //this list will contain all the values from 1 to n for reference
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 1; i < n; i++) {
            fact = fact * i;
            list.add(i);
        }
        list.add(n);
        k--;
        while (true) {
            kthPerm.append(list.get(k / fact));
            list.remove(k / fact);
            if (list.size() == 0) break;
            k = k % fact;
            fact = fact / (list.size());
        }
        return kthPerm.toString();
    }
}
