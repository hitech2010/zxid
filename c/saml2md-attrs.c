/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zxmd_attrs -N zxmd_attr2tok c/saml2md-attrs.gperf  */
/* Computed positions: -k'1-2' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "c/saml2md-attrs.gperf"

/* c/saml2md-attrs.gperf - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/saml2md-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 55
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 26
#define MIN_HASH_VALUE 4
#define MAX_HASH_VALUE 86
/* maximum key range = 83, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned char asso_values[] =
    {
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87,  0, 47,  0, 10, 40,
      40, 87, 87, 10, 87, 87, 20, 50,  0, 50,
       5, 87, 35, 45,  0, 15,  0, 15, 87, 87,
      87, 87, 87, 87, 87, 87, 87,  0, 87, 15,
      30,  0, 30, 87, 87,  0, 87, 87, 20,  0,
      25, 40,  0, 87, 15,  5, 87,  0, 10, 87,
       0, 35, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
      87, 87, 87, 87, 87, 87
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

static const unsigned char zxmd_attrs_lens[] =
  {
     4,  5,  6,  7,  3,  9, 10, 12, 13,  9, 10,  7,  8, 19,
    10,  2,  8,  4, 10, 12, 13,  9,  5,  2,  8,  9, 20,  7,
    23,  4, 26,  2,  8,  9,  5, 26, 12, 18,  9, 16, 12,  3,
     7,  6, 12,  8, 12, 13, 19, 15, 11, 12,  8,  8,  6
  };

const struct zx_tok zxmd_attrs[] =
  {
#line 29 "c/saml2md-attrs.gperf"
    {"Name", "", 0},
#line 10 "c/saml2md-attrs.gperf"
    {"xmlns", ""},
#line 42 "c/saml2md-attrs.gperf"
    {"Target", "", 0},
#line 45 "c/saml2md-attrs.gperf"
    {"Version", "", 0},
#line 62 "c/saml2md-attrs.gperf"
    {"use", "", 0},
#line 32 "c/saml2md-attrs.gperf"
    {"Namespace", "", 0},
#line 30 "c/saml2md-attrs.gperf"
    {"NameFormat", "", 0},
#line 13 "c/saml2md-attrs.gperf"
    {"AuthnInstant", "", 0},
#line 31 "c/saml2md-attrs.gperf"
    {"NameQualifier", "", 0},
#line 55 "c/saml2md-attrs.gperf"
    {"isDefault", "", 0},
#line 56 "c/saml2md-attrs.gperf"
    {"isRequired", "", 0},
#line 17 "c/saml2md-attrs.gperf"
    {"DNSName", "", 0},
#line 18 "c/saml2md-attrs.gperf"
    {"Decision", "", 0},
#line 14 "c/saml2md-attrs.gperf"
    {"AuthnRequestsSigned", "", 0},
#line 63 "c/saml2md-attrs.gperf"
    {"validUntil", "", 0},
#line 22 "c/saml2md-attrs.gperf"
    {"ID", "", 0},
#line 52 "c/saml2md-attrs.gperf"
    {"errorURL", "", 0},
#line 57 "c/saml2md-attrs.gperf"
    {"lang", "", 0},
#line 61 "c/saml2md-attrs.gperf"
    {"providerID", "", 0},
#line 25 "c/saml2md-attrs.gperf"
    {"IssueInstant", "", 0},
#line 49 "c/saml2md-attrs.gperf"
    {"cacheDuration", "", 0},
#line 12 "c/saml2md-attrs.gperf"
    {"Algorithm", "", 0},
#line 54 "c/saml2md-attrs.gperf"
    {"index", "", 0},
#line 53 "c/saml2md-attrs.gperf"
    {"id", "", 0},
#line 51 "c/saml2md-attrs.gperf"
    {"entityID", "", 0},
#line 59 "c/saml2md-attrs.gperf"
    {"namespace", "", 0},
#line 46 "c/saml2md-attrs.gperf"
    {"WantAssertionsSigned", "", 0},
#line 11 "c/saml2md-attrs.gperf"
    {"Address", "", 0},
#line 47 "c/saml2md-attrs.gperf"
    {"WantAuthnRequestsSigned", "", 0},
#line 43 "c/saml2md-attrs.gperf"
    {"Type", "", 0},
#line 60 "c/saml2md-attrs.gperf"
    {"protocolSupportEnumeration", "", 0},
#line 23 "c/saml2md-attrs.gperf"
    {"Id", "", 0},
#line 36 "c/saml2md-attrs.gperf"
    {"Resource", "", 0},
#line 35 "c/saml2md-attrs.gperf"
    {"Recipient", "", 0},
#line 16 "c/saml2md-attrs.gperf"
    {"Count", "", 0},
#line 58 "c/saml2md-attrs.gperf"
    {"libertyPrincipalIdentifier", "", 0},
#line 24 "c/saml2md-attrs.gperf"
    {"InResponseTo", "", 0},
#line 48 "c/saml2md-attrs.gperf"
    {"affiliationOwnerID", "", 0},
#line 33 "c/saml2md-attrs.gperf"
    {"NotBefore", "", 0},
#line 37 "c/saml2md-attrs.gperf"
    {"ResponseLocation", "", 0},
#line 34 "c/saml2md-attrs.gperf"
    {"NotOnOrAfter", "", 0},
#line 44 "c/saml2md-attrs.gperf"
    {"URI", "", 0},
#line 15 "c/saml2md-attrs.gperf"
    {"Binding", "", 0},
#line 27 "c/saml2md-attrs.gperf"
    {"Method", "", 0},
#line 40 "c/saml2md-attrs.gperf"
    {"SessionIndex", "", 0},
#line 28 "c/saml2md-attrs.gperf"
    {"MimeType", "", 0},
#line 39 "c/saml2md-attrs.gperf"
    {"SPProvidedID", "", 0},
#line 64 "c/saml2md-attrs.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 41 "c/saml2md-attrs.gperf"
    {"SessionNotOnOrAfter", "", 0},
#line 38 "c/saml2md-attrs.gperf"
    {"SPNameQualifier", "", 0},
#line 50 "c/saml2md-attrs.gperf"
    {"contactType", "", 0},
#line 21 "c/saml2md-attrs.gperf"
    {"FriendlyName", "", 0},
#line 26 "c/saml2md-attrs.gperf"
    {"Location", "", 0},
#line 19 "c/saml2md-attrs.gperf"
    {"Encoding", "", 0},
#line 20 "c/saml2md-attrs.gperf"
    {"Format", "", 0}
  };

static const short lookup[] =
  {
    -1, -1, -1, -1,  0,  1,  2,  3,  4,  5,  6, -1,  7,  8,
     9, 10, -1, 11, 12, 13, 14, -1, 15, 16, 17, 18, -1, 19,
    20, 21, 22, -1, 23, 24, 25, 26, -1, 27, 28, 29, -1, 30,
    31, 32, 33, 34, 35, 36, 37, 38, -1, 39, 40, 41, 42, -1,
    43, 44, 45, -1, -1, -1, 46, 47, 48, 49, 50, 51, 52, -1,
    -1, -1, -1, 53, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 54
  };

#ifdef __GNUC__
__inline
#endif
const struct zx_tok *
zxmd_attr2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              if (len == zxmd_attrs_lens[index])
                {
                  register const char *s = zxmd_attrs[index].name;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &zxmd_attrs[index];
                }
            }
        }
    }
  return 0;
}
#line 65 "c/saml2md-attrs.gperf"

/* EOF - gperf -t -D -C -Nzxmd_attr2tok c/saml2md-attrs.gperf */