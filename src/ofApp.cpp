#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofHideCursor();
	map.load("map.png");
}

//--------------------------------------------------------------
void ofApp::draw() {
	map.draw(0, 0);
}
