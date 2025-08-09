# Code for Hilbert Curve

from turtle import *


def hilbert(level, angle, step):

	# Input Parameters are numeric
	# Return Value: None
	if level == 0:
		return

	right(angle)
	hilbert(level-1, -angle, step)

	forward(step)
	left(angle)
	hilbert(level-1, angle, step)

	forward(step)
	hilbert(level-1, angle, step)

	left(angle)
	forward(step)
	hilbert(level-1, -angle, step)
	right(angle)


def main():
	level = int(input())
	size = 200
	penup()
	goto(-size / 2.0, size / 2.0)
	pendown()

	# For positioning turtle
	hilbert(level, 90, size/(2**level-1))
	done()


if __name__ == '__main__':
	main()
