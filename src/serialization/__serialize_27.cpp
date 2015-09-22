
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#if defined SERIALIZATION_ENABLED
#include "../global.h"

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/version.hpp>

#include "../impurities/classificationerror.h"
#include "./_serialization_definition.h"

namespace fertilized {
  template <class Archive>
  void __serialization_register_27(Archive &ar,
                                          const bool &always_register,
                                          const unsigned int &serialization_library_version) {
    if (0 > FERTILIZED_LIB_VERSION()) {
        throw Fertilized_Exception("The serialization generation of the class "
          "ClassificationError is higher than the current library version "
          "(0 > " + std::to_string(FERTILIZED_LIB_VERSION()) +
          ")! This will break serialization! Raise the library version in the file "
          "'global.h' to at least 0!");
    }
    if (always_register ||
        serialization_library_version >= 0) {
      ar.template register_type<ClassificationError<
              float
	  >>();
    }
  };
  TemplateFuncExport DllExport void __serialization_register_27(
      boost::archive::text_iarchive &ar,
      const bool &always_register,
      const unsigned int &serialization_library_version);
  TemplateFuncExport DllExport void __serialization_register_27(
      boost::archive::text_oarchive &ar,
      const bool &always_register,
      const unsigned int &serialization_library_version);

    TemplateFuncExport DllExport std::string serialize(const ClassificationError<
              float
	  > *, const bool &);
    TemplateFuncExport DllExport ClassificationError<
              float
	  >* deserialize(std::stringstream &);
    TemplateFuncExport DllExport void deserialize(std::stringstream &, ClassificationError<
              float
	  >*);
}  // namespace fertilized

// For types, etc.
using namespace fertilized;
namespace boost {
namespace serialization {

template <>
struct version<ClassificationError<
              float
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