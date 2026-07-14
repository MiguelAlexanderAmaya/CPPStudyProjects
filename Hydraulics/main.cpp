/*
 *  Calculate the horizontal force exerted on a T-connector pipe as shown below
 *
 *					    |	   |
 *					    |	   |
 *					----|	   |
 *				--->		   |
 *					----|      |
 *						|	   |
 *						|	   |
 */

#include <iostream>
using namespace std;

int main()
{
    float flow_rate;		// Mass flow rate;						Kg/s
	float velocity;			// Velocity entering;					m/s
	float horizontal_force;	// Horizontal forced exerted on pipe;	N
    cout << "Write the flow rate(Kg/s): " << endl;
	cin >> flow_rate;
	cout << "Write the velocity(m/s):" << endl;
	cin >> velocity;
	horizontal_force = flow_rate * velocity;
    return 0;
}
