#ifndef STYLES_H
#define STYLES_H

#include <QString>
#include <QPixmap>
#include <QSvgRenderer>
#include <QPainter>

const QString QMSSGEBOX_STYLE =
    "QMessageBox { background-color: #2E3440; border-radius: 10px; }"
    "QMessageBox QLabel {background-color: #2E3440; color: white; font-size: 14px; }"
    "QMessageBox QPushButton { background-color: #88C0D0; color: black; font-weight: bold; border: 1px solid #5E81AC; border-radius: 5px; padding: 5px 10px; }"
    "QMessageBox QPushButton:hover { background-color: #81A1C1; }"
    "QMessageBox QPushButton:pressed { background-color: #5E81AC; }";

const QString baseStyle = "QPushButton { color: black; border: none; font: 28pt 'Bangers'; border: none; }"
                          "QPushButton:hover { color: #c97940; }";

const QString active_baseStyle = "QPushButton { color: #c97940; border: none; font: 28pt 'Bangers'; border: none; }";
const QString  user_level_1 = "QPushButton { color:  #4fee93; border: none; font: 28pt 'Bangers'; border: none; }"
                           "QPushButton:hover { color: #c97940; }";
const QString  user_level_0 = "QPushButton { color: rgb(170, 0, 0); border: none; font: 28pt 'Bangers'; border: none; }"
                             "QPushButton:hover { color: #c97940; }";


