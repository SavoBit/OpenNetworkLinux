/**************************************************************************//**
 *
 *
 *
 *****************************************************************************/
#include <x86_64_accton_as7326_56x/x86_64_accton_as7326_56x_config.h>

/* <auto.start.cdefs(X86_64_ACCTON_AS7326_56X_CONFIG_HEADER).source> */
#define __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME(_x) #_x
#define __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_VALUE(_x) __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME(_x)
X86_64_ACCTON_AS7326_56X_CONFIG_settings_t X86_64_ACCTON_AS7326_56X_CONFIG_settings[] =
{
#ifdef X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_LOGGING
    { __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME(X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_LOGGING), __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_VALUE(X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_LOGGING) },
#else
{ X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_LOGGING(__X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef X86_64_ACCTON_AS7326_56X_CONFIG_LOG_OPTIONS_DEFAULT
    { __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME(X86_64_ACCTON_AS7326_56X_CONFIG_LOG_OPTIONS_DEFAULT), __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_VALUE(X86_64_ACCTON_AS7326_56X_CONFIG_LOG_OPTIONS_DEFAULT) },
#else
{ X86_64_ACCTON_AS7326_56X_CONFIG_LOG_OPTIONS_DEFAULT(__X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef X86_64_ACCTON_AS7326_56X_CONFIG_LOG_BITS_DEFAULT
    { __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME(X86_64_ACCTON_AS7326_56X_CONFIG_LOG_BITS_DEFAULT), __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_VALUE(X86_64_ACCTON_AS7326_56X_CONFIG_LOG_BITS_DEFAULT) },
#else
{ X86_64_ACCTON_AS7326_56X_CONFIG_LOG_BITS_DEFAULT(__X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef X86_64_ACCTON_AS7326_56X_CONFIG_LOG_CUSTOM_BITS_DEFAULT
    { __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME(X86_64_ACCTON_AS7326_56X_CONFIG_LOG_CUSTOM_BITS_DEFAULT), __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_VALUE(X86_64_ACCTON_AS7326_56X_CONFIG_LOG_CUSTOM_BITS_DEFAULT) },
#else
{ X86_64_ACCTON_AS7326_56X_CONFIG_LOG_CUSTOM_BITS_DEFAULT(__X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef X86_64_ACCTON_AS7326_56X_CONFIG_PORTING_STDLIB
    { __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME(X86_64_ACCTON_AS7326_56X_CONFIG_PORTING_STDLIB), __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_VALUE(X86_64_ACCTON_AS7326_56X_CONFIG_PORTING_STDLIB) },
#else
{ X86_64_ACCTON_AS7326_56X_CONFIG_PORTING_STDLIB(__X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef X86_64_ACCTON_AS7326_56X_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
    { __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME(X86_64_ACCTON_AS7326_56X_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS), __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_VALUE(X86_64_ACCTON_AS7326_56X_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS) },
#else
{ X86_64_ACCTON_AS7326_56X_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS(__X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_UCLI
    { __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME(X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_UCLI), __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_VALUE(X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_UCLI) },
#else
{ X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_UCLI(__X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION
    { __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME(X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION), __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_VALUE(X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION) },
#else
{ X86_64_ACCTON_AS7326_56X_CONFIG_INCLUDE_DEFAULT_FAN_DIRECTION(__X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME), "__undefined__" },
#endif
    { NULL, NULL }
};
#undef __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_VALUE
#undef __X86_64_ACCTON_AS7326_56X_CONFIG_STRINGIFY_NAME

const char*
_x86_64__a_c_c_t_o_n__a_s7326_56_x__c_o_n_f_i_g_lookup(const char* setting)
{
    int i;
    for(i = 0; X86_64_ACCTON_AS7326_56X_CONFIG_settings[i].name; i++) {
        if(!strcmp(X86_64_ACCTON_AS7326_56X_CONFIG_settings[i].name, setting)) {
            return X86_64_ACCTON_AS7326_56X_CONFIG_settings[i].value;
        }
    }
    return NULL;
}

int
_x86_64__a_c_c_t_o_n__a_s7326_56_x__c_o_n_f_i_g_show(struct aim_pvs_s* pvs)
{
    int i;
    for(i = 0; X86_64_ACCTON_AS7326_56X_CONFIG_settings[i].name; i++) {
        aim_printf(pvs, "%s = %s\n", X86_64_ACCTON_AS7326_56X_CONFIG_settings[i].name, X86_64_ACCTON_AS7326_56X_CONFIG_settings[i].value);
    }
    return i;
}

/* <auto.end.cdefs(X86_64_ACCTON_AS7326_56X_CONFIG_HEADER).source> */

