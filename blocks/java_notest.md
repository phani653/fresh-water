* Stack : `Stack<Character> stk = new Stack<>();`
* Stack has `push, pop, and peek`. Have to use pop explicitly to remove elements. 
* Processing char by char from a String : `for(char ch: s.toCharArray())`
* LinkedList<TreeNode> que = new LinkedList<TreeNode><>();
    - que.poll() -> removes and returns the first element of the list
* HashSet: `HashSet<Integer> set = new HashSet<>();`
* PriorityQueue<Integer> pq = new PriorityQueue<>();
     * By default above `pq` is min-heap.
     * If we want max heap, need to initialization such a way that `new PriorityQueue<>(Collections.reverseOrder())`;
     * If we want some custom order, for example, we are inserting a treeNodes and we want to preserve some order
          * if we pass to objects A, B to the compare function, and we want A to be present before B in the final sort order, we need to return -1/negative number. If we want A to be present after B in the final sort order, we need to return +1/positive number. Think number line and we want to put A, B on the number line. If we need A first, return -1. If we need A to the right end, return +1
       ```
       Comparator<Integer> comp = new Comparator<Integer>() {
        @Override
        public int compare(Integer n1, Integer n2) {
            if(n1 > n2) {
                return -1;
            } else {
                return 1;
            }
         }
        };
      ```
* Array sort comparator : `Arrays.sort(intervals, (i1, i2) -> Integer.compare(i1[0], i2[0]));`
* Sort the List<> : `Collections.sort(list)`. We can add a comparator as a second argument for this list.
* For integers sort, we can directly write `Collections.sort(intList, Collections.reverseOrder())`
* What is the difference between add and offer? why are the two methods, both doing the same thing?
```
  In Java, both the add and offer methods are used to add elements to a Queue, but there is a subtle difference in their behavior:

   *  add Method:
        It is inherited from the Collection interface.
        If the queue is full (e.g., in a bounded queue with a maximum capacity), attempting to add an element that would exceed the capacity will throw an exception (IllegalStateException with a message like "Queue full").
        Use add when you expect that adding an element to the queue should always succeed, and any failure to do so indicates a programmatic error.

    offer Method:
        It is specifically defined in the Queue interface.
        If the queue is full, attempting to offer an element that would exceed the capacity will return false, indicating that the addition failed.
        Use offer when you want to handle the case where adding an element might not succeed gracefully without throwing an exception.
```

* Need: to return int[][]. But this can't grow dynamically.And List<List<>> is not a best choice. as we can't convert back to 2D array.
* Sol: `List<int[]> result = new LinkedList<>();` keep add to the result and at the end `return result.toArray(new int[result.size()][]);`
<br>

* https://medium.com/leetcode-patterns/leetcode-pattern-3-backtracking-5d9e5a03dc26
* https://www.linkedin.com/posts/sumitlad_i-spent-3-hours-collecting-15-blogs-that-activity-7179351787047411712-Q7RV/?utm_source=share&utm_medium=member_android
----------
###### Strings
* str.length() for string length
* String.valueOf(number) or String.valueOf(char[] charAry) -> to convert char array to String
* convert int to char : `(char)(number + '0')
* convert char to int: `char - '0'`


---------
* Adding numbers as a List<Integer> to a List `triplets.add(new ArrayList<>(Arrays.asList(nums[ind], nums[left], nums[right])));`
* int Array length: `ary.length` - String length - `str.length()`
* ArrayList declaration & initialization `new ArrayList<>(Arrays.asList(nums[ind], nums[left], nums[right]))`
---------
###### HashSet
* HashSet<String> set = new HashSet<>();
* `set.add(e)` -> returns true if set doesn't contain the element. returns false if the element is already present.
* `set.size()`
* `set.contains(obj)` -> checking if set contains the specified object or not.

-----------
###### Graphs
* For Graph problems first create adj list or adj matrix from the input.
* Most of the problems can be solved by DFS or BFS
* Creating list of Arrays: `List<Integer>[] adjList = new ArrayList[n];` -> this helps while creating adj List
* 
