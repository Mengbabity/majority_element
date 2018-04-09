# majority_element

在一个数组里找到出现次数大于n/2的元素。
C++
使用map<key,value>来统计。其中key是数组元素，value是该元素出现的次数。
遍历数组，map[key]++，如果map[key]的值大于n/2，return。

