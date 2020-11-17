# Problem-solving

[![OpenFaaS](https://img.shields.io/badge/Topic-ProblemSolving-darkblue.svg)](https://www.openfaas.com)
[![OpenFaaS](https://img.shields.io/badge/SubTopic-DataStructures-darkgreen.svg)](https://www.openfaas.com)
[![OpenFaaS](https://img.shields.io/badge/Language-C++-purple.svg)](https://www.openfaas.com)

## Description
    
      - Given, no. of nodes in a tree and no. of elements to be inserted, construct a binary search tree
      ( a tree in which all its children in the left subtree is lesser than the root and all its 
      children in the right subtree is greater than the root) and convert the tree into its mirror 
      image so that all its left and right children of non-leaf nodes are interchanged.

## Input format
      - First line contains N which is the no. of nodes in a tree.
      - The next N lines contain the value of each node to be inserted in a bst.

## Constraints
       * 1 <= N,ele <= 10^5

## Output format
      - Print Inorder traversal of the given bst and mirror tree in such a way that each node should be
      in a separate line.
## Hint
    - Root remains the same for bst as well as mirror tree
    - Since it is a binary search tree, inorder traversal is in ascending order and its mirror image would 
    be in descending order.

## Example
   Binary Search tree
 ![alt text](https://github.com/heera0410/Problem-solving/blob/master/Images/binary-search-tree.png)
   
 ![alt text](https://github.com/heera0410/Problem-solving/blob/master/Images/mirror-binary-search-tree.png)
  Mirror image
       
      
## Sample Input0
        
        - enter the no. of nodes:5
        - enter the element to be inserted:1
        - enter the element to be inserted:2
        - enter the element to be inserted:3
        - enter the element to be inserted:4
        - enter the element to be inserted:5

## Sample Output0
        Inorder traversal of the given bst

         1 
         2 
         3 
         4 
         5 
        Inorder traversal of mirror tree

        5 
        4 
        3 
        2 
        1 
 
 ## Explanation0
      - constructed a bst using the function insert and displayed the inorder traversal of the given bst
      - converted bst into mirror tree and printed the inorder traversal.
