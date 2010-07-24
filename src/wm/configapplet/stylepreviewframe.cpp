#include "stylepreviewframe.hpp"
#include "fakewindow.hpp"
#include "decoration.hpp"

#include <QFile>
#include <QResizeEvent>
#include <QCoreApplication>
#include <QHBoxLayout>

StylePreviewFrame::StylePreviewFrame(const QString &styleSheet, QWidget *parent)
    : QFrame(parent)
{
    ui.setupUi(this);

    _window = new FakeWindow(this);
    _window->decoration()->setStyleSheet(styleSheet);
    _window->decoration()->init();
    _window->show();

    QCoreApplication::sendPostedEvents(_window->decoration(), 0);

    ((QBoxLayout *)layout())->insertWidget(0, _window);

    setCursor(Qt::PointingHandCursor);
    setFixedHeight(156);
}

void StylePreviewFrame::resizeEvent(QResizeEvent *e)
{
    QFrame::resizeEvent(e);
//    int windowWidth = e->size().width() / 2;

//    _window->move((e->size().width() - windowWidth) / 2, 8);
//    _window->resize(windowWidth, 140);
}
