; undefined FUN_0807e940(void)
; entry 0x807e940  size 50 bytes

0807E940: 30b5         push {r4,r5,lr}
0807E942: 084a         ldr r2,[0x0807e964]
0807E944: 8918         add r1,r1,r2
0807E946: b430         add r0,#0xb4
0807E948: 0068         ldr r0,[r0,#0x0]
0807E94A: 091a         sub r1,r1,r0
0807E94C: 0023         mov r3,#0x0
0807E94E: 064d         ldr r5,[0x0807e968]
0807E950: 064c         ldr r4,[0x0807e96c]
0807E952: 5a1c         add r2,r3,#0x1
0807E954: 9000         lsl r0,r2,#0x2
0807E956: 4019         add r0,r0,r5
0807E958: 0068         ldr r0,[r0,#0x0]
0807E95A: 0019         add r0,r0,r4
0807E95C: 8142         cmp r1,r0
0807E95E: 07da         bge 0x0807e970
0807E960: 181c         add r0,r3,#0x0
0807E962: 09e0         b 0x0807e978
0807E970: 131c         add r3,r2,#0x0
0807E972: 032b         cmp r3,#0x3
0807E974: eddd         ble 0x0807e952
0807E976: 0420         mov r0,#0x4
0807E978: 30bc         pop {r4,r5}
0807E97A: 02bc         pop {r1}
0807E97C: 0847         bx r1
