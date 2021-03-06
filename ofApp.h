#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    static const int num = 100;
    ofSpherePrimitive sphere;
    ofEasyCam cam;
    ofLight light;
    ofVec2f pos[num];
    ofVec2f vel[num];
    
    int Yaxis;
    int Xaxis;
    int speed = 10.0;
 
		
};
