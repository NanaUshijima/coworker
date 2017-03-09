#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    font.load("VT323-Regular.ttf", 120);
    
    w = font.stringWidth(str);
    
    for(int j=0; j <column; j++){
        speed_x[j] = ofRandom(7,18);
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
           pos[i][j].x = w*i - w;

        }
    }
    
    ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
   
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            pos[i][j].x += speed_x[j];

            
            if(pos[i][j].x > w*(row-1)){
                pos[i][j].x = -w;
            }
        }
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i =0; i <row; i++){
        
        for (int j =0; j < column; j++){
            ofSetColor(0,ofRandom(100,200), 0);
            font.drawString(str, pos[i][j].x, (ofGetHeight()/column)*j+ofGetHeight()/column);
            
            
        }
    }
    

    
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
