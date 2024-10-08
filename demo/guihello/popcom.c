/* PopUp and Combo */

#include "popcom.h"
#include "res_guihello.h"
#include <gui/guiall.h>

/*---------------------------------------------------------------------------*/

static void i_popups(Layout *layout)
{
    Label *label1 = label_create();
    Label *label2 = label_create();
    PopUp *popup1 = popup_create();
    PopUp *popup2 = popup_create();
    label_text(label1, "Language:");
    label_text(label2, "Color:");
    popup_add_elem(popup1, "English", gui_image(UKING_PNG));
    popup_add_elem(popup1, "Español", gui_image(SPAIN_PNG));
    popup_add_elem(popup1, "Portugues", gui_image(PORTUGAL_PNG));
    popup_add_elem(popup1, "Italiana", gui_image(ITALY_PNG));
    popup_add_elem(popup1, "Tiếng Việt", gui_image(VIETNAM_PNG));
    popup_add_elem(popup1, "России", gui_image(RUSSIA_PNG));
    popup_add_elem(popup1, "日本語", gui_image(JAPAN_PNG));
    popup_add_elem(popup2, "Red", gui_image(RED_PNG));
    popup_add_elem(popup2, "Blue", gui_image(BLUE_PNG));
    popup_add_elem(popup2, "Green", gui_image(GREEN_PNG));
    popup_add_elem(popup2, "Yellow", gui_image(YELLOW_PNG));
    popup_add_elem(popup2, "Black", gui_image(BLACK_PNG));
    popup_add_elem(popup2, "White", gui_image(WHITE_PNG));
    popup_list_height(popup1, 10);
    popup_list_height(popup2, 10);
    layout_label(layout, label1, 0, 0);
    layout_label(layout, label2, 0, 1);
    layout_popup(layout, popup1, 1, 0);
    layout_popup(layout, popup2, 1, 1);
}

/*---------------------------------------------------------------------------*/

static void i_combos(Layout *layout)
{
    Label *label1 = label_create();
    Label *label2 = label_create();
    Combo *combo1 = combo_create();
    Combo *combo2 = combo_create();
    label_text(label1, "Search:");
    label_text(label2, "Folder:");
    combo_add_elem(combo1, "Search", NULL);
    combo_add_elem(combo1, "Disk", NULL);
    combo_add_elem(combo1, "Edit", NULL);
    combo_add_elem(combo2, "/home/fran/Desktop", NULL);
    combo_add_elem(combo2, "/usr/include", NULL);
    combo_add_elem(combo2, "/mnt/volume1", NULL);
    combo_add_elem(combo2, "/etc/html/log.txt", NULL);
    layout_label(layout, label1, 2, 0);
    layout_label(layout, label2, 2, 1);
    layout_combo(layout, combo1, 3, 0);
    layout_combo(layout, combo2, 3, 1);
}

/*---------------------------------------------------------------------------*/

Panel *popup_combo(void)
{
    Panel *panel = panel_create();
    Layout *layout = layout_create(4, 2);
    i_popups(layout);
    i_combos(layout);
    layout_margin(layout, 10.f);
    layout_vmargin(layout, 0, 10.f);
    layout_hmargin(layout, 0, 5.f);
    layout_hmargin(layout, 1, 10.f);
    layout_hmargin(layout, 2, 5.f);
    layout_hsize(layout, 1, 150.f);
    layout_hsize(layout, 3, 150.f);
    panel_layout(panel, layout);
    return panel;
}
