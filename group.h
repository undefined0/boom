#include <limits>
#include <cassert>

//definition of the additive group of elements of id_type
namespace boom{
    namespace group{
        // this is the main representation of the group element type, it can be change to any sensible type in the future
        // there should be no group element specialization beyond this point
        typedef int id_type;
        id_type null_element = -1;
        template <typename id_type> bool is_id_valid( id_type _id )
        {
            return (_id > std::numeric_limits<id_type>::min()) && (_id < std::numeric_limits<id_type>::max());
        }
        template <typename id_type> id_type invert_id( id_type _id )
        {
            id_type res = - _id + null_element;
            assert(is_id_valid(res));
            return res;
        }
        template <typename id_type> id_type operator+( id_type _id1, id_type _id2 )
        {
            id_type res = _id1 + _id2;
            assert(is_id_valid(res));
            return res;
        }
    }
}