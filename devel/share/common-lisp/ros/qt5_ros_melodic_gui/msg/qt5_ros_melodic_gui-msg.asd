
(cl:in-package :asdf)

(defsystem "qt5_ros_melodic_gui-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "log" :depends-on ("_package_log"))
    (:file "_package_log" :depends-on ("_package"))
  ))