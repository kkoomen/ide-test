import matplotlib
matplotlib.use("module://matplotlib_pyodide.wasm_backend")
  
import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [i ** 2 for i in x].

plt.figure(figsize=(4, 3))
plt.plot(x, y, marker='o')
plt.title("Simple Plot")
plt.xlabel("X Axis")
plt.ylabel("Y Axis")
plt.grid(True)
plt.show()