#ifndef ICONS_H
#define ICONS_H

#include <map>
#include <string>

const std::map<std::string, std::string> FILE_TYPE_ICONS = {
    // Programming Languages
    {".c", "📄"},
    {".cpp", "📄"},
    {".h", "📄"},
    {".hpp", "📄"},
    {".py", "🐍"},
    {".js", "🟨"},
    {".ts", "🔷"},
    {".java", "☕"},
    {".cs", "🟩"},
    {".rb", "💎"},
    {".php", "🐘"},
    {".swift", "🍎"},
    {".go", "🐹"},
    {".rs", "🦀"},
    {".lua", "🌙"},
    {".pl", "🐪"},
    {".scala", "🔶"},
    {".kt", "🟪"},
    {".dart", "🎯"},

    // Web Development
    {".html", "🌐"},
    {".css", "🎨"},
    {".sass", "🎨"},
    {".scss", "🎨"},
    {".less", "🎨"},
    {".jsx", "⚛️"},
    {".tsx", "⚛️"},
    {".vue", "🟩"},
    {".angular", "🅰️"},

    // Markup and Data
    {".md", "📝"},
    {".json", "📦"},
    {".xml", "📰"},
    {".yaml", "🗂️"},
    {".yml", "🗂️"},
    {".toml", "⚙️"},
    {".ini", "⚙️"},
    {".csv", "📊"},

    // Documents
    {".pdf", "📕"},
    {".doc", "📘"},
    {".docx", "📘"},
    {".xls", "📗"},
    {".xlsx", "📗"},
    {".ppt", "📙"},
    {".pptx", "📙"},
    {".txt", "📄"},
    {".rtf", "📄"},
    {".odt", "📄"},
    {".ods", "📗"},
    {".odp", "📙"},

    // Images
    {".jpg", "🖼️"},
    {".jpeg", "🖼️"},
    {".png", "🖼️"},
    {".gif", "🎭"},
    {".bmp", "🖼️"},
    {".svg", "🔷"},
    {".tiff", "🖼️"},
    {".ico", "🏞️"},

    // Audio
    {".mp3", "🎵"},
    {".wav", "🎵"},
    {".ogg", "🎵"},
    {".flac", "🎼"},
    {".aac", "🎵"},
    {".m4a", "🎵"},

    // Video
    {".mp4", "🎬"},
    {".avi", "🎬"},
    {".mkv", "🎥"},
    {".mov", "🎥"},
    {".wmv", "🎥"},
    {".flv", "🎞️"},

    // Executables and Binaries
    {".exe", "⚙️"},
    {".out", "⚙️"},
    {".app", "📱"},
    {".dll", "🔧"},
    {".so", "🔧"},
    {".bin", "💾"},

    // Archives
    {".zip", "🗜️"},
    {".rar", "🗜️"},
    {".7z", "🗜️"},
    {".tar", "📦"},
    {".gz", "📦"},
    {".bz2", "📦"},

    // System and Config
    {".sys", "💻"},
    {".config", "⚙️"},
    {".conf", "⚙️"},
    {".log", "📜"},

    // Fonts
    {".ttf", "🔤"},
    {".otf", "🔤"},
    {".woff", "🔤"},
    {".woff2", "🔤"},

    // 3D and CAD
    {".obj", "🧊"},
    {".stl", "🧊"},
    {".fbx", "🧊"},
    {".blend", "🧊"},
    {".dxf", "📐"},
    {".dwg", "📐"},

    // Database
    {".sql", "🗄️"},
    {".db", "🗄️"},
    {".sqlite", "🗄️"},

    // Version Control
    {".git", "🔀"},
    {".gitignore", "👁️‍🗨️"},

    // Misc
    {".bak", "🔙"},
    {".tmp", "🕐"},
    {".swp", "💱"},

    // Default
    {"", "📎"}
};

const std::string FOLDER_ICON = "📁";

#endif // ICONS_H