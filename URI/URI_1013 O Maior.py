'''
+--------------------+
| Daniel Arndt Alves |
|      URI 1013      |
+--------------------+
'''
A,B,C = map(int,input().split() )
MaiorAB = ((A+B+abs(A-B))/2)
MaiorABC = ((MaiorAB+C+abs(MaiorAB-C))/2)
print("%.0i eh o maior" %MaiorABC)