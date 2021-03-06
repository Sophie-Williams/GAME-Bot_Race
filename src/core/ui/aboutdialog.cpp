/*
 * Copyright 2011 Jörg Ehrichs <joerg.ehichs@gmx.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "aboutdialog.h"
#include "ui_aboutdialog.h"

#define STRINGIFY(x) XSTRINGIFY(x)
#define XSTRINGIFY(x) #x

using namespace BotRace;
using namespace Core;

AboutDialog::AboutDialog( ) :
    QDialog( ),
    ui( new Ui::AboutDialog )
{
    ui->setupUi( this );

    ui->gitVersionLabel->setText( QString( "%1" ).arg( STRINGIFY( GITSH1 ) ) );

    ui->versionLabel->setText( QString( "%1" ).arg( STRINGIFY( GAME_VERSION ) ) );
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
