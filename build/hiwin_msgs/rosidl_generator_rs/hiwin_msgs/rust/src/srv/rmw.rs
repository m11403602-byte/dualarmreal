#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "hiwin_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__srv__SetIO_Request() -> *const std::ffi::c_void;
}

#[link(name = "hiwin_msgs__rosidl_generator_c")]
extern "C" {
    fn hiwin_msgs__srv__SetIO_Request__init(msg: *mut SetIO_Request) -> bool;
    fn hiwin_msgs__srv__SetIO_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Request>, size: usize) -> bool;
    fn hiwin_msgs__srv__SetIO_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Request>);
    fn hiwin_msgs__srv__SetIO_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetIO_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetIO_Request>) -> bool;
}

// Corresponds to hiwin_msgs__srv__SetIO_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIO_Request {
    /// e.g. "system"
    pub io_group: rosidl_runtime_rs::String,

    /// e.g. "reset"
    pub interface_name: rosidl_runtime_rs::String,

    /// e.g. 1.0
    pub value: f64,

}



impl Default for SetIO_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hiwin_msgs__srv__SetIO_Request__init(&mut msg as *mut _) {
        panic!("Call to hiwin_msgs__srv__SetIO_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetIO_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__SetIO_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__SetIO_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__SetIO_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetIO_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetIO_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hiwin_msgs/srv/SetIO_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__srv__SetIO_Request() }
  }
}


#[link(name = "hiwin_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__srv__SetIO_Response() -> *const std::ffi::c_void;
}

#[link(name = "hiwin_msgs__rosidl_generator_c")]
extern "C" {
    fn hiwin_msgs__srv__SetIO_Response__init(msg: *mut SetIO_Response) -> bool;
    fn hiwin_msgs__srv__SetIO_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Response>, size: usize) -> bool;
    fn hiwin_msgs__srv__SetIO_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Response>);
    fn hiwin_msgs__srv__SetIO_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetIO_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetIO_Response>) -> bool;
}

// Corresponds to hiwin_msgs__srv__SetIO_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIO_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetIO_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hiwin_msgs__srv__SetIO_Response__init(&mut msg as *mut _) {
        panic!("Call to hiwin_msgs__srv__SetIO_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetIO_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__SetIO_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__SetIO_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__SetIO_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetIO_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetIO_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hiwin_msgs/srv/SetIO_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__srv__SetIO_Response() }
  }
}


#[link(name = "hiwin_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__srv__ResetJointFault_Request() -> *const std::ffi::c_void;
}

#[link(name = "hiwin_msgs__rosidl_generator_c")]
extern "C" {
    fn hiwin_msgs__srv__ResetJointFault_Request__init(msg: *mut ResetJointFault_Request) -> bool;
    fn hiwin_msgs__srv__ResetJointFault_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetJointFault_Request>, size: usize) -> bool;
    fn hiwin_msgs__srv__ResetJointFault_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetJointFault_Request>);
    fn hiwin_msgs__srv__ResetJointFault_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetJointFault_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetJointFault_Request>) -> bool;
}

// Corresponds to hiwin_msgs__srv__ResetJointFault_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetJointFault_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_name: rosidl_runtime_rs::String,

}



impl Default for ResetJointFault_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hiwin_msgs__srv__ResetJointFault_Request__init(&mut msg as *mut _) {
        panic!("Call to hiwin_msgs__srv__ResetJointFault_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetJointFault_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__ResetJointFault_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__ResetJointFault_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__ResetJointFault_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetJointFault_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetJointFault_Request where Self: Sized {
  const TYPE_NAME: &'static str = "hiwin_msgs/srv/ResetJointFault_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__srv__ResetJointFault_Request() }
  }
}


#[link(name = "hiwin_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__srv__ResetJointFault_Response() -> *const std::ffi::c_void;
}

#[link(name = "hiwin_msgs__rosidl_generator_c")]
extern "C" {
    fn hiwin_msgs__srv__ResetJointFault_Response__init(msg: *mut ResetJointFault_Response) -> bool;
    fn hiwin_msgs__srv__ResetJointFault_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetJointFault_Response>, size: usize) -> bool;
    fn hiwin_msgs__srv__ResetJointFault_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetJointFault_Response>);
    fn hiwin_msgs__srv__ResetJointFault_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetJointFault_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetJointFault_Response>) -> bool;
}

// Corresponds to hiwin_msgs__srv__ResetJointFault_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetJointFault_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ResetJointFault_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hiwin_msgs__srv__ResetJointFault_Response__init(&mut msg as *mut _) {
        panic!("Call to hiwin_msgs__srv__ResetJointFault_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetJointFault_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__ResetJointFault_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__ResetJointFault_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hiwin_msgs__srv__ResetJointFault_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetJointFault_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetJointFault_Response where Self: Sized {
  const TYPE_NAME: &'static str = "hiwin_msgs/srv/ResetJointFault_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hiwin_msgs__srv__ResetJointFault_Response() }
  }
}






#[link(name = "hiwin_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hiwin_msgs__srv__SetIO() -> *const std::ffi::c_void;
}

// Corresponds to hiwin_msgs__srv__SetIO
#[allow(missing_docs, non_camel_case_types)]
pub struct SetIO;

impl rosidl_runtime_rs::Service for SetIO {
    type Request = SetIO_Request;
    type Response = SetIO_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hiwin_msgs__srv__SetIO() }
    }
}




#[link(name = "hiwin_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__hiwin_msgs__srv__ResetJointFault() -> *const std::ffi::c_void;
}

// Corresponds to hiwin_msgs__srv__ResetJointFault
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetJointFault;

impl rosidl_runtime_rs::Service for ResetJointFault {
    type Request = ResetJointFault_Request;
    type Response = ResetJointFault_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__hiwin_msgs__srv__ResetJointFault() }
    }
}


