    Write a program to find the node at which the intersection of two singly linked lists begins.


    For example, the following two linked lists:

    A:          a1 → a2
                       ↘
                         c1 → c2 → c3
                       ↗            
    B:     b1 → b2 → b3
    begin to intersect at node c1.
    
1. 先把2个list走到最一个node，如果最后1个node不相同，则为不想交的2个lists,return NULL
2. 结尾相同，把长的list，走到2个list的length差值处，然后再一起走。如果相同，就是那个intersection了
