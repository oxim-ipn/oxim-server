#pragma once

// generated by .\ddl2cpp.py .\o.sql dbschema oxim

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace oxim
{
  namespace Users_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::must_not_insert, sqlpp::tag::must_not_update>;
    };
    struct Username
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "username";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T username;
            T& operator()() { return username; }
            const T& operator()() const { return username; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::require_insert>;
    };
    struct Password
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "password";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T password;
            T& operator()() { return password; }
            const T& operator()() const { return password; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::require_insert>;
    };
  } // namespace Users_

  struct Users: sqlpp::table_t<Users,
               Users_::Id,
               Users_::Username,
               Users_::Password>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "users";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T users;
        T& operator()() { return users; }
        const T& operator()() const { return users; }
      };
    };
  };
  namespace VitalSigns_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::must_not_insert, sqlpp::tag::must_not_update>;
    };
    struct UserId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "user_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T userId;
            T& operator()() { return userId; }
            const T& operator()() const { return userId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct Received
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "received";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T received;
            T& operator()() { return received; }
            const T& operator()() const { return received; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::require_insert>;
    };
    struct Heartrate
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "heartrate";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T heartrate;
            T& operator()() { return heartrate; }
            const T& operator()() const { return heartrate; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct Spo2
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "spo2";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T spo2;
            T& operator()() { return spo2; }
            const T& operator()() const { return spo2; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct HeartratePrecision
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "heartrate_precision";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T heartratePrecision;
            T& operator()() { return heartratePrecision; }
            const T& operator()() const { return heartratePrecision; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::require_insert>;
    };
    struct Spo2_precision
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "spo2_precision";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T spo2_precision;
            T& operator()() { return spo2_precision; }
            const T& operator()() const { return spo2_precision; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::require_insert>;
    };
  } // namespace VitalSigns_

  struct VitalSigns: sqlpp::table_t<VitalSigns,
               VitalSigns_::Id,
               VitalSigns_::UserId,
               VitalSigns_::Received,
               VitalSigns_::Heartrate,
               VitalSigns_::Spo2,
               VitalSigns_::HeartratePrecision,
               VitalSigns_::Spo2_precision>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "vital_signs";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T vitalSigns;
        T& operator()() { return vitalSigns; }
        const T& operator()() const { return vitalSigns; }
      };
    };
  };
} // namespace oxim
