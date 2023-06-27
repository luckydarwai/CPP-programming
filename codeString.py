
s=input()
#a3b2gf2akl
count=1
st=''
for i in range(1,len(s)):
    if s[i]==s[i-1]:
        count+=1
    else: 
        if count==1:
            st+=s[i]
        else:
            st+=s[i-1]+str(count)
            count=1
print(st)

  

