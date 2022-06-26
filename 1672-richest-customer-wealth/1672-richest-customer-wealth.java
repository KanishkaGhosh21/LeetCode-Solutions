public class Solution {
    public int maximumWealth(int[][] accounts) {
        int rows=accounts.length;
        int cols=accounts[0].length;
        int richestCustomerWealth=0;
        for (int i = 0; i < rows; i++) {
            int customerWealth=0;
            for (int j = 0; j < cols; j++) {
                customerWealth+=accounts[i][j];
            }
            if(i==0)
                richestCustomerWealth=customerWealth;
            else if(customerWealth > richestCustomerWealth)
                richestCustomerWealth=customerWealth;
            }
        return richestCustomerWealth;
    }
}