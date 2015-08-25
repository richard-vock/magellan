#ifndef MAGELLAN_SERVER_HPP_
#define MAGELLAN_SERVER_HPP_

#include "session.hpp"

namespace magellan {

class server {
    public:
        typedef std::shared_ptr<server>       ptr;
        typedef std::weak_ptr<server>         wptr;
        typedef std::shared_ptr<const server> const_ptr;
        typedef std::weak_ptr<const server>   const_wptr;

    public:
        server();

        virtual ~server();

        template <typename Session>
        void accept(asio::io_context& io_context, short port);

        template <typename Session, typename Func>
        void accept(asio::io_context& io_context, short port, Func&& factory);

        void run();

    //protected:
//asio::io_context io_context_;
};

} // magellan

#include "server.ipp"

#endif /* MAGELLAN_SERVER_HPP_ */
