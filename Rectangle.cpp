// Class: Rectangle

class Rectangle {
private:
	/*------------------Attributes---------------------------------------------------------------------------------*/
	// four endpoints (P1, P2, P3, P4), with opposite sides having same length (i.e. ||P1P4||=||P2P3||, ||P1P2||=||P4P3||)
	struct P {     /* P = general endpoint */
		int x;
		int y;
	} P1, P2, P3, P4 // endpoints of the rectangle; THE ORDER IS FIXED


	/*-------------------Methods--------------------------------------------------------------------------------------*/
	void drawRectangle(P1, P2, P3, P4){   /*For now the coordinates for the P's are hardcoded into the program. TODO (optional): make the values variable*/
		P1 = { -1000, 1000 };
		P2 = { 1000, 1000 };
		P3 = { 1000, -1000 };
		P4 = { -1000, -1000 };
	}

	void drawLines(P1P2P3P4-- -   // TODO: see a Graphics library to find out how to draw lines
}
