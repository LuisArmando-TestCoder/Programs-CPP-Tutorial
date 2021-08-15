#pragma once

#ifndef head_h
    #define head_h

    namespace bank {
        class PiggyBank {
            private:
                uint32_t savings = 0;

            public:
                void addNewSavings(uint32_t newSavings) {
                    savings += newSavings;
                }

                uint32_t getSavings() {
                    return savings;
                }
        };
    }
#endif