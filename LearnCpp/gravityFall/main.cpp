#include <iostream>

double getDouble()
{
    std::cout << "Enter height: ";
    double height{};
    std::cin >> height;

    return height;
}

void writeHeight(int second, double height)
{
    std::cout << "At " << second << " seconds, the ball is at height: "
              << height << " meters\n";
}

void ground(int second)
{
    std::cout << "At " << second << " seconds, the ball is on the ground.\n";
}

int main()
{
    double height{getDouble()};

    writeHeight(0, height);

    double gravity{9.8};
    double nowHeight;

    nowHeight = height - gravity / 2.0;
    if (nowHeight > 0)
    {

        writeHeight(1, nowHeight);
    }
    else
    {
        ground(1);
    }

    nowHeight = height - gravity * 2.0;
    if (nowHeight > 0)
    {

        writeHeight(2, nowHeight);
    }
    else
    {
        ground(2);
    }

    nowHeight = height - gravity * 4.5;
    if (nowHeight > 0)
    {
        writeHeight(3, nowHeight);
    }
    else
    {
        ground(3);
    }

    nowHeight = height - gravity * 8.0;
    if (nowHeight > 0)
    {
        writeHeight(4, nowHeight);
    }
    else
    {
        ground(4);
    }

    nowHeight = height - gravity * 12.5;
    if (nowHeight > 0)
    {

        writeHeight(5, nowHeight);
    }
    else
    {
        ground(5);
    }

    return 0;
}
