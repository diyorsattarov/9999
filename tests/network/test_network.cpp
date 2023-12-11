#include <gtest/gtest.h>
#include <thread>  // for std::this_thread::sleep_for
#include <chrono>  // for std::chrono::seconds
#include <utilities/utilities.h>
#include <network/network.h>
#include <network/server.h>
#include <network/client.h>

class NetworkTest : public ::testing::Test {
protected:
    NetworkTest() {
        // Allow some time for any previous instances to terminate
        std::this_thread::sleep_for(std::chrono::seconds(1));

        // Start the server in a separate thread
        serverThread = std::thread([this]() {
            server.start(12345);  // Start the server on port 12345
        });

        // Allow some time for the server to start before running tests
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    ~NetworkTest() override {
        // Stop the server
        server.stop();

        // Join the server thread to ensure it's properly terminated
        if (serverThread.joinable()) {
            serverThread.join();
        }
    }

    // Member variables
    Server server;
    std::thread serverThread;
};

TEST_F(NetworkTest, FirstNetworkTest) {
    // // Create a client and connect to the server
    // Client client;
    // client.connect("127.0.0.1", 12345);  // Assuming the server is running locally on port 12345

    // // Add your assertions or test logic here
    // // For example, you can check if the client successfully connected to the server
    // ASSERT_TRUE(client.isConnected());
}
