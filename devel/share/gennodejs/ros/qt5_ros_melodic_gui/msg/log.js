// Auto-generated. Do not edit!

// (in-package qt5_ros_melodic_gui.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class log {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.autoflight_mode = null;
      this.mission = null;
      this.gps_time = null;
      this.latitude = null;
      this.longitude = null;
      this.altitude = null;
    }
    else {
      if (initObj.hasOwnProperty('autoflight_mode')) {
        this.autoflight_mode = initObj.autoflight_mode
      }
      else {
        this.autoflight_mode = false;
      }
      if (initObj.hasOwnProperty('mission')) {
        this.mission = initObj.mission
      }
      else {
        this.mission = 0;
      }
      if (initObj.hasOwnProperty('gps_time')) {
        this.gps_time = initObj.gps_time
      }
      else {
        this.gps_time = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('latitude')) {
        this.latitude = initObj.latitude
      }
      else {
        this.latitude = 0.0;
      }
      if (initObj.hasOwnProperty('longitude')) {
        this.longitude = initObj.longitude
      }
      else {
        this.longitude = 0.0;
      }
      if (initObj.hasOwnProperty('altitude')) {
        this.altitude = initObj.altitude
      }
      else {
        this.altitude = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type log
    // Serialize message field [autoflight_mode]
    bufferOffset = _serializer.bool(obj.autoflight_mode, buffer, bufferOffset);
    // Serialize message field [mission]
    bufferOffset = _serializer.int8(obj.mission, buffer, bufferOffset);
    // Serialize message field [gps_time]
    bufferOffset = _serializer.time(obj.gps_time, buffer, bufferOffset);
    // Serialize message field [latitude]
    bufferOffset = _serializer.float64(obj.latitude, buffer, bufferOffset);
    // Serialize message field [longitude]
    bufferOffset = _serializer.float64(obj.longitude, buffer, bufferOffset);
    // Serialize message field [altitude]
    bufferOffset = _serializer.float64(obj.altitude, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type log
    let len;
    let data = new log(null);
    // Deserialize message field [autoflight_mode]
    data.autoflight_mode = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [mission]
    data.mission = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [gps_time]
    data.gps_time = _deserializer.time(buffer, bufferOffset);
    // Deserialize message field [latitude]
    data.latitude = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [longitude]
    data.longitude = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [altitude]
    data.altitude = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 34;
  }

  static datatype() {
    // Returns string type for a message object
    return 'qt5_ros_melodic_gui/log';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '84bb702d12a81cea3fad2de56983aa3d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool autoflight_mode
    int8 mission
    time gps_time
    float64 latitude
    float64 longitude
    float64 altitude
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new log(null);
    if (msg.autoflight_mode !== undefined) {
      resolved.autoflight_mode = msg.autoflight_mode;
    }
    else {
      resolved.autoflight_mode = false
    }

    if (msg.mission !== undefined) {
      resolved.mission = msg.mission;
    }
    else {
      resolved.mission = 0
    }

    if (msg.gps_time !== undefined) {
      resolved.gps_time = msg.gps_time;
    }
    else {
      resolved.gps_time = {secs: 0, nsecs: 0}
    }

    if (msg.latitude !== undefined) {
      resolved.latitude = msg.latitude;
    }
    else {
      resolved.latitude = 0.0
    }

    if (msg.longitude !== undefined) {
      resolved.longitude = msg.longitude;
    }
    else {
      resolved.longitude = 0.0
    }

    if (msg.altitude !== undefined) {
      resolved.altitude = msg.altitude;
    }
    else {
      resolved.altitude = 0.0
    }

    return resolved;
    }
};

module.exports = log;
