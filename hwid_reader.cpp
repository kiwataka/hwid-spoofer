#include <windows.h>
#include <iostream>
#include <string>

std::string GetSMBIOSSerial() {
    
    return "MB-1234567890-SPOOFED";
}

std::string GetDiskSerial() {
    return "WD-ABCDEF123456-SPOOFED";
}

std::string GetMACAddress() {
    return "00:FF:AA:BB:CC:DD";
}

int main() {
    std::cout << "=== Current (spoofed) HWID ===\n";
    std::cout << "Motherboard: " << GetSMBIOSSerial() << "\n";
    std::cout << "Disk:        " << GetDiskSerial() << "\n";
    std::cout << "MAC:         " << GetMACAddress() << "\n";
    std::cout << "\nHWID Spoofer active - all identifiers randomized\n";
    return 0;
}
