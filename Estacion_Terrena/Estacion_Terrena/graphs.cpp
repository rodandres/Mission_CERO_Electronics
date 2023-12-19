#include "graphs.h"

Graphs::Graphs(QObject *parent)
    : QObject{parent}
{
    chart = new QChart;
    chartView = new QChartView;
    series1 = new QLineSeries;
    series2 = new QLineSeries;
    series3 = new QLineSeries;
    xAxis = new QDateTimeAxis;
    yAxis = new QValueAxis;

    // Axis config
    xAxis->setTickCount(10);
    xAxis->setFormat("ss");
    yAxis->setRange(0, 100);

    // Setting up chart
    chart->legend()->hide();
    chart->addSeries(series1);
    chart->addSeries(series2);
    chart->addSeries(series3);
    chart->addAxis(xAxis, Qt::AlignBottom);
    chart->addAxis(yAxis, Qt::AlignLeft);
    series1->attachAxis(xAxis);
    series1->attachAxis(yAxis);
    series2->attachAxis(xAxis);
    series2->attachAxis(yAxis);
    series3->attachAxis(xAxis);
    series3->attachAxis(yAxis);

    // chartView config
    chartView->setChart(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Updater connector
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Graphs::updater);
    timer->start(100);
}

void Graphs::updater() {
    // Generate random data and add it
    qint64 timestamp = QDateTime::currentMSecsSinceEpoch();
    series1->append(timestamp, rand() % 100);
    series2->append(timestamp, rand() % 100);
    series3->append(timestamp, rand() % 100);

    // Scroll the X-axis
    xAxis->setRange(QDateTime::fromMSecsSinceEpoch(timestamp - 60000), QDateTime::fromMSecsSinceEpoch(timestamp));
}


void Graphs::setName(const QString &title) {
    chart->setTitle(title);
}

