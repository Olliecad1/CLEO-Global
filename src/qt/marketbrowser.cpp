#include "marketbrowser.h"
#include "ui_marketbrowser.h"
#include "main.h"
#include "wallet.h"
#include "base58.h"
#include "clientmodel.h"
#include "bitcoinrpc.h"
#include <QDesktopServices>

#include <sstream>
#include <string>

using namespace json_spirit;

const QString kBaseUrl = "http://denarius.io/dnrusd.php";
const QString kBaseUrl1 = "http://denarius.io/dbitcoin.php";
const QString kBaseUrl2 = "http://denarius.io/dnrmc.php";
const QString kBaseUrl3 = "http://denarius.io/dnrbtc.php";

QString bitcoinp = "";
QString cleop = "";
QString cleomcp = "";
QString cleobtcp = "";
double bitcoin2;
double cleo2;
double cleomc2;
double cleobtc2;
QString bitcoing;
QString cleonewsfeed;
QString cleomarket;
QString dollarg;
int mode=1;
int o = 0;


MarketBrowser::MarketBrowser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MarketBrowser)
{
    ui->setupUi(this);
    setFixedSize(400, 420);


requests();
QObject::connect(&m_nam, SIGNAL(finished(QNetworkReply*)), this, SLOT(parseNetworkResponse(QNetworkReply*)));
connect(ui->startButton, SIGNAL(pressed()), this, SLOT( requests()));
connect(ui->egal, SIGNAL(pressed()), this, SLOT( update()));

}

void MarketBrowser::update()
{
    QString temps = ui->egals->text();
    double totald = dollarg.toDouble() * temps.toDouble();
    double totaldq = bitcoing.toDouble() * temps.toDouble();
    ui->egald->setText("$ "+QString::number(totald)+" USD or "+QString::number(totaldq)+" BTC");

}

void MarketBrowser::requests()
{
	getRequest(kBaseUrl);
    getRequest(kBaseUrl1);
	getRequest(kBaseUrl2);
	getRequest(kBaseUrl3);
}

void MarketBrowser::getRequest( const QString &urlString )
{
    QUrl url ( urlString );
    QNetworkRequest req ( url );
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json; charset=utf-8");
    m_nam.get(req);
}

void MarketBrowser::parseNetworkResponse(QNetworkReply *finished )
{

    QUrl what = finished->url();

    if ( finished->error() != QNetworkReply::NoError )
    {
        // A communication error has occurred
        emit networkError( finished->error() );
        return;
    }
	
if (what == kBaseUrl) // Cleo Price
{

    // QNetworkReply is a QIODevice. So we read from it just like it was a file
    QString cleo = finished->readAll();
    cleo2 = (cleo.toDouble());
    cleo = QString::number(cleo2, 'f', 2);
	
    if(cleo > cleop)
    {
        ui->cleo->setText("<font color=\"yellow\">$" + cleo + "</font>");
    } else if (cleo < cleop) {
        ui->cleo->setText("<font color=\"red\">$" + cleo + "</font>");
        } else {
    ui->cleo->setText("$"+cleo+" USD");
    }

    cleop = cleo;
	dollarg = cleo;
}

if (what == kBaseUrl1) // Bitcoin Price
{

    // QNetworkReply is a QIODevice. So we read from it just like it was a file
    QString bitcoin = finished->readAll();
    bitcoin2 = (bitcoin.toDouble());
    bitcoin = QString::number(bitcoin2, 'f', 2);
    if(bitcoin > bitcoinp)
    {
        ui->bitcoin->setText("<font color=\"yellow\">$" + bitcoin + " USD</font>");
    } else if (bitcoin < bitcoinp) {
        ui->bitcoin->setText("<font color=\"red\">$" + bitcoin + " USD</font>");
        } else {
    ui->bitcoin->setText("$"+bitcoin+" USD");
    }

    bitcoinp = bitcoin;
}

if (what == kBaseUrl2) // Cleo Market Cap
{

    // QNetworkReply is a QIODevice. So we read from it just like it was a file
    QString cleomc = finished->readAll();
    cleomc2 = (cleomc.toDouble());
    cleomc = QString::number(cleomc2, 'f', 2);
	
    if(cleomc > cleomcp)
    {
        ui->cleomc->setText("<font color=\"yellow\">$" + cleomc + "</font>");
    } else if (cleomc < cleomcp) {
        ui->cleomc->setText("<font color=\"red\">$" + cleomc + "</font>");
        } else {
    ui->cleomc->setText("$"+cleomc+" USD");
    }

    cleomcp = cleomc;
	cleomarket = cleomc;
}

if (what == kBaseUrl3) // Cleo BTC Price
{

    // QNetworkReply is a QIODevice. So we read from it just like it was a file
    QString cleobtc = finished->readAll();
    cleobtc2 = (cleobtc.toDouble());
    cleobtc = QString::number(cleobtc2, 'f', 8);
	
    if(cleobtc > cleobtcp)
    {
        ui->cleobtc->setText("<font color=\"yellow\">" + cleobtc + " BTC</font>");
    } else if (cleobtc < cleobtcp) {
        ui->cleobtc->setText("<font color=\"red\">" + cleobtc + " BTC</font>");
        } else {
    ui->cleobtc->setText(cleobtc+" BTC");
    }

    cleobtcp = cleobtc;
	bitcoing = cleobtc;
}

finished->deleteLater();
}


void MarketBrowser::setModel(ClientModel *model)
{
    this->model = model;
}

MarketBrowser::~MarketBrowser()
{
    delete ui;
}