inline QPixmap getTomanIcon(int width = 100, int height = 100) {
    QPixmap pixmap(width, height);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
        QString svgCode = R"(
<svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="195 77 358 360" xmlns:v="https://vecta.io/nano"><path d="M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z" fill="#da0000"/><path d="M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36.2-12.1 45.4z" fill="#fff"/><path d="M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z" fill="#239f40"/><g fill="#fff"><path d="M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z"/><path d="M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z"/><use xlink:href="#B"/><path d="M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z"/><use xlink:href="#B" y="140.3"/><path d="M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z"/><use xlink:href="#C"/><path d="M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z"/><use xlink:href="#C" y="140.3"/><path d="M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z"/><use xlink:href="#D"/><path d="M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z"/><use xlink:href="#D" y="140.3"/><path d="M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z"/><path d="M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z"/></g><g fill="#da0000"><path d="M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2.1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z"/><path d="M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z"/><path d="M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z"/></g><defs ><path id="B" d="M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z"/><path id="C" d="M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z"/><path id="D" d="M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z"/></defs></svg>

    )";
    QSvgRenderer renderer(svgCode.toUtf8());
    renderer.render(&painter);
    return pixmap;
}
inline QPixmap getTetherIcon(int width = 100, int height = 100) {
    QPixmap pixmap(width, height);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
    QString svgCode = R"(
        <svg xmlns="http://www.w3.org/2000/svg" width="50" height="50" viewBox="0 0 50 50"><g transform="translate(-0.056 -0.056) "><circle cx="25" cy="25" r="25" transform="translate(0.056 0.056) " fill="#fff"/><g transform="translate(2.538 7.307) "><path d="M8.249.192.039,17.437a.334.334,0,0,0,.072.39L22.284,39.074a.338.338,0,0,0,.468,0L44.925,17.829a.334.334,0,0,0,.072-.39L36.787.194a.332.332,0,0,0-.3-.194H8.554a.332.332,0,0,0-.305.192h0Z" transform="translate(0) " fill="#50af95" fill-rule="evenodd"/><path d="M80.968,54.1h0c-.159.012-.982.061-2.816.061-1.459,0-2.5-.044-2.859-.061h0c-5.639-.248-9.848-1.23-9.848-2.405s4.209-2.156,9.848-2.408v3.835c.369.027,1.425.089,2.884.089,1.751,0,2.628-.073,2.786-.088V49.292c5.627.251,9.827,1.232,9.827,2.405s-4.2,2.154-9.827,2.4h0Zm0-5.207V45.463h7.853V40.23H67.44v5.233h7.852v3.43c-6.382.293-11.181,1.557-11.181,3.072s4.8,2.778,11.181,3.072v11h5.675v-11c6.367-.293,11.159-1.556,11.159-3.07s-4.787-2.776-11.159-3.071h0Zm0,0Z" transform="translate(-55.601 -34.894) " fill="#fff" fill-rule="evenodd"/></g></g></svg>
    )";
    QSvgRenderer renderer(svgCode.toUtf8());
    renderer.render(&painter);
    return pixmap;
}
inline QPixmap getBitcoinIcon(int width = 100, int height = 100) {
    QPixmap pixmap(width, height);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
    QString svgCode = R"(
            <svg xmlns="http://www.w3.org/2000/svg" width="50" height="50" viewBox="0 0 50 50"><circle cx="25" cy="25" r="25" fill="#f7931a"/><path d="M31.644,18.531c.491-3.275-2-5.036-5.414-6.211l1.106-4.437-2.7-.672-1.078,4.32c-.709-.178-1.437-.344-2.164-.509L22.48,6.673,19.78,6l-1.106,4.436c-.588-.134-1.166-.266-1.725-.406l0-.014-3.725-.93-.719,2.884s2,.459,1.963.488a1.437,1.437,0,0,1,1.258,1.572L14.47,19.084a2.4,2.4,0,0,1,.281.089l-.286-.07L12.7,26.184a.985.985,0,0,1-1.239.641c.028.039-1.962-.489-1.962-.489L8.157,29.427l3.516.877c.653.164,1.294.336,1.923.5l-1.117,4.487,2.7.672,1.106-4.437c.737.2,1.453.383,2.153.558l-1.1,4.419,2.7.672,1.117-4.478c4.606.872,8.069.52,9.527-3.645,1.175-3.353-.058-5.289-2.481-6.55a4.305,4.305,0,0,0,3.448-3.966Zm-6.172,8.653c-.833,3.355-6.481,1.541-8.312,1.086l1.484-5.945C20.476,22.783,26.346,23.688,25.473,27.184Zm.836-8.7c-.761,3.052-5.461,1.5-6.984,1.12l1.344-5.391c1.523.38,6.434,1.087,5.641,4.27Z" transform="translate(4.588 3.375) " fill="#fff"/></svg>
    )";
    QSvgRenderer renderer(svgCode.toUtf8());
    renderer.render(&painter);
    return pixmap;
}
inline QPixmap getEthereumIcon(int width = 100, int height = 100) {
    QPixmap pixmap(width, height);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
    QString svgCode = R"(
            <svg xmlns="http://www.w3.org/2000/svg" width="50" height="50" viewBox="0 0 50 50"><circle cx="25" cy="25" r="25" fill="#d9d9d9"/><path d="M1092.594,652,1080,672.919l12.594,7.482,12.515-7.482ZM1080,675.413l12.594,7.4,12.515-7.4-12.515,17.781Z" transform="translate(-1067.446 -647.488) " fill="#828384" fill-rule="evenodd"/><path d="M1144.2,680.353V652l12.48,20.859Zm12.438-4.913L1144.2,693.194V682.847Z" transform="translate(-1119.052 -647.488) " fill="#2f3030" fill-rule="evenodd"/><path d="M1092.594,729.93,1080,735.562l12.594,7.482,12.515-7.482Z" transform="translate(-1067.446 -710.132) " fill="#131313" fill-rule="evenodd" opacity="0.8"/></svg>
    )";
    QSvgRenderer renderer(svgCode.toUtf8());
    renderer.render(&painter);
    return pixmap;
}
inline QPixmap getTonIcon(int width = 100, int height = 100) {
    QPixmap pixmap(width, height);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
    QString svgCode = R"(
        <svg xmlns="http://www.w3.org/2000/svg" width="50" height="50" viewBox="0 0 50 50"><circle cx="25" cy="25" r="25" fill="#eb0029"/><path d="M34.164,15.228c-1.248-.886-2.584-1.831-3.891-2.769-.03-.022-.058-.044-.094-.066a1.75,1.75,0,0,0-.513-.292l-.016-.008Q24.41,10.808,19.17,9.51L9.819,7.2l-.245-.066a2.374,2.374,0,0,0-.953-.125.658.658,0,0,0-.266.1l-.087.073a1.078,1.078,0,0,0-.245.4L8,7.642v.336l.016.052c1.969,5.6,3.991,11.284,5.941,16.783,1.5,4.234,3.063,8.619,4.584,12.925a.766.766,0,0,0,.694.512h.072a.811.811,0,0,0,.722-.4l5.719-8.458q2.088-3.087,4.18-6.18l1.711-2.534c.937-1.391,1.906-2.827,2.867-4.225l.05-.072v-.089a1.117,1.117,0,0,0-.391-1.063m-6.7,3.084c-1.344.709-2.714,1.442-4.094,2.167l2.413-2.622c1-1.1,2.05-2.234,3.075-3.347l.022-.022a3.253,3.253,0,0,1,.311-.344c.078-.08.166-.161.245-.256.534.375,1.075.755,1.6,1.128q.563.405,1.148.813-2.366,1.226-4.716,2.483m-3.45-.352c-1.033,1.134-2.1,2.3-3.163,3.448q-3.088-3.8-6.2-7.586l-2.78-3.391-.006-.008c-.209-.241-.412-.5-.614-.753-.13-.169-.267-.33-.4-.5.837.219,1.683.425,2.512.622.73.177,1.488.359,2.231.55l12.57,3.1c-1.394,1.509-2.8,3.039-4.152,4.519M20.381,32.231c.08-.769.167-1.559.239-2.336.066-.623.13-1.259.2-1.867.1-.975.209-1.984.3-2.973l.02-.175c.072-.631.144-1.281.188-1.934a2.156,2.156,0,0,1,.261-.125,3.094,3.094,0,0,0,.323-.159q2.5-1.333,5.011-2.652c1.669-.878,3.38-1.787,5.077-2.687q-2.309,3.392-4.6,6.8c-1.292,1.909-2.62,3.88-3.942,5.82-.519.777-1.061,1.567-1.573,2.328-.578.85-1.17,1.72-1.747,2.594.072-.88.158-1.766.252-2.63M10.319,10.9c-.094-.264-.2-.534-.283-.791,1.95,2.387,3.913,4.789,5.827,7.117.989,1.208,1.978,2.409,2.967,3.625.2.227.391.469.578.7.245.3.491.616.758.916-.087.753-.159,1.516-.239,2.247-.05.512-.1,1.027-.158,1.547v.006c-.022.328-.066.659-.1.981L19.5,28.71l-.008.05c-.13,1.48-.289,2.973-.441,4.423-.064.6-.122,1.216-.187,1.831-.036-.109-.078-.22-.116-.323q-.165-.448-.317-.9l-.773-2.175L10.317,10.9" transform="translate(4.5 3.937) " fill="#fff"/></svg>
)";
    QSvgRenderer renderer(svgCode.toUtf8());
    renderer.render(&painter);
    return pixmap;
}
const QString table_mywallet =
                                "    QTableWidget {"
                                "    background-color: #2980b9;"
                                "    color: white;"
                                "    font-family: Arial, sans-serif;"
                                "    font-size: 14px;"
                                "    border: none;"
                                "    gridline-color: #34495e;"
                                "}"
                                "QHeaderView::section {"
                                "    background-color: #34495e;"
                                "    color: white;"
                                "    font-weight: bold;"
                                "    font-size: 16px;"
                                "    padding: 8px;"
                                "    border: none;"
                                "}"
                                "QTableWidget::item {"
                                "    background-color: #2980b9;"
                                "    border: none;"
                                "    padding: 10px;"
                                "    font-size: 14px;"
                                "}"
                                "QTableWidget::item:selected {"
                                "    color: white;"
                                "    border: none;"
                                "}"
                                "QPushButton {"
                                "    background-color: #85fe87;"
                                "    color: black;"
                                "    border: none;"
                                "    padding: 8px 6px;"
                                "    border-radius: 5px;"
                                "    font-size: 14px;"
                                "    margin: 0px 56px;"
                                "}"
                                "QPushButton:hover {"
                                "    background-color: #70e16d;"
                                "}";
