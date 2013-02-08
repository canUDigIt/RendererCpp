#ifndef UNIFORMBLOCK_H
#define UNIFORMBLOCK_H

#include "UniformBlockMember.h"

#include <string>
#include <map>

#include <boost/shared_ptr.hpp>

struct UniformBlock
{
    UniformBlock( const std::string& name, int sizeInBytes )
        : Name( name )
        , SizeInBytes( sizeInBytes )
        , Members( new UniformBlockMemberCollection() )
    {
    }

    std::string Name;
    int SizeInBytes;
    boost::shared_ptr<UniformBlockMemberCollection> Members;
};

typedef std::map< std::string, UniformBlock > UniformBlockCollection;

#endif // !UNIFORMBLOCK_H
