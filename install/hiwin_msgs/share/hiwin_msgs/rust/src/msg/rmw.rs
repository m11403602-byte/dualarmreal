#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "hiwin_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__msg__SystemIOStates() -> *const std::ffi::c_void;
}

#[link(name = "hiwin_msgs__rosidl_generator_c")]
extern "C" {
    fn hiwin_msgs__msg__SystemIOStates__init(msg: *mut SystemIOStates) -> bool;
    fn hiwin_msgs__msg__SystemIOStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemIOStates>, size: usize) -> bool;
    fn hiwin_msgs__msg__SystemIOStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemIOStates>);
    fn hiwin_msgs__msg__SystemIOStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemIOStates>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemIOStates>) -> bool;
}

// Corresponds to hiwin_msgs__msg__SystemIOStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// hiwin_msgs/msg/SystemIOStates.msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemIOStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub breaker: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub e_stop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub e_stop2: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fan_error: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub capacitor_error: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub clear_error_notify: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shutdown_notify: bool,

}



impl Default for SystemIOStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hiwin_msgs__msg__SystemIOStates__init(&mut msg as *mut _) {
        panic!("Call to hiwin_msgs__msg__SystemIOStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemIOStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__msg__SystemIOStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__msg__SystemIOStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__msg__SystemIOStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemIOStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemIOStates where Self: Sized {
  const TYPE_NAME: &'static str = "hiwin_msgs/msg/SystemIOStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__msg__SystemIOStates() }
  }
}


#[link(name = "hiwin_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__msg__DigitalIOStates() -> *const std::ffi::c_void;
}

#[link(name = "hiwin_msgs__rosidl_generator_c")]
extern "C" {
    fn hiwin_msgs__msg__DigitalIOStates__init(msg: *mut DigitalIOStates) -> bool;
    fn hiwin_msgs__msg__DigitalIOStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DigitalIOStates>, size: usize) -> bool;
    fn hiwin_msgs__msg__DigitalIOStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DigitalIOStates>);
    fn hiwin_msgs__msg__DigitalIOStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DigitalIOStates>, out_seq: *mut rosidl_runtime_rs::Sequence<DigitalIOStates>) -> bool;
}

// Corresponds to hiwin_msgs__msg__DigitalIOStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// hiwin_msgs/msg/DigitalIOStates.msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DigitalIOStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub di_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub di_values: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for DigitalIOStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hiwin_msgs__msg__DigitalIOStates__init(&mut msg as *mut _) {
        panic!("Call to hiwin_msgs__msg__DigitalIOStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DigitalIOStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__msg__DigitalIOStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__msg__DigitalIOStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__msg__DigitalIOStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DigitalIOStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DigitalIOStates where Self: Sized {
  const TYPE_NAME: &'static str = "hiwin_msgs/msg/DigitalIOStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__msg__DigitalIOStates() }
  }
}


