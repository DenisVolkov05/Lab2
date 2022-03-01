import math
import matplotlib.pyplot as plt
fig, ax  = plt.subplots()

#16x^2 + 25y^2 +32x -100y - 284 = 0
#Общий вид (x-x0)^2/a^2 + (y-y0)^2/b^2 = 1
#Сгруппируем члены и приведем к общему виду
#(x+1)^2 / 25 + (y-2)^2 / 16 = 1 Следовательно у нас дан эллипс 
#Таким образом получим эллипс со смещением по x на -1 и по y на 2
x0 = -1
y0 = 2
print ('Координаты центра ' +str(x0) + ', ' + str(y0))
a = 5
b = 4
print ('Главные оси это отрезки проходящие через центр эллипса и имеющие длину ' +str(2*a) + ' и ' + str(2*b))
print ('Полуоси будут иметь длину ' + str(a) + ' и ' + str(b))

c = math.sqrt(a**2 - b**2)
e = c/a
print ('Эксцентриситет ' + str(e))

print('Т.к это эллипс то у него нет ассимптот')

dir1 = a/e
dir2 = -a/e
print ('Директрисы будут x= ' + str(dir1) + ' и x= ' + str(dir2))

ox = [i for i in range (-10,10)]
o = [0 for i in range (-10,10)]
ax.plot(ox,o,'blue')
oy = [i for i in range (-10,10)]
o2 = [0 for i in range (-10,10)]
ax.plot(o2,oy,'blue')

yder1 = [i for i in range (-10,10)]
xder1 = [dir1 for i in range (-10,10)]
ax.plot(xder1,yder1,'orange')
yder2 = [i for i in range (-10,10)]
xder2 = [dir2 for i in range (-10,10)]
ax.plot(xder2,yder2,'orange')

ox1 = [i for i in range (-10,10)]
o1 = [2 for i in range (-10,10)]
ax.plot(ox1,o1,'--')
oy1 = [i for i in range (-10,10)]
o21 = [-1 for i in range (-10,10)]
ax.plot(o21,oy1,'--') 


x = [i for i in range (-6,5)]
#25y^2 - 100y + (16x^2 + 32x - 284) = 0
#D = 10000 - 100(16x^2 + 32x - 284)
#y = (100 +- sqrt(D)) / 50
y = [((100 + math.sqrt(10000 - 100*(16*(i**2) + 32*i -284)))/50) for i in range (-6,5)]
ax.plot(x, y, 'red')

x = [i for i in range (-6,5)]
y = [((100 - math.sqrt(10000 - 100*(16*(i**2) + 32*i -284)))/50) for i in range (-6,5)]
ax.plot(x, y, 'red')