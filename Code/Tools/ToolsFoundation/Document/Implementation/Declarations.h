#pragma once

class ezDocument;
class ezDocumentManager;
class ezDocumentObjectManager;
class ezAbstractObjectGraph;

struct EZ_TOOLSFOUNDATION_DLL ezDocumentTypeDescriptor
{
  ezHybridArray<ezString, 4> m_sFileExtensions;
  ezString m_sDocumentTypeName;
  bool m_bCanCreate;
  ezString m_sIcon;
};

struct ezDocumentEvent
{
  enum class Type
  {
    ModifiedChanged,
    ReadOnlyChanged,
    EnsureVisible,
    DocumentSaved,
    DocumentStatusMsg,
  };

  Type m_Type;
  const ezDocument* m_pDocument;

  const char* m_szStatusMsg;
};

class EZ_TOOLSFOUNDATION_DLL ezDocumentInfo : public ezReflectedClass
{
  EZ_ADD_DYNAMIC_REFLECTION(ezDocumentInfo, ezReflectedClass);

public:
  ezDocumentInfo();

  ezUuid m_DocumentID;
};

