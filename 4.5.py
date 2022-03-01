import matplotlib.pyplot as plt
fig, ax  = plt.subplots()

#x = 2 - sqrt(-2y+6)
#Введем ограничения на x и y
#x <= 2  y <= 3
#Тогда получим sqrt(-2y+6) = 2 - x и возведем обе части в квадрат 
#y = (-x^2+4x+2)/2
#можем заметить что у нас образовалась парабола с ограничением x и y


ox = [i for i in range (-10,10)]
o = [0 for i in range (-10,10)]
ax.plot(ox,o,'blue')
oy = [i for i in range (-10,5)]
o2 = [0 for i in range (-10,5)]
ax.plot(o2,oy,'blue')

x = [i for i in range (-4, 3)]
y = [(-(i**2) + 4*i + 2)/2 for i in range (-3,4)]
ax.plot(x,y,'red')