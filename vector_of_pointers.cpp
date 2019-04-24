#include <string>
#include <vector>

class Node
{
	/*
	Node class represents an element of DOM
	*/
	public:
		std::string name;
		std::vector<std::string> attributes;//attributes of the element
		std::vector<std::string> attribute_values;//value of the attribute
		std::vector<Node *> children;//sub-elements of the element represented by node
		Node *parent;//parent element of the element represented by node

		//stores the white spaces required to align the elements in a hierarchal fashion in the XML file
		static int indent;

		//function for writing the tags of the element to the XML file
		//If status is true, the opening tag is written
		//If status is false, the closing tag is written
		Node();
		~Node();
		void write_node(bool status);
};

int main()
{
	Node *root;
	Node *reference_pointer;

	root = new Node;
	reference_pointer = root;

	//Adding the robot element which is the root of the tree
	//Keeping the name of the robot as the name of the input_file_name as default
	reference_pointer->name = "robot";
	reference_pointer->attributes.push_back("name");
	reference_pointer->attribute_values.push_back("robot_name");
	
	Node *p = new Node;
	p->name = "name";
	p->parent = reference_pointer;
	
	parent->children.push_back(p);

}