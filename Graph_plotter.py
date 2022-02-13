from tkinter import *
import sympy as sym
from sympy.abc import x, y 
import matplotlib.pyplot as plt
import numpy as np


x1 = np.linspace(-5, 5, 100)

root = Tk()
root.resizable(0, 0)
root.configure(background="black")

label1 = Label(root, text="2d plotting (use x1)")
label1.pack()

e = Entry(root)
e.pack()

def graph2():
    fx = e.get()
    fx = eval(fx)
    plt.plot(x1, fx)
    plt.show()

Submit1 = Button(root, text="Submit", command=graph2)
Submit1.pack()

label2 = Label(root, text="3d plotting (use x, y)")
label2.pack()

e2 = Entry(root)
e2.pack()

def graph2():
    fxy = e2.get()
    fxy = eval(fxy)
    sym.plotting.plot3d(fxy)

Submit2 = Button(root, text="Submit", command=graph2)
Submit2.pack()

root.mainloop()
