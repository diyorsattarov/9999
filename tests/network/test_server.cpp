#include <gtest/gtest.h>
#include <thread>  // for std::this_thread::sleep_for
#include <chrono>  // for std::chrono::seconds
#include <network/server.h>

class ServerTest : public ::testing::Test {
protected:
    // Member variables
    Server server;
    std::thread serverThread;
};

TEST_F(ServerTest, ServerStarts) {
    // Add your assertions or test logic here
    // For example, you can check if the server successfully started
    //ASSERT_TRUE(/* Add your condition to check if the server started successfully */);
    server.start(1231);
    server.stop();
}

// Add more tests for the Server class as needed
