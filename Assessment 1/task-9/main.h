#pragma once
struct Vector2
{
    Vector2(float vX = 0, float vY = 0)
    {
        x = vX;
        y = vY;
    }

    float x;
    float y;
};


float GetDistanceBetweenPoints(Vector2 v1, Vector2 v2)
{
    float distance;
    distance = sqrt(pow((v1.x - v2.x), 2) + pow((v1.y - v2.y), 2));
    return distance;
}

//TODO: Build Vector2 structure
//TODO: Write function to return distance between two Vector2s called GetDistanceBetweenPoints.

//You will need the Euclidean distance formula to complete this task. It is
//given in the article:
//
// - https://en.wikipedia.org/wiki/Euclidean_distance