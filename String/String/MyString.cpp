#include "MyString.h"
#include <cstring>
#include <string.h>
MyString::MyString(const char* ch) {
	m_sizeOfText = strlen(ch) + 1;
	m_text = new char[m_sizeOfText];
	//Copy content of ch to m_text
	//Can do a for loop or strcpy el copy de str
	strcpy_s(m_text, m_sizeOfText, ch);
}

size_t MyString::GetSize() const{
	return m_sizeOfText;
}

MyString::~MyString() {
	if (m_text != nullptr) {
		delete[] m_text;
	}
}


