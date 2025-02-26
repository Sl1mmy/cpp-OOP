#pragma once

#include <vector>
#include <iostream>
#include "Document.h"

class Library {
public:
	Library() : documents(std::vector<std::shared_ptr<Document>>()) {};

	void AddDocument(std::shared_ptr<Document> doc);
	void DisplayDocument();
	void RemoveDocument(std::string referenceNumber);
	std::shared_ptr<Document> GetDocument(std::string referenceNumber);

private:
	std::vector<std::shared_ptr<Document>> documents;
};