// Class: Ball

class Ball {
   private:
   /*------------------Attributes---------------------------------------------------------------------------------*/
		// // CODE COMMENTED OUT: -*circumference              // 'c' = 2*pi*r; // formerly 'Circle', formely public
		float radius;
		// CODE: color=green; // formely public

		struct centerOfBall {
			float cOB_x;
			float cOB_y;
		} // the center of the ball w.r.t. (x,y)-coordinate system
	
		struct velocity {
			float v_x;
			float v_y;
		} // coordiates 'v_x', 'v_y' w.r.t. (x,y)-coordinate system 
   

	/*-------------------Methods--------------------------------------------------------------------------------------*/
		//moveForward(): moves linearly in direction of velocity ('v') until it hits a wall, (then bounces off symmetrically, i.e. v_n = -v_n)
		// // CODE COMMENTED OUT: -*moveForward(centerOfBall, v, detectWall())
		void moveForward( Ball ){
			while ( !detectWall() ){
				centerOfBall.cOB_x = centerOfBall.cOB_x + velocity.v_x * TIME_STEP;  // TIME_STEP is defined in 'main()' function
				centerOfBall.cOB_y = centerOfBall.cOB_y + velocity.v_y * TIME_STEP;
			}
		}
	
		//Draw ball with radius ('radius') and color ('color')
		void drawBall( radius, color );							  // TODO: check with a Graphics library
		
		void initialPosition( centerOfBall ){
			centerOfBall.cOB_x = rand(Pprime1_x, Pprime3_x)                        // CHECK: random number from P'1_x, P'3_x [using rand() func from SL]; sub-note: P' is written 'Pprime'
			centerOfBall.cOB_y = rand(Pprime3_y, Pprime1_y)                        // ---
		}

		void bounce( Ball )
		   velocity = newVelocity()

		void newVelocity(){
		   if ( CODE: case when two walls touched simultaneously ){
			  velocity.v_x = -velocity.v_x;
			  velocity.v_y = -velocity.v_y;
		   }
		   if (// CODE: case when one wall touched){
			  // a "horizontal" wall is touched [i.e. P1P4 or P2P3]
			  velocity.v_y = -velocity.v_y;

			  // a "vertical" wall is touched [i.e. P1P2 or P3P4]
			  velocity.v_x = -velocity.v_x;
		   }

		bool detectWall(){
			if ((centerOfBall.cOB_x == Pprime1_x || centerOfBall.cOB_x == Pprime3_x) || (centerOfBall.cOB_y == Pprime1_y || centerOfBall.cOB_y == Pprime3_y))
			  return TRUE;
		   else
			  return FALSE;
		}

		bool isInsideRectangle( Ball ){
		   if ((Pprime1_x <= centerOfBall.cOB_x <= Pprime3_x) && (Pprime3_y <= centerOfBall.cOB_y <= Pprime1_y))
			  return TRUE;
		   else
			  return FALSE;
		}
}
