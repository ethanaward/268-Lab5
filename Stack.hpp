/**
*	@file : Stack.hpp
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Implements the functionality of Stack.h.
*/
template <typename T>
Stack<T>::Stack() {

m_top = nullptr;
m_size = 0;

}

template <typename T>
Stack<T>::~Stack() {

Node<T>* temp = m_top;
Node<T>* temp2 = temp;

while(temp != nullptr) {
temp = temp->getNext();
temp2->setNext(nullptr);
delete temp2;
temp2 = temp;
}
                                                    
}

template <typename T>
bool Stack<T>::isEmpty() const {

if(size() == 0) {
	return(true);
}

else {
	return(false);
}

}

template <typename T>
void Stack<T>::push(const T newEntry) {

Node<T>* temp = new Node<T>();
temp->setValue(newEntry);

if(isEmpty()) {
	m_top = temp;
	m_size++;
}

else  {
	temp->setNext(m_top);	
	m_top = temp;
	m_size++;
}

}

template <typename T>
T Stack<T>::pop() throw(PreconditionViolationException) {

Node<T>* temp = m_top;
T tempValue = T();

if(isEmpty()) {
	throw PreconditionViolationException("Pop attempted on an empty stack");
}

else if(size() == 1) {
	tempValue = m_top->getValue();	
	delete m_top;
	m_top = nullptr;
	m_size--;
	return(tempValue);
}

else {
	tempValue = m_top->getValue();	
	m_top = m_top->getNext();
	delete temp;
	m_size--;
	return(tempValue);
}

}

template <typename T>
T Stack<T>::peek() const throw(PreconditionViolationException) {

if(isEmpty()) {
	throw(PreconditionViolationException("Peek attempted on empty stack"));
}	

else {

	return(m_top->getValue());
}

}

template <typename T>
int Stack<T>::size() const {

return(m_size);

}

template <typename T>
void Stack<T>::print() const {

Node<T>* temp = m_top;

if(isEmpty()) {
	std::cout << "Stack empty" << std::endl;
}

else  {

	while(temp != nullptr) {
		std::cout << temp->getValue() << " ";
		temp = temp->getNext();
	}

}

}

template <typename T>
bool Stack<T>::operator<(const StackInterface<T>& rhs) const {

if(m_size < rhs.size()) {
return(true);
}

else {
return(false);
}

}

template <typename T>
bool Stack<T>::operator<=(const StackInterface<T>& rhs) const {

if(m_size <= rhs.size()) {
return(true);
}

else {
return(false);
}

}

template <typename T>
bool Stack<T>::operator>(const StackInterface<T>& rhs) const {

if(m_size > rhs.size()) {
return(true);
}

else {
return(false);
}

}

template <typename T>
bool Stack<T>::operator>=(const StackInterface<T>& rhs) const {

if(m_size >= rhs.size()) {
return(true);
}

else {
return(false);
}

}

template <typename T>
bool Stack<T>::operator==(const StackInterface<T>& rhs) const {

if(m_size == rhs.size()) {
return(true);
}

else {
return(false);
}

}

template <typename T>
bool Stack<T>::operator!=(const StackInterface<T>& rhs) const {

if(m_size != rhs.size()) {
return(true);
}

else {
return(false);
}

}

