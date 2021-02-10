#include <iostream>

/*  Design the Kalman Filter

    1. estimate x and y location of a particle
    2. measurement, z = x + error, Erros - N(0, sigma^2)
    3. State vector: X_k = [x_k ; v_k], k is a time stamp
    4. measurement data, z_k = [z_k]

    Change in system with time - Constant Acceleration Model
    x_k_plus_1 = x_k + v_k*delta_t + 1/2*a*delta_t^2
    v_k_plus_1 = v_k + a*delta_t

    State Vector Form for prediction
    x_k_plus_1 = [1 delta_t; 0 1]*x_k + [1/2*delta_t^2; delta_t]*a
    x_k_plus_1 = F*x_k + G*a

    Measurement Update
    z_k = x_k + error
    z_k = [1 0]*x_k + error

    Prediction Step - Propogate State 
    x_k ----> x_k_plus_1
    x_k -> Normal distribution

    Measurement/Correction Step - Incorporate the knowledge of z_k into measurement of x_k
    Innovation matrix, y = z_k - H*x_k_mean
    Innovation Covariance, S_k = H*P_k*H_Transpose + R
    k - kalman gain
    x_k_plus_1_mean = x_k_mean + K*y
    P_z - covariance matrx = (I - k*H)*P_k

*/