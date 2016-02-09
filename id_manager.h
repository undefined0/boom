#ifndef ID_MANAGER_H
#define ID_MANAGER_H

#include "group.h"

namespace boom{
namespace basics{
    template<typename id_container_type> class id_manager
    {
    private:
        typedef typename id_container_type::value_type id_type;
        typedef typename id_container_type::iterator iterator_type;
        typedef typename id_container_type::const_iterator const_iterator_type;
        typedef typename id_container_type::insert_iterator insert_iterator_type;
        id_container_type released_ids;
        id_type size;
    public:
        void add_id( id_type _num );
        iterator_type rel_id( id_type _id );
        void replace_id( id_type _old_id, id_type _new_id );
    };

    id_type id_manager::add_id( id_type _num ) {
        assert( group::is_id_valid( _num ) );
        this->size += _num;
        assert( group::is_id_valid( this->size ) );
        return this->size;
    }
    iterator_type id_manager::rel_id( id_type _id ) {
        assert( group::is_id_valid( _id ) );
        return this->released_ids.insert( this->released_ids.begin(), _id );
    }

//    void id_manager::replace_id(id_type _old_id, id_type _new_id) {
//        std::
//    }
}
}





#endif /* IDS_H_ */
