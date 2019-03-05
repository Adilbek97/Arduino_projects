
def func( *num):
    i=0
    j=0
    c=len(num)
    while(i<c):
       j=i+1
       while(j<=c):
          if num[i]==num[j]:
              num.remove(j)
              c=c-1
              
     
    
    
    
