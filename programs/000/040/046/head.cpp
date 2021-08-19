#include <iostream>
#include <iterator>
#include <vector>

typedef ID std::string;
typedef Purpose std::string;

struct AI {
    Purpose purpose;
    ID id;
}

template<typename Element>
void eraseByIndex(std::vector<Element> *vector, int index)
{
	(*vector).erase(
        (*vector).begin() + index,
        (*vector).begin() + index + 1
    );
}

template<typename Element, typename Array>
bool getHavingElement(Element element, Array array, int size) {
    bool havingElement = false;

    for (int index = 0; index < size; index++) {
        havingElement = array[index] == element;

        if (havingElement) return havingElement;
    }

    return havingElement;
}

int getAIIndexById(ID id, AI AIs[], int size) {
    for (int index = 0; index < size; index++) {
        if (AIs[index].id == id) {
            return index;
        }
    }

    return -1;
}

int getIndexByPurpose(Purpose purpose, Purpose purposes[], int size) {
    for (int index = 0; index < size; index++) {
        if (purposes[index] == purpose) {
            return index;
        }
    }

    return -1;
}

bool getHavingIndex(int index, int size) {
    return index > 0 && index < size;
}

class AIFactory
{
private:
    std::vector<Purpose> designed;
    std::vector<Purpose> approved;
    std::vector<Purpose> rejected;
    std::vector<AI> ready;
    std::vector<AI> launched;
    std::vector<AI> vault;

    

    AI getPurposeID(Purpose purpose) {
        // from Purpose
    }

public:
    
    Purpose getDesigned(int index) {
        if (getHavingIndex(index, std::size(designed))) {
            return designed[index];
        }
    }

    Purpose getApproved(int index) {
        if (getHavingIndex(index, std::size(approved))) {
            return approved[index];
        }
    }

    Purpose getRejected(int index) {
        if (getHavingIndex(index, std::size(rejected))) {
            return rejected[index];
        }
    }

    AI getReady(int index) {
        if (getHavingIndex(index, std::size(ready))) {
            return ready[index].id;
        }
    }

    AI getLaunched(int index) {
        if (getHavingIndex(index, std::size(launched))) {
            return launched[index].id;
        }
    }

    AI getVault(int index) {
        if (getHavingIndex(index, std::size(vault))) {
            return vault[index].id;
        }
    }

    void sendToLaunched(ID id)
    {
        int readyIndex = getAIIndexById(id, ready, std::size(ready));
        AI ai = ready[readyIndex];

        launched.push_back(ai);

        eraseByIndex(&ready, purposeIndex);
    }

    void sendToVault(ID id)
    {
        // from ready, launched
        

        // delete from ready, launched
    }

    template<typename Element>
    std::vector<Element> getStage(std::string stageName) {
        if (stage == "design") {
           return designed;
        } else if (stage == "approve") {
           return approved;
        } else if (stage == "reject") {
           return rejected;
        } else if (stage == "ready") {
           return ready;
        } else if (stage == "launch") {
           return launched;
        } else if (stage == "vault") {
           return vault;
        }
    }

    // for approved and rejected
    void reviewDesign(Purpose purpose, std::string stageName) {
        std::vector<Purpose> stage = getStage(stageName);

        if (stage) {
            // from designed
            int purposeIndex = getIndexByPurpose(id, designed, std::size(designed));

            Purpose purpose = designed[purposeIndex];

            stage.push_back(purpose);

            // delete designed
            eraseByIndex(&designed, purposeIndex);
        }
    }

    void designAI(Purpose purpose)
    {
        // to designed with purpose that is not in vault, rejected, launched, ready, approved, designed
    }

    ID createAI(ID id)
    {
        // to ready (with a hash) from approved
    }

    AIFactory()
    {
        std::cout << "AIFactory has been found" << std::endl;
    }

    ~AIFactory()
    {
        std::cout << "AIFactory has been deleted" << std::endl;
    }
};
