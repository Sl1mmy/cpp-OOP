#include "Library.h"

#include <iostream>

void Library::AddDocument(std::shared_ptr<Document> doc) {
	documents.push_back(doc);
}

void Library::DisplayDocument() {
	for (const auto& doc : documents)
	{
		doc->DisplayInfo();
	}
}

void Library::RemoveDocument(std::string referenceNumber) {
	for (int i = documents.size() - 1; i >= 0; --i)
	{
		if (documents[i]->GetReferenceNumber() == referenceNumber) {
			documents.erase(documents.begin() + i);
			break;
		}
	}
}

std::shared_ptr<Document> Library::GetDocument(std::string referenceNumber) {
	for (int i = documents.size() - 1; i >= 0; --i)
	{
		if (documents[i]->GetReferenceNumber() == referenceNumber) {
			return documents[i];
			break;
		}

		return nullptr;
	}
}