#include "View.h"


View::View(Controller* controller, Model* model)
{
	this->controller = controller;
	this->model = model;
}

View::~View()
{
}
