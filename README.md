# HackerRank 3rd Semester Algorithm Portfolio

## Student Information

**Name:** Likhithesh M  
**USN / Student ID:** R25EF124 
**Semester:** 3rd Semester  
**Program:** B.Tech Computer Science and Engineering  
**University:** REVA University, Bengaluru  

---

## Profile Links

**HackerRank Profile:** https://www.hackerrank.com/profile/mlikhitheshm

**GitHub Repository:** [ADD YOUR GITHUB REPOSITORY URL]

---

## Introduction

This repository contains my solutions and documentation for the HackerRank Algorithms and GitHub Coding Portfolio activity for the 3rd Semester Computer Science and Engineering course.

The activity focuses on developing algorithmic problem-solving skills, implementing efficient solutions using C++, analyzing time and space complexity, and maintaining a well-organized GitHub coding portfolio.

The five selected problems cover arrays, counting, insertion sorting, binary search, greedy algorithms, and sorting techniques.

---

# Problems Completed

| No. | Problem | Main Technique | Time Complexity | Auxiliary Space |
|---|---|---|---|---|
| 1 | Mini-Max Sum | Array Traversal | O(N) | O(1) |
| 2 | Birthday Cake Candles | Maximum & Counting | O(N) | O(1) |
| 3 | Insertion Sort - Part 1 | Insertion / Shifting | O(N) | O(1) |
| 4 | Intro to Tutorial Challenges | Binary Search | O(log N) | O(1) |
| 5 | Mark and Toys | Greedy + Sorting | O(N log N) | Depends on sorting |

---

# 1. Mini-Max Sum

## Problem Summary

Given five positive integers, calculate the minimum sum and maximum sum that can be obtained by summing exactly four of the five integers.

## Approach

The solution calculates the total sum of all elements and tracks the minimum and maximum values.

- Minimum sum = Total sum - Maximum value
- Maximum sum = Total sum - Minimum value

## Time Complexity

**O(N)**

## Auxiliary Space Complexity

**O(1)**

## Alternative Approach

The array can be sorted first and the smallest four and largest four elements can be summed. However, sorting requires O(N log N), so tracking the minimum and maximum directly is more efficient.

## HackerRank

**Status:** Accepted  
**Language:** C++

---

# 2. Birthday Cake Candles

## Problem Summary

Given the heights of candles, find how many candles have the maximum height.

## Approach

First find the maximum candle height. Then traverse the array and count how many candles have that maximum height.

## Time Complexity

**O(N)**

## Auxiliary Space Complexity

**O(1)**

## Alternative Approach

The array could be sorted and the maximum value could be counted, but sorting requires O(N log N). The two-pass approach is more efficient.

## HackerRank

**Status:** Accepted  
**Language:** C++

---

# 3. Insertion Sort - Part 1

## Problem Summary

The first N-1 elements are already sorted. The task is to insert the last element into its correct position by shifting larger elements.

## Approach

The last element is stored temporarily. Elements greater than it are shifted one position to the right until the correct position is found.

## Time Complexity

**O(N)** for the required Part 1 insertion operation.

## Auxiliary Space Complexity

**O(1)**

## Alternative Approach

A complete insertion sort could be performed, but it would unnecessarily process the entire array. The required task only needs one insertion operation.

## HackerRank

**Status:** Accepted  
**Language:** C++

---

# 4. Binary Search

## HackerRank Problem

**Intro to Tutorial Challenges**

## Problem Summary

Given a sorted array and a target value, find the zero-based index of the target.

## Approach

Binary search is used because the array is sorted.

1. Set the left and right boundaries.
2. Find the middle element.
3. If the middle element equals the target, return its index.
4. If the middle element is smaller, search the right half.
5. Otherwise, search the left half.
6. Continue until the target is found.

## Time Complexity

**O(log N)**

## Auxiliary Space Complexity

**O(1)**

## Alternative Approach

Linear search can check every element sequentially, but it requires O(N) time. Binary search is more efficient for sorted arrays.

## HackerRank

**Status:** Accepted  
**Language:** C++

---

# 5. Mark and Toys

## Problem Summary

Given prices of toys and a fixed budget, find the maximum number of toys that can be purchased without exceeding the budget.

## Approach

The prices are sorted in ascending order. The cheapest toys are purchased first until the budget is exhausted.

This uses a greedy strategy.

## Time Complexity

**O(N log N)**

## Auxiliary Space Complexity

Depends on the sorting implementation.

## Alternative Approach

Repeatedly finding the cheapest remaining toy without sorting can take O(N²) time, which is less efficient.

## HackerRank

**Status:** Accepted  
**Language:** C++

---

# Complexity Summary

| Problem | Time Complexity | Auxiliary Space |
|---|---:|---:|
| Mini-Max Sum | O(N) | O(1) |
| Birthday Cake Candles | O(N) | O(1) |
| Insertion Sort - Part 1 | O(N) | O(1) |
| Binary Search | O(log N) | O(1) |
| Mark and Toys | O(N log N) | Depends on sorting |

---

# Evidence of Completed Challenges

Screenshots of accepted HackerRank submissions are maintained as evidence for the completed challenges.

### Evidence

1. Mini-Max Sum — Accepted
2. Birthday Cake Candles — Accepted
3. Insertion Sort - Part 1 — Accepted
4. Binary Search / Intro to Tutorial Challenges — Accepted
5. Mark and Toys — Accepted

---

# HackerRank Badge

**Badge Status:** [ENTER YOUR CURRENT BADGE / STAR STATUS]

The HackerRank badge milestone is treated as a portfolio goal in addition to completing the five mandatory challenges.

---

# GitHub Repository Structure

```text
HackerRank-3rdSem-Algorithm-Portfolio/
│
├── README.md
│
├── 01-Mini-Max-Sum/
│   ├── solution.cpp
│   └── README.md
│
├── 02-Birthday-Cake-Candles/
│   ├── solution.cpp
│   └── README.md
│
├── 03-Insertion-Sort-Part-1/
│   ├── solution.cpp
│   └── README.md
│
├── 04-Binary-Search/
│   ├── solution.cpp
│   └── README.md
│
└── 05-Mark-and-Toys/
    ├── solution.cpp
    └── README.md
