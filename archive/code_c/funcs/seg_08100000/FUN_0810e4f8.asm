; undefined FUN_0810e4f8(void)
; entry 0x810e4f8  size 26 bytes

0810E4F8: 00b5         push {lr}
0810E4FA: 0004         lsl r0,r0,#0x10
0810E4FC: 000c         lsr r0,r0,#0x10
0810E4FE: 0121         mov r1,#0x1
0810E500: 00f012f8     bl 0x0810e528
0810E504: 034a         ldr r2,[0x0810e514]
0810E506: 1188         ldrh r1,[r2,#0x0]
0810E508: 0120         mov r0,#0x1
0810E50A: 0843         orr r0,r1
0810E50C: 1080         strh r0,[r2,#0x0]
0810E50E: 01bc         pop {r0}
0810E510: 0047         bx r0
