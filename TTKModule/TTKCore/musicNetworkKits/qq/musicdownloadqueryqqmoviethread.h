#ifndef MUSICDOWNLOADQUERYQQMOVIETHREAD_H
#define MUSICDOWNLOADQUERYQQMOVIETHREAD_H

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

#include "musicdownloadqqinterface.h"
#include "musicdownloadquerymoviethread.h"

/*! @brief The class to qq mv query download data from net.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_NETWORK_EXPORT MusicDownLoadQueryQQMovieThread : public MusicDownLoadQueryMovieThread
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicDownLoadQueryQQMovieThread)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicDownLoadQueryQQMovieThread(QObject *parent = 0);

    /*!
     * Start to search data from name and type.
     */
    virtual void startToSearch(QueryType type, const QString &text) override;
    /*!
     * Start to search data from name and type bt paging.
     */
    virtual void startToPage(int offset) override;
    /*!
     * Start to search data by given id.
     */
    virtual void startToSingleSearch(const QString &text) override;

public Q_SLOTS:
    /*!
     * Download data from net finished.
     */
    virtual void downLoadFinished() override;
    /*!
     * Download page data from net finished.
     */
    void pageDownLoadFinished();
    /*!
     * Download single data from net finished.
     */
    void singleDownLoadFinished();

protected:
    /*!
     * Read mv tags(size\bitrate\url) from query results.
     */
    void readFromMusicMVAttribute(MusicObject::MusicSongInformation *info, bool more);
    /*!
     * Get movie key.
     */
    QString getMovieKey(int id, const QString &videoId);

};

#endif // MUSICDOWNLOADQUERYQQMOVIETHREAD_H
