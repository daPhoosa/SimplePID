# SimplePID
*Simple PID object library*

####Object Creation
>SimplePID myPID(1.0f, 0.1f, 0.2f, 100.0f); 

>*// (Proportional gain, Integtral gain, Derivative gain, Max integral accumulation(+/-) )*

####Data Input
>myPID.in(currentState, desiredState);

####Controller Output
>myPID.out();

####Reset Integral Accumulator
>myPID.iReset();

