#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofEnableDepthTest();
    cam.setDistance(100);
    

    for(int i = 0;i <num;i++){
        pos[i].set(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()));
        vel[i].set(ofRandom(-1,1),ofRandom(-1,1));
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0;i<num;i++){
        pos[i] = pos[i] + vel[i];
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetColor(255);

    cam.begin();

    for(int i = 0;i < num;i++){
        sphere.set(100, 10);
        sphere.setPosition(pos[i].x,pos[i].y, 0);
        sphere.drawWireframe();
        
    }
    
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            ofSetColor(255, 0, 0,50);
            ofDrawLine(pos[i].x, pos[i].y, pos[j].x,pos[j].y);
        }
    }
    

    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
