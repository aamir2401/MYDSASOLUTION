    h = h % 12;

    // Calculate the hour hand's angle
    double hour_degree = 30 * h + 0.5 * m;  // 30 degrees per hour + 0.5 degrees per minute

    // Calculate the minute hand's angle
    int min_degree = 6 * m;  // 6 degrees per minute

    // Find the difference between the two angles
    double angle_difference = abs(hour_degree - min_degree);

    // The minimum angle between the hour and minute hand
    double answer = min(angle_difference, 360 - angle_difference);
    
    return (int)answer;   