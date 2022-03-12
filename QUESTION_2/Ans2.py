#This is the optimize solution to find maximum and minimum element in an array
# For that solution we used python language because in python we return more than one value from function and this is the power of python

def MAX_MIN(data):
  iBig = data[0]
  iSmall = data[0]
  for i in range(1,len(data)):
    if(data[i] > iBig):
      iBig = data[i]
    if(data[i] < iSmall):
      iSmall = data[i]
  
  return iBig,iSmall

def main():
  data = []
  print("Enter the size : ")
  size = int(intput())
  print("Enter the Elements : ")
  for i in range(size):
    no = int(intput())
    data.append(no)
  
  ret,ret1 = MAX_MIN(data)
  print("Maximum Element is : ",ret)
  print("Minimum Element is : ",ret1)

if __name__ == "__main__":
  main();
