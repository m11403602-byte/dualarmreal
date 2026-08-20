#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to hiwin_msgs__msg__SystemIOStates
/// hiwin_msgs/msg/SystemIOStates.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemIOStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SystemIOStates::default())
  }
}

impl rosidl_runtime_rs::Message for SystemIOStates {
  type RmwMsg = super::msg::rmw::SystemIOStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        breaker: msg.breaker,
        e_stop: msg.e_stop,
        e_stop2: msg.e_stop2,
        fan_error: msg.fan_error,
        capacitor_error: msg.capacitor_error,
        clear_error_notify: msg.clear_error_notify,
        shutdown_notify: msg.shutdown_notify,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      breaker: msg.breaker,
      e_stop: msg.e_stop,
      e_stop2: msg.e_stop2,
      fan_error: msg.fan_error,
      capacitor_error: msg.capacitor_error,
      clear_error_notify: msg.clear_error_notify,
      shutdown_notify: msg.shutdown_notify,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      breaker: msg.breaker,
      e_stop: msg.e_stop,
      e_stop2: msg.e_stop2,
      fan_error: msg.fan_error,
      capacitor_error: msg.capacitor_error,
      clear_error_notify: msg.clear_error_notify,
      shutdown_notify: msg.shutdown_notify,
    }
  }
}


// Corresponds to hiwin_msgs__msg__DigitalIOStates
/// hiwin_msgs/msg/DigitalIOStates.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DigitalIOStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub di_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub di_values: Vec<bool>,

}



impl Default for DigitalIOStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DigitalIOStates::default())
  }
}

impl rosidl_runtime_rs::Message for DigitalIOStates {
  type RmwMsg = super::msg::rmw::DigitalIOStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        di_names: msg.di_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        di_values: msg.di_values.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        di_names: msg.di_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        di_values: msg.di_values.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      di_names: msg.di_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      di_values: msg.di_values
          .into_iter()
          .collect(),
    }
  }
}