const QString table_walletdetails =
                                "QTableWidget {"
                                "    background-color: #1e2026;"
                                "    color: white;"
                                "    font-family: Arial, sans-serif;"
                                "    font-size: 14px;"
                                "    border: none;"
                                "    gridline-color: #34495e;"
                                "}"
                                "QHeaderView::section {"
                                "    background-color: #4c505b;"
                                "    color: white;"
                                "    font-weight: bold;"
                                "    font-size: 16px;"
                                "    padding: 8px;"
                                "    border: none;"
                                "}"
                                "QTableWidget::item {"
                                "    background-color: #1e2026;"
                                "    border: none;"
                                "    padding: 9px;"
                                "    font-size: 14px;"
                                "}"
                                "QTableWidget::item:selected {"
                                "    color: white;"
                                "    border: none;"
                                "}"
                                "QPushButton {"
                                "    background-color: #109a91;"
                                "    color: black;"
                                "    border: none;"
                                "    padding: 8px 6px;"
                                "    border-radius: 5px;"
                                "    font-size: 14px;"
                                "}";
inline QPixmap getproficon(int width = 100, int height = 100) {
    QPixmap pixmap(width, height);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
    QString svgCode = R"(
<svg fill="#9f7ef1" version="1.1" id="Capa_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 45.532 45.532" xml:space="preserve"><g id="SVGRepo_bgCarrier" stroke-width="0"></g><g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"></g><g id="SVGRepo_iconCarrier"> <g> <path d="M22.766,0.001C10.194,0.001,0,10.193,0,22.766s10.193,22.765,22.766,22.765c12.574,0,22.766-10.192,22.766-22.765 S35.34,0.001,22.766,0.001z M22.766,6.808c4.16,0,7.531,3.372,7.531,7.53c0,4.159-3.371,7.53-7.531,7.53 c-4.158,0-7.529-3.371-7.529-7.53C15.237,10.18,18.608,6.808,22.766,6.808z M22.761,39.579c-4.149,0-7.949-1.511-10.88-4.012 c-0.714-0.609-1.126-1.502-1.126-2.439c0-4.217,3.413-7.592,7.631-7.592h8.762c4.219,0,7.619,3.375,7.619,7.592 c0,0.938-0.41,1.829-1.125,2.438C30.712,38.068,26.911,39.579,22.761,39.579z"></path> </g> </g></svg>

    )";
    QSvgRenderer renderer(svgCode.toUtf8());
    renderer.render(&painter);
    return pixmap;
}

#endif
