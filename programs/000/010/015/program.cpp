// https://stackoverflow.com/questions/13223399/deleting-a-pointer-in-c

#include <iostream>

using namespace std;

int main() {
	int myVar = 8; //not dynamically allocated. Can't call delete on it.
	int* myPointer = new int; //dynamically allocated, can call delete on it.

	cin.get();

	// The correct way:
	myPointer = new int;
	delete myPointer; //freed memory
	myPointer = NULL; //pointed dangling ptr to NULL

	/**
	 * This answer is rather old,
	 * and so describes what was 'good' at the time,
	 * which was smart pointers provided by the Boost library. Since C++11,
	 * the standard library has provided sufficient smart pointers types,
	 * and so you should favour the use of std::unique_ptr,
	 * std::shared_ptr and std::weak_ptr.
	 * 
	 * There was also std::auto_ptr. It was very much like a scoped pointer,
	 * except that it also had the "special" dangerous
	 * ability to be copied — which also unexpectedly transfers ownership.
	 * It was deprecated in C++11 and removed in C++17,
	 * so you shouldn't use it.
	 * 
	 */

	/**
	 * OLD ANSWER
	 */
	// With raw pointers,
	// the programmer has to explicitly destroy the object when it is no longer useful.

	// Need to create the object to achieve some goal
	MyObject* ptr = new MyObject(); 
	ptr->DoSomething(); // Use the object in some way
	delete ptr; // Destroy the object. Done with it.
	// Wait, 
	// hat if DoSomething() raises an exception...?

	// The simplest policy in use involves the scope of
	// the smart pointer wrapper object, such as implemented by boost::scoped_ptr or std::unique_ptr.

	void f()
	{
		{
		std::unique_ptr<MyObject> ptr(new MyObject());
		ptr->DoSomethingUseful();
		} // ptr goes out of scope -- 
		// the MyObject is automatically destroyed.

		// ptr->Oops(); // Compile error: "ptr" not defined
						// since it is no longer in scope.
	}
	// Note that std::unique_ptr instances cannot be copied.
	// This prevents the pointer from being deleted multiple times (incorrectly).
	// You can, however, pass references to it around to other functions you call.

	// std::unique_ptrs are useful when you want to tie the lifetime of the object
	// to a particular block of code, or if you embedded it as member data inside another object,
	// the lifetime of that other object. The object exists until the containing block of
	// code is exited, or until the containing object is itself destroyed.

	// A more complex smart pointer policy involves reference counting the pointer.
	// This does allow the pointer to be copied. When the last "reference" to the object
	// is destroyed, the object is deleted. This policy is implemented by boost::shared_ptr
	// and std::shared_ptr.

	void f()
	{
		typedef std::shared_ptr<MyObject> MyObjectPtr; // nice short alias
		MyObjectPtr p1; // Empty

		{
			MyObjectPtr p2(new MyObject());
			// There is now one "reference" to the created object
			p1 = p2; // Copy the pointer.
			// There are now two references to the object.
		} // p2 is destroyed, leaving one reference to the object.
	} // p1 is destroyed, leaving a reference count of zero. 
	// The object is deleted.
	// Reference counted pointers are very useful when the lifetime of 
	// your object is much more complicated, and is not tied directly to a particular 
	// section of code or to another object.

	// There is one drawback to reference counted pointers — the possibility
	// of creating a dangling reference:

	// Create the smart pointer on the heap
	MyObjectPtr* pp = new MyObjectPtr(new MyObject())
	// Hmm, we forgot to destroy the smart pointer,
	// because of that, the object is never destroyed!
	// Another possibility is creating circular references:

	struct Owner {
	std::shared_ptr<Owner> other;
	};

	std::shared_ptr<Owner> p1 (new Owner());
	std::shared_ptr<Owner> p2 (new Owner());
	p1->other = p2; // p1 references p2
	p2->other = p1; // p2 references p1

	// Oops, the reference count of of p1 and p2 never goes to zero!
	// The objects are never destroyed!
	// To work around this problem, both Boost
	// and C++11 have defined a weak_ptr to define a weak (uncounted) reference to a shared_ptr

	return 0;
}