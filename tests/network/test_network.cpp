#include <gtest/gtest.h>
#include <utilities/utilities.h>

class NetworkTest : public ::testing::Test {
protected:
    std::thread serverThread;
    httplib::Server svr;

    void SetUp() override {
        // Set up SPDlog logger
        auto console_logger = spdlog::stdout_color_mt("console");
        spdlog::set_default_logger(console_logger);

        serverThread = std::thread([this]() {
            startServer();
        });
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    void TearDown() override {
        stopServer();
        if (serverThread.joinable()) {
            serverThread.join();
        }
    }

    void startServer() {
        // Set up SPDlog logger for httplib server
        svr.set_logger([](const auto& req, const auto& res) {
            spdlog::info("[{}] {} {}", res.status, req.method, req.path);
        });

        svr.Get("/hi", [](const httplib::Request &, httplib::Response &res) {
            res.set_content("Hello World!", "text/plain");
        });

        svr.listen("0.0.0.0", 8080);
    }

    void stopServer() {
        svr.stop();
    }

};

TEST_F(NetworkTest, FirstNetworkTest) {
    // HTTP
    httplib::Client cli("0.0.0.0", 8080);
    auto res = cli.Get("/hi");
    Utilities::file_logger->info("Status Code: {}", res->status);
    //ASSERT_EQ(res->status, 200);
    ASSERT_EQ(res->body, "Hello World!");
}
