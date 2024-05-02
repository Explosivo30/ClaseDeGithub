#pragma once
class MyString
{
private:
	char* m_text;
	size_t m_sizeOfText;

public:
	MyString(const char* ch);
	size_t GetSize() const;
	~MyString();


};

