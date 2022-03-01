import math
a = 18
b = 6
#Т.к. фокусы расположены симметрично на оси ординат то формула будет x^2/a^2-y^2/b^2=-1
print('а) x^2/18^2 - y^2/6^2 = -1')

c = 5
e = 5/3
a = c/e
b = math.sqrt(c**2 - a**2)
print ('б)x^2/' + str(a**2 )+ '-y^2/' + str(b**2) + '=-1')

#y = +-12/5x (общий вид y = +-bx/a)
#b/a = 12/5
xver = 0
yver = 24
#при подстановке в каноническое уравнение найдем b
b = 24
a = b*5/12
print ('в)x^2/' + str(a**2 )+ '-y^2/' + str(b**2) + '=-1')

e = 7/5
dirL = 50/7
#x = +-a/e
#Т.к. нам дано расстояние то 2x = 2a/e
a = dirL * e
c = e*a
b = math.sqrt(c**2 - a**2)
print ('г)x^2/' + str(a**2 )+ '-y^2/' + str(round(b**2)) + '=-1')

#y = +- 4x/3 (b/a = 4/3)
dirL = 6.4
#dirL = 2a/e ; e = c/a; 2a^2/c = dirL; b^2= c^2 - a^2 (c^2 = 25a^2/9)
c = 25 *(3.2) /9
a = math.sqrt(c*3.2)
b = math.sqrt(c**2 - a**2)
print ('д)x^2/' + str(round(a**2, 2) )+ '-y^2/' + str(round(b**2,2)) + '=-1')