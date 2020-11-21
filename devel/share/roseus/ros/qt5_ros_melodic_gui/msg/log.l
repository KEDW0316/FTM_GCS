;; Auto-generated. Do not edit!


(when (boundp 'qt5_ros_melodic_gui::log)
  (if (not (find-package "QT5_ROS_MELODIC_GUI"))
    (make-package "QT5_ROS_MELODIC_GUI"))
  (shadow 'log (find-package "QT5_ROS_MELODIC_GUI")))
(unless (find-package "QT5_ROS_MELODIC_GUI::LOG")
  (make-package "QT5_ROS_MELODIC_GUI::LOG"))

(in-package "ROS")
;;//! \htmlinclude log.msg.html


(defclass qt5_ros_melodic_gui::log
  :super ros::object
  :slots (_autoflight_mode _mission _gps_time _latitude _longitude _altitude ))

(defmethod qt5_ros_melodic_gui::log
  (:init
   (&key
    ((:autoflight_mode __autoflight_mode) nil)
    ((:mission __mission) 0)
    ((:gps_time __gps_time) (instance ros::time :init))
    ((:latitude __latitude) 0.0)
    ((:longitude __longitude) 0.0)
    ((:altitude __altitude) 0.0)
    )
   (send-super :init)
   (setq _autoflight_mode __autoflight_mode)
   (setq _mission (round __mission))
   (setq _gps_time __gps_time)
   (setq _latitude (float __latitude))
   (setq _longitude (float __longitude))
   (setq _altitude (float __altitude))
   self)
  (:autoflight_mode
   (&optional __autoflight_mode)
   (if __autoflight_mode (setq _autoflight_mode __autoflight_mode)) _autoflight_mode)
  (:mission
   (&optional __mission)
   (if __mission (setq _mission __mission)) _mission)
  (:gps_time
   (&optional __gps_time)
   (if __gps_time (setq _gps_time __gps_time)) _gps_time)
  (:latitude
   (&optional __latitude)
   (if __latitude (setq _latitude __latitude)) _latitude)
  (:longitude
   (&optional __longitude)
   (if __longitude (setq _longitude __longitude)) _longitude)
  (:altitude
   (&optional __altitude)
   (if __altitude (setq _altitude __altitude)) _altitude)
  (:serialization-length
   ()
   (+
    ;; bool _autoflight_mode
    1
    ;; int8 _mission
    1
    ;; time _gps_time
    8
    ;; float64 _latitude
    8
    ;; float64 _longitude
    8
    ;; float64 _altitude
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _autoflight_mode
       (if _autoflight_mode (write-byte -1 s) (write-byte 0 s))
     ;; int8 _mission
       (write-byte _mission s)
     ;; time _gps_time
       (write-long (send _gps_time :sec) s) (write-long (send _gps_time :nsec) s)
     ;; float64 _latitude
       (sys::poke _latitude (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _longitude
       (sys::poke _longitude (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _altitude
       (sys::poke _altitude (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _autoflight_mode
     (setq _autoflight_mode (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int8 _mission
     (setq _mission (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _mission 127) (setq _mission (- _mission 256)))
   ;; time _gps_time
     (send _gps_time :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _gps_time :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float64 _latitude
     (setq _latitude (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _longitude
     (setq _longitude (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _altitude
     (setq _altitude (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get qt5_ros_melodic_gui::log :md5sum-) "84bb702d12a81cea3fad2de56983aa3d")
(setf (get qt5_ros_melodic_gui::log :datatype-) "qt5_ros_melodic_gui/log")
(setf (get qt5_ros_melodic_gui::log :definition-)
      "bool autoflight_mode
int8 mission
time gps_time
float64 latitude
float64 longitude
float64 altitude


")



(provide :qt5_ros_melodic_gui/log "84bb702d12a81cea3fad2de56983aa3d")


