#include "boxcontainer.h"

// template<>
// const char* BoxContainer<const char*>::get_max_index()const{
//     size_t max_item_index{0};
//     for(size_t i{0};i<m_size;++i){
//         if(std::strcmp(m_items[i],m_items[max_item_index])>0){
//             max_item_index=i;
//         }
//     }
//     return m_items[max_item_index];
// }