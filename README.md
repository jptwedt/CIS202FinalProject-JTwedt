# CIS202FinalProject-JTwedt
## Repository for the final project (a matrix calculator with a Qt-designed interface)

This is a QT form that takes accepts input for a scalar-on-matrix or matrix-on-matrix add, subtract, or multiply operation.
It uses regular expressions for data validation, although there are certainly a few issues that could be addressed.

It hasn't really been optimized--God knows it could be refactored and implemented in a more intelligent manner.  But it's
doing what it was supposed to do.

I opted for a sort of "layer" architecture because I didn't want everything to be handled in "mainwindow.cpp."  I can think of
so many better ways to implement this, but I kept going back and forth between different ideas so I just finally stuck with one.
Hence the inconsistencies between, say, using QStringLists for storage in some parts, and "QList<QString> in others, and QMap<QString, QString> or QMap<QString,QRegularExpression>...
