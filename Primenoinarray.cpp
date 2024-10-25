#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // If divisible by any number other than 1 and itself, it's not prime
    }
    return true;
}

// Function to find prime numbers in an array
vector<int> findPrimes(const vector<int>& arr) {
    vector<int> primes;
    for (int num : arr) {
        if (isPrime(num)) {
            primes.push_back(num); // Add to list if number is prime
        }
    }
    return primes;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> primes = findPrimes(arr);

    cout << "Prime numbers in the array are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
