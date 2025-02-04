% Time vector from 0 to 10 seconds, with 0.1s time steps
t = 0:0.1:10;

% Call the state-space function with K = 1
K = 1; 
y = simple_state_space(K, t);

% Plot the output
plot(t, y);
xlabel('Time (s)');
ylabel('Output y(t)');
title('State-Space System Output');
grid on;