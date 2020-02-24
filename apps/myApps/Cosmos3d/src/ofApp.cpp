#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	sphere.setRadius(122);
	float screenWidth = ofGetWidth();
	float screenHeight = ofGetHeight();
	x = -screenWidth * .5 + screenWidth * 3 / 4.f;
	y = screenHeight * 1.1 / 6.f;
	z = 0;
	ofSetColor(200, 0, 150, 255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	sphere.setPosition(x, y, z);
	sphere.drawWireframe();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == ofKey::OF_KEY_RIGHT)
	{
		x = x + 10;
	}

	if (key == ofKey::OF_KEY_LEFT)
	{
		x = x - 10;
	}

	if (key == ofKey::OF_KEY_DOWN)
	{
		y = y + 10;
	}

	if (key == ofKey::OF_KEY_UP)
	{
		y = y - 10;
	}
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
