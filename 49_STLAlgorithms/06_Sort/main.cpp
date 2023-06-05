#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

template <typename T>
void print_collection(const T &collection)
{
    std::cout << "Collection [";
    for (const auto &elt : collection)
    {
        std::cout << " " << elt;
    }
    std::cout << "]" << std::endl;
}

class Book
{
    friend std::ostream &operator<<(std::ostream &out, const Book &operand);

public:
    Book(int year, string title) : m_year(year), m_title(title)
    {
    }
    bool operator<(const Book &right_operand) const
    {
        return this->m_year < right_operand.m_year;
    }
    bool operator>(const Book &right_operand) const
    {
        return this->m_year > right_operand.m_year;
    }
    bool operator==(const Book &right_operand) const
    {
        return this->m_year == right_operand.m_year;
    }

public:
    int m_year;
    string m_title;
};

std::ostream &operator<<(std::ostream &out, const Book &operand)
{
    out << "Book [" << operand.m_year << ", " << operand.m_title << "]";
    return out;
}

int main()
{

    /* code */
    // Directly without predicate
    std::vector<int> collection = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

    std::cout << "collection(unsorted) : ";
    print_collection(collection);

    // std::sort(std::begin(collection), std::end(collection));
    //  std::sort(std::begin(collection), std::end(collection), std::less<int>());
    std::sort(std::begin(collection), std::end(collection), std::greater<int>());
    // std::sort(std::begin(collection), std::end(collection), [](int x, int y){ return x < y; });

    std::cout << "collection(sorted) : ";
    print_collection(collection);

    // Sorting collections of custom items
    std::vector<Book> books{Book(1734, "Cooking Food"),
                            Book(2000, "Building Computers"),
                            Book(1995, "Farming for Beginners")};

    std::cout << "books (before sort) : " << std::endl;
    print_collection(books);

    // Specify a lambda function for comparison
    auto cmp = [](const Book &book1, const Book &book2)
    {
        return (book1.m_year < book2.m_year);
    };

    std::sort(std::begin(books), std::end(books), cmp);
    // std::sort(std::begin(books), std::end(books), std::less<Book>());
    // std::sort(std::begin(books), std::end(books), std::greater<Book>());

    std::cout << "books (after sort) : " << std::endl;
    print_collection(books);

    return 0;
}