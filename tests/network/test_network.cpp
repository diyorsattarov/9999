#include <utilities/utilities.h>
#include <network/network.h>
#include <network/server.h>
#include <network/client.h>

class NetworkTest : public ::testing::Test {
    void SetUp() override {
        Utilities::clearLogFile("logfile.txt");
    }
protected:
};

TEST_F(NetworkTest, FirstNetworkTest) {
}
