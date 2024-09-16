int count = 0;
    int i = 0;
    
    // Count the lowercase characters
    while (i < s.length() && s[i] >= 'a' && s[i] <= 'z') {
        count++;
        i++;
    }

    // Extract the numeric characters from the end of the string
    int j = s.length() - 1;
    string numStr = "";
    
    // Gather numeric characters
    while (j >= 0 && s[j] >= '0' && s[j] <= '9') {
        numStr = s[j] + numStr; // Prepend characters
        j--;
    }

    // Directly compare the count of lowercase letters with the numeric string length
    // If numStr is empty or too large to fit into an int, handle it safely
    if (numStr.empty()) {
        return 0;
    }

    // Check if the number has leading zeros, and handle them if needed
    // Convert numStr to a number in a safe way
    try {
        long long num = stoll(numStr); // Use stoll to handle larger numbers
        if (num == count) {
            return 1;
        } else {
            return 0;
        }
    } catch (const std::out_of_range& e) {
        // If the number is too large, return 0
        return 0;
