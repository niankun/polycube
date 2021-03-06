/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* PacketcaptureJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "GlobalheaderJsonObject.h"
#include "PacketJsonObject.h"
#include "polycube/services/cube.h"

namespace polycube {
namespace service {
namespace model {

enum class PacketcaptureCaptureEnum {
  INGRESS, EGRESS, BIDIRECTIONAL, OFF
};

/// <summary>
///
/// </summary>
class  PacketcaptureJsonObject : public JsonObjectBase {
public:
  PacketcaptureJsonObject();
  PacketcaptureJsonObject(const nlohmann::json &json);
  ~PacketcaptureJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Name of the packetcapture service
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;

  /// <summary>
  /// Packet capture status
  /// </summary>
  PacketcaptureCaptureEnum getCapture() const;
  void setCapture(PacketcaptureCaptureEnum value);
  bool captureIsSet() const;
  void unsetCapture();
  static std::string PacketcaptureCaptureEnum_to_string(const PacketcaptureCaptureEnum &value);
  static PacketcaptureCaptureEnum string_to_PacketcaptureCaptureEnum(const std::string &str);

  /// <summary>
  ///
  /// </summary>
  bool getAnonimize() const;
  void setAnonimize(bool value);
  bool anonimizeIsSet() const;
  void unsetAnonimize();

  /// <summary>
  /// dump capture
  /// </summary>
  std::string getDump() const;
  void setDump(std::string value);
  bool dumpIsSet() const;
  void unsetDump();

  /// <summary>
  /// Operating mode
  /// </summary>
  bool getNetworkmode() const;
  void setNetworkmode(bool value);
  bool networkmodeIsSet() const;
  void unsetNetworkmode();

  /// <summary>
  /// Snapshot length
  /// </summary>
  uint32_t getSnaplen() const;
  void setSnaplen(uint32_t value);
  bool snaplenIsSet() const;
  void unsetSnaplen();

  /// <summary>
  /// filtering string (e.g., 'host 1.2.3.4 and src port 80')
  /// </summary>
  std::string getFilter() const;
  void setFilter(std::string value);
  bool filterIsSet() const;
  void unsetFilter();

  /// <summary>
  ///
  /// </summary>
  GlobalheaderJsonObject getGlobalheader() const;
  void setGlobalheader(GlobalheaderJsonObject value);
  bool globalheaderIsSet() const;
  void unsetGlobalheader();

  /// <summary>
  ///
  /// </summary>
  PacketJsonObject getPacket() const;
  void setPacket(PacketJsonObject value);
  bool packetIsSet() const;
  void unsetPacket();

private:
  std::string m_name;
  bool m_nameIsSet;
  PacketcaptureCaptureEnum m_capture;
  bool m_captureIsSet;
  bool m_anonimize;
  bool m_anonimizeIsSet;
  std::string m_dump;
  bool m_dumpIsSet;
  bool m_networkmode;
  bool m_networkmodeIsSet;
  uint32_t m_snaplen;
  bool m_snaplenIsSet;
  std::string m_filter;
  bool m_filterIsSet;
  GlobalheaderJsonObject m_globalheader;
  bool m_globalheaderIsSet;
  PacketJsonObject m_packet;
  bool m_packetIsSet;
};

}
}
}

