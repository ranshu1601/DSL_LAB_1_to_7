print("Sentinel Search ...")
rn=[1,2,3,4,5,44,55,30]
print(rn)
len=len(rn) 
print(len)

key=30
last=rn[len-1]
rn[len-1]=key
print(last)
print(rn)

i=0
while(rn[i]!=key):
    i=i+1

rn[len-1]=last
if((i<len-1)or (key==rn[len-1])):
    print("Key found at location: ",1)
else:
    print("Key not found...")        