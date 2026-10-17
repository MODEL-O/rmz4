; undefined FUN_0801ceec(void)
; entry 0x801ceec  size 20 bytes

0801CEEC: ff21         mov r1,#0xff
0801CEEE: 8177         strb r1,[r0,#0x1e]
0801CEF0: 0121         mov r1,#0x1
0801CEF2: 4942         rsb r1,r1
0801CEF4: c177         strb r1,[r0,#0x1f]
0801CEF6: c27a         ldrb r2,[r0,#0xb]
0801CEF8: 0421         mov r1,#0x4
0801CEFA: 1143         orr r1,r2
0801CEFC: c172         strb r1,[r0,#0xb]
0801CEFE: 7047         bx lr
