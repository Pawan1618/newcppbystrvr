class Node{
   // no public keyword as its always public
   // no cocept of nullptr just null


    int data;
    Node next;

    Node(int data1,Node next1){
        this.data=data1;
        this.next=next1;
        //this is used to acces data in class in java


    }
    Node(int data1){
        this.data=data1;
        this.next=null;// no null ptr in java
    }
};
public class LinkedList{
    public static void main(String[] args){
        int[] arr={2,5,6,8};
        Node y=new Node(arr[3]);
        System.out.print(y.data);
    }
}