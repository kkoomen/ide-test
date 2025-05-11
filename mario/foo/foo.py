import matplotlib
import matplotlib.pyplot as plt

matplotlib.use("module://matplotlib_pyodide.html5_canvas_backend")

# Sample data
x = [1, 2, 3, 4, 5]
y = [1, 4, 9, 16, 25]

# Create the plot
plt.plot(x, y)

# Add labels and title
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Simple Plot')

# Display the plot
plt.show()