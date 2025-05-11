import matplotlib
matplotlib.use('Agg')

import matplotlib.pyplot as plt
import io

# Create the plot
fig, ax = plt.subplots()
ax.plot([1, 2, 3], [1, 4, 9])
ax.set_title('Sample Plot')

# Save the plot to a BytesIO object
buf = io.BytesIO()
fig.savefig("buf", format='png')
buf.seek(0)