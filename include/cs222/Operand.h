#ifndef CS222_OPERAND_H
#define CS222_OPERAND_H

#include <string>

namespace cs222 {
    class Operand {
        public:
            enum Type {
                NONE,
                SYMBOL,
                ADDRESS,
                LITERAL,
                STR_CONSTANT,
                HEX_CONSTANT,
                REGISTER,
                NUMBER,
                LOCCTR
            };
            Operand();
            Operand(const Type& type, const std::string& value = "");
            Type getType() const;
            std::string getValue() const;
        private:
            Type type;
            std::string value;
    };
}

#endif
