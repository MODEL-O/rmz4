; undefined FUN_080e1944(void)
; entry 0x80e1944  size 50 bytes

080E1944: 10b5         push {r4,lr}
080E1946: 041c         add r4,r0,#0x0
080E1948: 607b         ldrb r0,[r4,#0xd]
080E194A: 0028         cmp r0,#0x0
080E194C: 0ad1         bne 0x080e1964
080E194E: 201c         add r0,r4,#0x0
080E1950: 7630         add r0,#0x76
080E1952: 0088         ldrh r0,[r0,#0x0]
080E1954: 0b21         mov r1,#0xb
080E1956: 0143         orr r1,r0
080E1958: 201c         add r0,r4,#0x0
080E195A: 3bf7d1fa     bl 0x0801cf00
080E195E: 607b         ldrb r0,[r4,#0xd]
080E1960: 0130         add r0,#0x1
080E1962: 6073         strb r0,[r4,#0xd]
080E1964: 201c         add r0,r4,#0x0
080E1966: 00f03bf8     bl 0x080e19e0
080E196A: 201c         add r0,r4,#0x0
080E196C: 00f05cf8     bl 0x080e1a28
080E1970: 10bc         pop {r4}
080E1972: 01bc         pop {r0}
080E1974: 0047         bx r0
