function [y] = simple_state_space(K, t)
    % Constants for the state-space system
    A = [0, 1; -1, -1];   % State matrix (2x2)
    B = [0; 1];            % Input matrix (2x1)
    C = [1, 0];            % Output matrix (1x2)
    D = 0;                 % Direct transmission matrix (1x1)

    % Initial state
    x = [0; 0];  % Initial state [x1(0); x2(0)]

    % Time step for simulation
    dt = t(2) - t(1);  % Assuming uniform time steps

    % Output initialization
    y = zeros(size(t));

    % Simulate the system using Euler integration (simple demo)
    for i = 1:length(t)
        u = K;  % Feedback control input (constant)

        % State-space update (Euler method)
        dx = A * x + B * u;  % dx = Ax + Bu
        x = x + dx * dt;     % Update state

        % Output equation
        y(i) = C * x + D * u;  % y = Cx + Du
    end
end
