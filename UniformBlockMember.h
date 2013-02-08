#ifndef UNIFORMBLOCKMEMBER_H
#define UNIFORMBLOCKMEMBER_H

#include "UniformType.h"

#include <string>
#include <map>

struct UniformBlockMember
{
    UniformBlockMember( const std::string& name, UniformType type, int offsetInBytes )
        : Name( name )
        , DataType( type )
        , OffsetInBytes( offsetInBytes )
    {
    }

    std::string Name;
    UniformType DataType;
    int OffsetInBytes;
};

typedef std::map< std::string, UniformBlockMember > UniformBlockMemberCollection; 

#endif // !UNIFORMBLOCKMEMBER_H
