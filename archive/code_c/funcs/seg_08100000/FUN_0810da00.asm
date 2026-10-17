; undefined FUN_0810da00(void)
; entry 0x810da00  size 44 bytes

0810DA00: 00b5         push {lr}
0810DA02: 0ce0         b 0x0810da1e
0810DA04: ef2a         cmp r2,#0xef
0810DA06: 01d8         bhi 0x0810da0c
0810DA08: 0139         sub r1,#0x1
0810DA0A: 07e0         b 0x0810da1c
0810DA0C: f02a         cmp r2,#0xf0
0810DA0E: 02d1         bne 0x0810da16
0810DA10: 0130         add r0,#0x1
0810DA12: 0139         sub r1,#0x1
0810DA14: 02e0         b 0x0810da1c
0810DA16: f82a         cmp r2,#0xf8
0810DA18: 00d8         bhi 0x0810da1c
0810DA1A: 0130         add r0,#0x1
0810DA1C: 0130         add r0,#0x1
0810DA1E: 0278         ldrb r2,[r0,#0x0]
0810DA20: fc2a         cmp r2,#0xfc
0810DA22: 01d8         bhi 0x0810da28
0810DA24: 0029         cmp r1,#0x0
0810DA26: edd1         bne 0x0810da04
0810DA28: 02bc         pop {r1}
0810DA2A: 0847         bx r1
