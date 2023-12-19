#ifndef GRAPHS_H
#define GRAPHS_H

#include <QObject>
#include <QtCharts>

class Graphs : public QObject
{
    Q_OBJECT
public:
    explicit Graphs(QObject *parent = nullptr);

    QChartView *chartView;

    void setName(const QString &title);
    void updater();
signals:

private:
    QChart *chart;
    QLineSeries *series1;
    QLineSeries *series2;
    QLineSeries *series3;

    QDateTimeAxis *xAxis;
    QValueAxis *yAxis;
    QTimer *timer;

};

#endif // GRAPHS_H-*
