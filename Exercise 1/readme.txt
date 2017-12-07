Storing a pointer to Base class in the vector. This is how we prevent
object slicing and achieve the polymorphic behavior. In this example
we are using raw pointers.

vector<Element*>
