#! /usr/bin/python3
#-*- coding:utf-8 -*-

#判断
age = input('您的年龄')
age = int(age)
if age<10:
	print('未成年')
elif age>10 and age<50:
	print('中年')
else:
	print('老年')
#循环
names = ['abc', 'def', 'ghi']
for name in names:
	print(name)

sum_a = 0
i = 100
while i>0:
	sum_a = sum_a + i
	i = i-1
print(sum_a)
