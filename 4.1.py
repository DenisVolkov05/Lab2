import math
import matplotlib.pyplot as plt
fig, ax  = plt.subplots()

#y^2 = -8x
p = 4 # y^2 = -2px
print('Фокальный параметр ' + str(p))
xver = 0
yver = 0
print ('Координаты вершины ' + str(xver) +', ' + str(yver))
Fx = -p/2
Fy = 0
print ('Координаты фокуса ' + str(Fx) +', ' + str(Fy))
der = p/2
print ('Уравнение директрисы x = ' + str(der))
Mx = -2
My = 4
if (Mx*(-8) == My**2):
    rad = math.sqrt((Fx - Mx)**2 + (Fy - My)**2)
    print ('Фокальный радиус M ' + str(rad))
else:
    print ('Точка не лежит на параболе')

#ур-е касательной y = kx + b
#приравнивая 2 функции и решая относительно y выразим k и b
#y = -4/k ; b = -2/k
k = -4 / My
b = -2/k
print ('Уравнение касательной y = ' + str(k) + 'x + ' + str(b))



ox = [i for i in range (-10,5)]
o = [0 for i in range (-10,5)]
ax.plot(ox,o,'blue')
oy = [i for i in range (-10,10)]
o2 = [0 for i in range (-10,10)]
ax.plot(o2,oy,'blue')

yder = [i for i in range (-10,10)]
xder = [der for i in range (-10,10)]
ax.plot(xder, yder, '--')

xfoc = [i for i in range (-2,3)]
yfoc = [0 for i in range (-2,3)]
ax.plot(xfoc, yfoc,'green')

ypar = [i for i in range (0,5)]
xpar = [-2 for i in range (0,5)]
ax.plot(xpar,ypar,'red')

y=[i for i in range (-9, 1)]
x=[i**2 / -8 for i in range (-9, 1)]
ax.plot(x,y,'blue')

y1=[i for i in range (0, 10)]
x1=[i**2 / -8 for i in range (0, -10, -1)]
ax.plot(x1,y1,'blue')

xcas = [i for i in range (-10,5)]
ycas = [k*i + b for i in range (-10, 5)]
ax.plot(xcas,ycas,'pink')

ax.plot(Mx, My, 'red', marker='o')

ax.plot(xver, yver, 'orange', marker='o')

ax.plot(Fx, Fy, 'green', marker='o')
