/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:28:05 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/08 18:28:06 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Data.hpp"
#include "Serializer.hpp"

void printDataInfo(const Data* data, const std::string& prefix) {
	std::cout << prefix << " @ Address: " << data << std::endl;
	std::cout << "  - ID: " << data->id << std::endl;
	std::cout << "  - Name: " << data->name << std::endl;
	std::cout << "  - Value: " << data->value << std::endl;
}

int main() {
	Data* originalData = new Data(42, "Test Data", 3.14159);
	
	std::cout << "=== Original Data ===" << std::endl;
	printDataInfo(originalData, "Original");
	uintptr_t serialized = Serializer::serialize(originalData);
	std::cout << "\n=== Serialized Value ===" << std::endl;
	std::cout << "Serialized value (dec): " << serialized << std::endl;
	std::cout << "Serialized value (hex): 0x" << std::hex << serialized << std::dec << std::endl;
	Data* deserializedData = Serializer::deserialize(serialized);
	std::cout << "\n=== Deserialized Data ===" << std::endl;
	printDataInfo(deserializedData, "Deserialized");
	std::cout << "\n=== Pointer Comparison ===" << std::endl;
	std::cout << "Original pointer: " << originalData << std::endl;
	std::cout << "Deserialized pointer: " << deserializedData << std::endl;
	std::cout << "Are pointers equal? " << (originalData == deserializedData ? "YES" : "NO") << std::endl;
	std::cout << "\n=== Data Modification Test ===" << std::endl;
	std::cout << "Modifying data through deserialized pointer..." << std::endl;
	deserializedData->id = 100;
	deserializedData->name = "Modified Data";
	deserializedData->value = 2.71828;
	printDataInfo(originalData, "Modified (through original pointer)");
	
	delete originalData;
	
	return 0;
}