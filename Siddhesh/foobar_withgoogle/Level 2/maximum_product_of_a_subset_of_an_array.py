# [-2,-3,4,-5] -> '60'
# LOGIC::
#   If no. of -ve elements are even-> Simply multiply every element!
#   If -ve elements are odd, divide the above product by the negative element which has least absolute value(mod)

def solution(xs):

    if(len(xs)==1):
      return str(xs[0])
      
    zeroes=0
    negatives=0
    
    #variable below is used to find negative element with min absolute value(mod)
    least=-999999999
    
    ans=1
    
    for i in xs:
      if(i==0):
        zeroes+=1
        #continue is used to avoid multiplication by 0
        continue
      if(i<0):
        negatives+=1
        if(i>least):
          least=i
      ans*=i
    if(zeroes==len(xs)):
      return '0'
    if(negatives%2!=0):
      if(negatives==1 and zeroes>0 and negatives+zeroes==len(xs)):
        # for e.g. -> [0,0,-2,0]
        return '0'
      ans/=least
    return str(int(ans))
