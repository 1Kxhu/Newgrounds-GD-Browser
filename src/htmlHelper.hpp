#ifndef HTMLHELPER_HPP
#define HTMLHELPER_HPP

#include <string>
#include <Geode/Geode.hpp>
#include <Geode/utils/web.hpp>
#include <Geode/loader/Event.hpp>

using namespace geode::prelude;

namespace htmlHelper {
    extern CCMenu* NGTouchMenu;
    extern size_t numberOfSongsParsed;
    extern CCTextFieldTTF* vanillaSongIDTextField;
    extern CCLayerColor* NGTouchLayer;
    extern std::string m_responseTextHTML;
    extern EventListener<geode::utils::web::WebTask> m_webRequestTaskListener;
    extern geode::utils::web::WebTask currentWebTask;
    extern CCLabelBMFont* searchingLabel;

    // Function declarations
    gd::string ResolveLink(gd::string baseURL, gd::string searchQuery);
    std::string SearchFor(const std::string& content, const std::string& startString, const std::string& endString);
    std::string htmlStringToStandardString(std::string inputHtmlString);
    bool startsWithNumber(const std::string& inputString);
    void ParseLiElementIntoSong(std::string liElement);
    void ParseHTML(std::string htmlResponse);
    void ProcessSearchURL(gd::string constructedSearchURL);
}

#endif
