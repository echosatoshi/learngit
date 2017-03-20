#! /usr/bin/python3
#-*- coding:utf-8 -*-

import math
a = abs(-100)
print(a)

def my_abs(x):
	if not isinstance(x,(int,float)):
		return 'error type'
	if x>0:
		return x
	else:
		return -x

b = my_abs('ab')
print(b)
c = my_abs(-1)
print(c)

def none():
	pass

def move(x, y, step, angle=0):
	nx = x + step*math.cos(angle)
	ny = y - step*math.sin(angle)
	return nx,ny
x, y = move(100, 100, 60, math.pi/60)
print(x,y)

def mypower(x,n=2):
	s  = 1
	while n>0:
		s  = x *s
		n = n-1
	return s

print(10) 
