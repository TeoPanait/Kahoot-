#ifndef QUESTION_H
#define QUESTION_H

#include <string>


class question {
    std::string QuestionText;
    const int QuestionScore = 10;

public:
    explicit question(std::string text);
    friend class SingleChoiceQuiz;

    friend std::ostream& operator<<(std::ostream& os, const question& q);
};






#endif //QUESTION_H
