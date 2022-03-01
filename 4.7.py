import math
#x^2/9 + y^2/12 = 1
#5x + 12y +25 = 0
#y1 = -5x/12 - 25/12
#y2(параллельный y) = -5x/12 + b
Fx = math.sqrt(12 - 9)
Fy = 0
#По свойству луч отраженный придет во второй фокус
Fx2 = -Fx
Fy2 = 0
b = Fy2 + 5*Fx2/12
#чтобы найти координаты A решим систему 
#x^2/9 + y^2/12 = 1 и y = -5x/12 - 5*sqrt(3)/12
Ax1 = -(25*math.sqrt(3) - 24*math.sqrt(626))/217
Ay1 = -(80*math.sqrt(3) + 10*math.sqrt(626))/217

Ax2 = -(25*math.sqrt(3) + 24*math.sqrt(626))/217
Ay2 = -(80*math.sqrt(3) - 10*math.sqrt(626))/217

print(Ax1, Ay1)
print(Ax2, Ay2)