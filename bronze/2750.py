n = int(input())
arr = []
for i in range(n):
    arr.append(int(input()))

for i in range(n-1):#앞의 요소들이 정렬되면 마지막 요소는 자동으로 정렬된 상태이므로 n-1을 사용한다
    min = i

    for j in range(i+1, n):
        if arr[j] < arr[min]:
            min = j
    arr[min],arr[i]=arr[i],arr[min]

for i in arr:
    print(i)
