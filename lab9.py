# -*- coding: utf-8 -*-
"""lab9.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1wtZXyaGOO3vY_07PpVakAlQfv3jw9XKX
"""

#Import all the required modules

import pandas as pd
import matplotlib.pyplot as mpt
from sklearn.cluster import KMeans
from sklearn.preprocessing import MinMaxScaler

df=pd.read_csv('/content/customer.csv')
df

# Scatter plot between age and salary

mpt.scatter(df['age'], df['income'])

# Create a object of KMean and provide teh cluster size

km = KMeans(n_clusters = 3)
km

# Predicting the y value

y_predicted = km.fit_predict(df[['age','income']])
y_predicted

# add another column to save the y_predicted cluster values

df['cluster'] = y_predicted
df

# Creating separate dataframes according to the clusters

df0 = df[df.cluster==0]
df1 = df[df.cluster==1]
df2 = df[df.cluster==2]

# plotting each dataframe

mpt.scatter(df0.age, df0.income, color='green')
mpt.scatter(df1.age, df1.income, color='red')
mpt.scatter(df2.age, df2.income, color='blue')
mpt.xlabel('age')
mpt.ylabel('income')
mpt.show()

# Apply the scaler (all values will range between 0-1)

scaler = MinMaxScaler()
scaler.fit(df[['income']])
df['income'] = scaler.transform(df[['income']])
scaler.fit(df[['age']])
df['age'] = scaler.transform(df[['age']])
df

# Again applying the clustering

km = KMeans(n_clusters = 3)
km

y_predicted = km.fit_predict(df[['age', 'income']])
y_predicted

# Drop the previous cluster column

df.drop('cluster', axis='columns', inplace = True)
df

# create the new cluster

df['cluster'] = y_predicted
df

df0 = df[df.cluster==0]
df1 = df[df.cluster==1]
df2 = df[df.cluster==2]

mpt.scatter(df0.age, df0.income, color='green')
mpt.scatter(df1.age, df1.income, color='red')
mpt.scatter(df2.age, df2.income, color='blue')
mpt.scatter(km.cluster_centers_[1, 0], km.cluster_centers_[1, 1], color='purple', marker='+', label='centroid')
mpt.xlabel('age')
mpt.ylabel('income')
mpt.show()

km.cluster_centers_

# applying regression

k_reg = range(1, 10)
sse = []
for k in k_reg:
  km = KMeans(n_clusters=k)
  km.fit(df[['age', 'income']])
  sse.append(km.inertia_)

sse

# finding the elbow point

mpt.xlabel('K')
mpt.ylabel('Sum of Square Error')
mpt.plot(k_reg, sse)