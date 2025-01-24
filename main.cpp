// #include <iostream>
// using namespace std;
// int main() {
//     //prob 1
//     string name;
//     int age;
//     std::cout << "Please,enter your name. Your name:";
//     std::cin >> name;
//     std::cout << "ok," << name <<" ! How old are you??" << std::endl;
//     std::cout << " Enter your age:";
//     std::cin >> age;
//     std::cout << endl << "You are "<< name << " and you are "<<age<<" years old";
//     return 0;
// }


// //prob 2
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main () {
//     for (int i = 1; i <= 5; i++) {
//         std::cout << std::setw(5) << i << std::endl;
//     }
//     return 0;
// }



// #include <iostream>
// #include <iomanip>
//
// using namespace std;
//
// int main() {
//     int x, y;
//
//
//     cout << "Enter the first number: ";
//     cin >> x;
//     cout << "Enter the second number: ";
//     cin >> y;
//
//
//     int temp = x;
//     x = y;
//     y = temp;
//
//
//     cout << fixed << setprecision(0);
//     cout << "After swapping:\n";
//     cout << "First number: " << x << "\n";
//     cout << "Second number: " << y << "\n";
//
//     return 0;
// }

//prob 4

// #include <iostream>
// #include <iomanip>
// using namespace std;
//
// int main() {
//     int n;
//
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; ++i) {
//         cout << setw(10) << i << setw(10) << i * i << endl;
//     }
//     return 0;
// }

//porb 5

#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int width = 50;
    int padding = (width - input.length()) / 2;


    std::cout << std::setw(padding + input.length()) << std::right
              << std::setw(width) << input << std::endl;

    return 0;
}

