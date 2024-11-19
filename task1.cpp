#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string toLowerCase(const string& str) {
    string lower_str = str;
    transform(lower_str.begin(), lower_str.end(), lower_str.begin(), ::tolower);
    return lower_str;
}
string chatbotResponse(const string& userInput) {
    string lowerInput = toLowerCase(userInput);
    if (lowerInput.find("hello") != string::npos || lowerInput.find("hi") != string::npos) {
        return "Hello! How can I assist you today?";
    }
    else if (lowerInput.find("bye") != string::npos || lowerInput.find("goodbye") != string::npos) {
        return "Goodbye! Have a great day!";
    }
    else if (lowerInput.find("how are you") != string::npos) {
        return "I'm just a bot, but I'm doing great! How can I help you?";
    }
    else if (lowerInput.find("help") != string::npos) {
        return "Sure, I'm here to help. What do you need assistance with?";
    }
    else if (lowerInput.find("weather") != string::npos) {
        return"I didn't have access to forecast and weather";
    }
    else {
        return "I'm not sure how to respond to that. Can you please rephrase?enter help queries";
    }
}

int main() {
    cout << "Chatbot: Hello! I'm a simple rule-based JARVIS chatbot. Type 'bye' to exit." << endl;

    while (true) {
        cout << "You: ";
        string userInput;
        getline(cin, userInput);

        if (toLowerCase(userInput).find("bye") != string::npos || toLowerCase(userInput).find("goodbye") != string::npos) {
            cout << "Chatbot: Goodbye! Have a great day!" << endl;
            break;
        }

        string response = chatbotResponse(userInput);
        cout << "Chatbot: " << response << endl;
    }

    return 0;
}
