#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetColor(0, 0, 0);
    ofSetBackgroundAuto(true);
    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    if(vCircle.size()>0){
        for(int i=0; i<vCircle.size(); i++){
            ofSetColor(255);
            ofCircle(vCircle[i].x, vCircle[i].y, vCircle[i].radius);
        }
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if(key == 'c'){
        circle tmp;
        tmp.x = mouseX;
        tmp.y = mouseY;
        tmp.radius = ofRandom(30,60);
        vCircle.push_back(tmp);
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}
