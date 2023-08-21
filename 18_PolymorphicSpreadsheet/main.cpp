#include <iostream>
#include <vector>
#include <memory>
#include <format>
#include <string>
import spreadsheet_cell;
import double_spreadsheet_cell;
import string_spreadsheet_cell;

int main()
{
	std::vector<std::unique_ptr<SpreadsheetCell>> cellArray;
	cellArray.push_back(std::make_unique<StringSpreadsheetCell>());
	cellArray.push_back(std::make_unique<StringSpreadsheetCell>());
	cellArray.push_back(std::make_unique<DoubleSpreadsheetCell>());

	cellArray[0]->set("hello");
	cellArray[1]->set("10");
	cellArray[2]->set("18");

	std::cout << format("Vector: [{},{},{}]", cellArray[0]->getString(),
		cellArray[1]->getString(),
		cellArray[2]->getString()) << std::endl;

	DoubleSpreadsheetCell myDbl;
	myDbl.set(8.4);
	StringSpreadsheetCell result{ myDbl + myDbl };
	std::cout << std::endl << result.getString() << std::endl;
}
