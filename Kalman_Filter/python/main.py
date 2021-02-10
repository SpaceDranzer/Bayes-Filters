import numpy as np
from unittest 

class KF:
    def __init__(self, initial_x, initial_v):
        # mean of state Gaussian Random Variable
        self.x = np.array([initial_x, initial_v])

        # covariance of state Gaussian Random Variable
        self.P = np.eye(2)

kf = KF(initial_x = 0.2, initial_v = 0.5)




