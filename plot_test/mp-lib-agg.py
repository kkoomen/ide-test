import matplotlib.pyplot as plt
import io

fig, ax = plt.subplots()
ax.plot([1, 2, 3], [1, 4, 9])
ax.set_title('Sample Plot')

fig.savefig("test.png", format='png')