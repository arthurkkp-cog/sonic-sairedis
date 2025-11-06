constexpr const char* SYNCD_IPC_SOCK_SYNCD = "/var/run/sswsyncd";
constexpr const char* SYNCD_IPC_SOCK_HOST = "/var/run/docker-syncd";
constexpr const char* SYNCD_IPC_SOCK_FILE = "mdio-ipc";
constexpr uint32_t SYNCD_IPC_BUFF_SIZE = 256;    /* buffer size */

constexpr int MDIO_SERVER_TIMEOUT = 30;     /* sec, connection timeout */
constexpr int MDIO_CLIENT_TIMEOUT = 25;     /* shorter than 30 sec on server side */

constexpr uint32_t MDIO_CONN_MAX = 18;     /* max. number of connections */
