// HighFreqTrade.cpp : Defines the entry point for the application.
//
#include <vector>
#include <fmt/ranges.h>
#include <sqlite3.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/daily_file_sink.h>
#include "spdlog/sinks/stdout_color_sinks.h"
#include "InsightQuote.h"
#include "BaseFunction.h"
#include "InsightHandle.h"
#include "parameter_define.h"
#include "udp_client_interface.h"
using namespace com::htsc::mdc::udp;

std::string user = "UATUSER013558";
std::string password = "3j3c#92jc";
std::string ip = "168.61.2.39";
int port = 9072;
std::string cert_folder = "./cert";
std::string export_folder = "./export_folder";
int test_type = 1;
std::string interface_ip = "127.0.0.1";

ClientInterface* client = NULL;
UdpClientInterface* udp_client = NULL;
InsightHandle* handle = NULL;


void test_udp_client_subscribe_type()
{    
    close_compress();
    udp_client = ClientFactory::Instance()->CreateUdpClient();
    handle = new InsightHandle(export_folder);
    udp_client->SetWorkPoolThreadCount(5);
    udp_client->RegistHandle(handle);
    //添加备用发现网关地址
    std::map<std::string, int> backup_list;
    backup_list.insert(std::pair<std::string, int>("168.61.69.192", 10317));
    if (udp_client->LoginById(ip, port, user, password, backup_list) != 0)
    {
        error_print("LoginById failed");
        return;
    }
    std::unique_ptr<SubscribeBySourceType> source_type(new SubscribeBySourceType());
    // SubscribeBySourceTypeDetail *detail_1 = source_type->add_subscribebysourcetypedetail();
    // SecuritySourceType *security_source_type_1 = new SecuritySourceType();
    // security_source_type_1->set_securitytype(StockType);
    // security_source_type_1->set_securityidsource(XSHG);
    // detail_1->set_allocated_securitysourcetypes(security_source_type_1);
    // detail_1->add_marketdatatypes(MD_TICK);
    // detail_1->add_marketdatatypes(MD_TRANSACTION);
    // detail_1->add_marketdatatypes(MD_ORDER);

    SubscribeBySourceTypeDetail* detail_2 = source_type->add_subscribebysourcetypedetail();
    SecuritySourceType* security_source_type_2 = new SecuritySourceType();
    security_source_type_2->set_securityidsource(XSHE);
    security_source_type_2->set_securitytype(StockType);
    detail_2->set_allocated_securitysourcetypes(security_source_type_2);
    detail_2->add_marketdatatypes(MD_TICK);
    detail_2->add_marketdatatypes(MD_TRANSACTION);
    detail_2->add_marketdatatypes(MD_ORDER);

    if (udp_client->SubscribeBySourceType(interface_ip, &(*source_type)) != 0)
    {
        error_print("SubscribeBySourceType failed");
        return;
    }
    std::cout << "input any key to quit...>>";
    char a[4096];
    std::cin >> a;
    return;
}

int main()
{    
    auto logger = spdlog::daily_logger_mt("daily_logger", "logs/daily.txt", 4, 30);
    spdlog::get("daily_logger")->info("sha,dd,ni好");
    auto console = spdlog::stdout_color_mt("console");    
    console->info("年后,ni和");   
}
