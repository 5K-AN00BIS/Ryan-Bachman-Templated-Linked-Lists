// Ryan Bachman
// CSC383 - Data Structures and Algorithms
// University of Advancing Technology
// Project: Linked List Assignment

/*Implementation
	Implement a templated (generics) doubly-linked list.  Your linked list class should implement the following functionality:

		Find(dataToFind) – returns a pointer to the node whose key matches dataToFind.

		Insert(newData) – inserts a new node at the end of the list with a key equal to newData.

		Delete(delNode)- deletes the node that delNode points to from the list.

		For extra credit, implement a function that finds the Minimum and Maximum values in your linked list.

			Minimum() – returns the minimum key in the list.

			Maximum() – returns the maximum key in the list.

 Your main program should instantiate, initialize and correctly demonstrate the functionality of the linked list.*/

// Templated add functions will do the function no matter what the data type.
// Will need current and previous pointers so we can move backwards if need be. Previous will always be one node behind.