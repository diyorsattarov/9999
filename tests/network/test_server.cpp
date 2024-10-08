#include <gtest/gtest.h>
#include <thread>  // for std::this_thread::sleep_for
#include <chrono>  // for std::chrono::seconds
#include <network/server.h>

class ServerTest : public ::testing::Test {
protected:
};

TEST_F(ServerTest, ServerStarts) {
}

// Add more tests for the Server class as needed
