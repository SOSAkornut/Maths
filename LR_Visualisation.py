from tkinter import *;
import numpy as np;
import matplotlib.pyplot as plt;
from sklearn.linear_model import LinearRegression;
import pandas as pd

root = Tk();
root.configure(background="black");
root.title("Linear_Regression_Visualisation");

heading = Label(root, text="Linear regression visualisation ", background="black", foreground="white", font="Bold 20");
heading.grid(row=0, column=0);

path_csv = Label(root, text="put in a full path of the csv file", background="blue", foreground="white", font="Bold 10");
path_csv.grid(row=1, column=0);

csv_entry = Entry(root);
csv_entry.grid(row=2, column=0);

def submit_csv():
    csv_file = csv_entry.get();
    csv_file_read = pd.read_csv(csv_file);
    X = csv_file_read.iloc[:, 0].values.reshape(-1, 1);  # values converts it into a numpy array
    Y = csv_file_read.iloc[:, 1].values.reshape(-1, 1);  # -1 means that calculate the dimension of rows, but have 1 column 
    linear_regressor = LinearRegression();
    linear_regressor.fit(X, Y);
    Y_pred = linear_regressor.predict(X);

    csv_label = Label(root, text=csv_file_read, background="black", foreground="white");
    csv_label.grid(row=4, column=0);
    
    def Visualise():
        plt.scatter(X, Y, color="black");
        plt.xlabel(f"x")
        plt.ylabel(f"y")
        plt.plot(X, Y_pred, color="blue")
        plt.show()

    compute_button = Button(root, text="Visualise the LR plot with the data values", command=Visualise);
    compute_button.grid(row=5, column=0);

submit_CSVButton = Button(root, text="read", background="black", foreground="white", command=submit_csv);
submit_CSVButton.grid(row=3, column=0);

root.mainloop();
