#ifndef MUSICCONNECTMOBILEWIDGET_H
#define MUSICCONNECTMOBILEWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2018 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include <QWidget>
#include "musicglobaldefine.h"

class MusicAnimationStackedWidget;

/*! @brief The class of the connect mobile widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_TOOL_EXPORT MusicConnectMobileWidget : public QWidget
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicConnectMobileWidget)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicConnectMobileWidget(QWidget *parent = 0);

    ~MusicConnectMobileWidget();

private Q_SLOTS:
    /*!
     * Change to main widget.
     */
    void changeStatckedWidgetFirst();
    /*!
     * Change to wireless widget.
     */
    void changeStatckedWidgetSecond();
    /*!
     * Change to wire widget.
     */
    void changeStatckedWidgetThird();
    /*!
     * Open transfer files to mobile widget.
     */
    void openTransferFiles2Mobile();
    /*!
     * Open transfer files to wifi widget.
     */
    void openTransferFiles2Wifi();

protected:
    /*!
     * Override the widget event.
     */
    virtual void contextMenuEvent(QContextMenuEvent *event) override;
    /*!
     * Init main widget.
     */
    void initFirstWidget();
    /*!
     * Init connect to wireless widget.
     */
    void initSecondWidget();
    /*!
     * Init connect to wire widget.
     */
    void initThirdWidget();

    MusicAnimationStackedWidget *m_stackedWidget;

};

#endif // MUSICCONNECTMOBILEWIDGET_H
