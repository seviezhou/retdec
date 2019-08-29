/**
* @file src/llvmir2hll/hll/output_manager/plain_manager.cpp
* @brief Implementation of PlainOutputManager.
* @copyright (c) 2019 Avast Software, licensed under the MIT license
*/

#include "retdec/llvmir2hll/hll/output_managers/plain_manager.h"
#include "retdec/utils/string.h"

namespace retdec {
namespace llvmir2hll {

PlainOutputManager::PlainOutputManager(llvm::raw_ostream& out) :
        _out(out)
{

}

PlainOutputManager::~PlainOutputManager()
{

}

void PlainOutputManager::newLine(Address)
{
    _out << "\n";
}

void PlainOutputManager::space(const std::string& space, Address)
{
    _out << space;
}

void PlainOutputManager::punctuation(char p, Address)
{
    _out << p;
}

void PlainOutputManager::operatorX(const std::string& op, Address)
{
    _out << op;
}

void PlainOutputManager::variableId(const std::string& id, Address)
{
    _out << id;
}

void PlainOutputManager::memberId(const std::string& id, Address)
{
    _out << id;
}

void PlainOutputManager::labelId(const std::string& id, Address)
{
    _out << id;
}

void PlainOutputManager::functionId(const std::string& id, Address)
{
    _out << id;
}

void PlainOutputManager::parameterId(const std::string& id, Address)
{
    _out << id;
}

void PlainOutputManager::keyword(const std::string& k, Address)

{
    _out << k;
}

void PlainOutputManager::dataType(const std::string& t, Address)
{
    _out << t;
}

void PlainOutputManager::preprocessor(const std::string& p, Address)
{
    _out << p;
}

void PlainOutputManager::include(const std::string& i, Address)
{
    _out << "<" << i << ">";
}

void PlainOutputManager::constantBool(const std::string& c, Address)
{
    _out << c;
}

void PlainOutputManager::constantInt(const std::string& c, Address)
{
    _out << c;
}

void PlainOutputManager::constantFloat(const std::string& c, Address)
{
    _out << c;
}

void PlainOutputManager::constantString(const std::string& c, Address)
{
    _out << c;
}

void PlainOutputManager::constantSymbol(const std::string& c, Address)
{
    _out << c;
}

void PlainOutputManager::constantPointer(const std::string& c, Address)
{
    _out << c;
}

void PlainOutputManager::comment(const std::string& c, Address)
{
    _out << getCommentPrefix();
    if (!c.empty())
    {
        _out << " " << utils::replaceCharsWithStrings(c, '\n', " ");
    }
}

void PlainOutputManager::commentModifier(Address)
{
    _out << getCommentPrefix() << " ";
}

} // namespace llvmir2hll
} // namespace retdec