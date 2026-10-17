; undefined FUN_0810d834(void)
; entry 0x810d834  size 38 bytes

0810D834: 00b5         push {lr}
0810D836: 021c         add r2,r0,#0x0
0810D838: 0120         mov r0,#0x1
0810D83A: 07e0         b 0x0810d84c
0810D83C: fc29         cmp r1,#0xfc
0810D83E: 04d1         bne 0x0810d84a
0810D840: 0004         lsl r0,r0,#0x10
0810D842: 8021         mov r1,#0x80
0810D844: 4902         lsl r1,r1,#0x9
0810D846: 4018         add r0,r0,r1
0810D848: 000c         lsr r0,r0,#0x10
0810D84A: 0132         add r2,#0x1
0810D84C: 1178         ldrb r1,[r2,#0x0]
0810D84E: fc29         cmp r1,#0xfc
0810D850: f4d9         bls 0x0810d83c
0810D852: 0004         lsl r0,r0,#0x10
0810D854: 0014         asr r0,r0,#0x10
0810D856: 02bc         pop {r1}
0810D858: 0847         bx r1
