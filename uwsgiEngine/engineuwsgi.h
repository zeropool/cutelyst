#ifndef CUTELYSTENGINEUWSGI_H
#define CUTELYSTENGINEUWSGI_H

#include "uwsgi.h"

#include "../Cutelyst/engine.h"

class QPluginLoader;
namespace Cutelyst {

class Dispatcher;
class Application;
class CutelystEngineUwsgi : public Engine
{
    Q_OBJECT
public:
    CutelystEngineUwsgi(Application *parent);

    virtual bool init();

    virtual void finalizeHeaders(Context *ctx);
    virtual void finalizeBody(Context *ctx);

    void processRequest(wsgi_request *wsgi_req);

private:
    QPluginLoader *m_loader;
};

}

#endif // CUTELYSTENGINEUWSGI_H
