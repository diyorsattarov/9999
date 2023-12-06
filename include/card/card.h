
enum class CardValue {
    Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace
};

enum class CardSuit {
    Hearts, Diamonds, Clubs, Spades
};

class Card {
private:
    CardValue value;
    CardSuit suit;
public:
    Card(CardValue value, CardSuit suit);
    CardValue getValue() const;
    CardSuit getSuit() const;
    bool operator==(const Card& other) const;
    bool operator!=(const Card& other) const;
};