
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#if defined SERIALIZATION_ENABLED
#include "../global.h"

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/version.hpp>

#include "../objecttemplate.h"
#include "./_serialization_definition.h"

namespace fertilized {
  template <class Archive>
  void __serialization_register_257(Archive &ar,
                                          const bool &always_register,
                                          const unsigned int &serialization_library_version) {
    if (100 > FERTILIZED_LIB_VERSION()) {
        throw Fertilized_Exception("The serialization generation of the class "
          "ObjectTemplate is higher than the current library version "
          "(100 > " + std::to_string(FERTILIZED_LIB_VERSION()) +
          ")! This will break serialization! Raise the library version in the file "
          "'global.h' to at least 100!");
    }
    if (always_register ||
        serialization_library_version >= 100) {
      ar.template register_type<ObjectTemplate<
              int,
              int,
              uint,
              std::vector<float>,
              std::vector<float>
	  >>();
    }
  };
  TemplateFuncExport DllExport void __serialization_register_257(
      boost::archive::text_iarchive &ar,
      const bool &always_register,
      const unsigned int &serialization_library_version);
  TemplateFuncExport DllExport void __serialization_register_257(
      boost::archive::text_oarchive &ar,
      const bool &always_register,
      const unsigned int &serialization_library_version);

    TemplateFuncExport DllExport std::string serialize(const ObjectTemplate<
              int,
              int,
              uint,
              std::vector<float>,
              std::vector<float>
	  > *, const bool &);
    TemplateFuncExport DllExport ObjectTemplate<
              int,
              int,
              uint,
              std::vector<float>,
              std::vector<float>
	  >* deserialize(std::stringstream &);
    TemplateFuncExport DllExport void deserialize(std::stringstream &, ObjectTemplate<
              int,
              int,
              uint,
              std::vector<float>,
              std::vector<float>
	  >*);
}  // namespace fertilized

// For types, etc.
using namespace fertilized;
namespace boost {
namespace serialization {

template <>
struct version<ObjectTemplate<
              int,
              int,
              uint,
              std::vector<float>,
              std::vector<float>
	  >> {
    typedef mpl::int_<FERTILIZED_VERSION_COUNT> type;
    typedef mpl::integral_c_tag tag;
    BOOST_STATIC_CONSTANT(int, value = version::type::value);
    BOOST_MPL_ASSERT((
        boost::mpl::less<
            boost::mpl::int_<FERTILIZED_VERSION_COUNT>,
            boost::mpl::int_<256>
        >
    ));
};
}
}

#endif  // SERIALIZATION_ENABLED