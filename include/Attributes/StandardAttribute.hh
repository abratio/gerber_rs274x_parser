#ifndef _STANDARD_ATTRIBUTE_H
#define _STANDARD_ATTRIBUTE_H

#include "Attributes/Attribute.hh"
#include "Util/ValueWithLocation.hh"

#include <string>

class StandardAttribute : public Attribute {
public:
	enum class StandardAttributeType {
		STANDARD_ATTRIBUTE_INVALID,
		STANDARD_ATTRIBUTE_PART,
		STANDARD_ATTRIBUTE_FILE_FUNCTION,
		STANDARD_ATTRIBUTE_FILE_POLARITY,
		STANDARD_ATTRIBUTE_SAME_COORDINATES,
		STANDARD_ATTRIBUTE_CREATION_DATE,
		STANDARD_ATTRIBUTE_GENERATION_SOFTWARE,
		STANDARD_ATTRIBUTE_PROJECT_ID,
		STANDARD_ATTRIBUTE_MD5,
		STANDARD_ATTRIBUTE_APER_FUNCTION,
		STANDARD_ATTRIBUTE_DRILL_TOLERANCE,
		STANDARD_ATTRIBUTE_FLASH_TEXT,
		STANDARD_ATTRIBUTE_NET,
		STANDARD_ATTRIBUTE_PIN_NUMBER,
		STANDARD_ATTRIBUTE_PIN_FUNCTION,
		STANDARD_ATTRIBUTE_COMPONENT
	};

	StandardAttribute(ValueWithLocation<std::string> name, StandardAttributeType type);
	virtual ~StandardAttribute();

	StandardAttributeType get_type();

private:
	StandardAttributeType m_type;
};

#endif // _STANDARD_ATTRIBUTE_H
