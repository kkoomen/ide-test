import matplotlib
matplotlib.use('Agg')

import matplotlib.pyplot as plt
import io

# Create the plot
fig, ax = plt.subplots()
ax.plot([1, 2, 3], [1, 4, 6])
ax.set_title('Sample Plot')

# Save the plot to a BytesIO object
fig.savefig("test.png", format='png')