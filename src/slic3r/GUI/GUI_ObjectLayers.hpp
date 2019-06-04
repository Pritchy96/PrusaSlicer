#ifndef slic3r_GUI_ObjectLayers_hpp_
#define slic3r_GUI_ObjectLayers_hpp_

#include "GUI_ObjectSettings.hpp"
#include "wxExtensions.hpp"

class wxBoxSizer;

namespace Slic3r {
class ModelObject;

namespace GUI {
class ConfigOptionsGroup;

class ObjectLayers : public OG_Settings
{
    ScalableBitmap  m_bmp_delete;
    ScalableBitmap  m_bmp_add;
    ModelObject*    m_object {nullptr};

    wxFlexGridSizer*            m_grid_sizer;

public:
    ObjectLayers(wxWindow* parent);
    ~ObjectLayers() {}

    wxSizer*    create_layer_without_buttons(const std::map<std::pair<coordf_t, coordf_t>, DynamicPrintConfig>::value_type& layer);
    void        create_layer(int id);
    void        create_layers_list();
    void        update_layers_list();

    void        UpdateAndShow(const bool show) override;
    void        msw_rescale();
};

}}

#endif // slic3r_GUI_ObjectLayers_hpp_
