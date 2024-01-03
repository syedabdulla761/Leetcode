class Solution {
    public int calPoints(String[] operations) {
        ArrayList<Integer> list=new ArrayList<>();
        
        for (int i=0; i< operations.length;i++){
            if (operations[i].matches("^-?\\d+$")){
                list.add(Integer.parseInt(operations[i]));
            }
            else if( operations[i].equals("C")){
                list.remove(list.size() - 1);
            }
            else if( operations[i].equals("D")){
                list.add(2*list.get(list.size()-1));
            }
            else{
                list.add(list.get(list.size()-1)+list.get(list.size()-2));
            }
            System.out.println(list);
        }
        int sum=0;
        
        for (Integer number : list) {
            sum += number;
        }
        return sum;
    }
}