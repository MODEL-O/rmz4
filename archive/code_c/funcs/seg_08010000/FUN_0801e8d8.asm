; undefined FUN_0801e8d8(void)
; entry 0x801e8d8  size 54 bytes

0801E8D8: 30b5         push {r4,r5,lr}
0801E8DA: 82b0         sub sp,#0x8
0801E8DC: 041c         add r4,r0,#0x0
0801E8DE: 0025         mov r5,#0x0
0801E8E0: 0095         str r5,[sp,#0x0]
0801E8E2: 0b4a         ldr r2,[0x0801e910]
0801E8E4: 6846         mov r0,sp
0801E8E6: 211c         add r1,r4,#0x0
0801E8E8: 0af17af9     bl 0x08128be0
0801E8EC: 0195         str r5,[sp,#0x4]
0801E8EE: 01a8         add r0,sp,#0x4
0801E8F0: 211c         add r1,r4,#0x0
0801E8F2: 2031         add r1,#0x20
0801E8F4: 074a         ldr r2,[0x0801e914]
0801E8F6: 0af175f9     bl 0x08128be4
0801E8FA: 217c         ldrb r1,[r4,#0x10]
0801E8FC: 1020         mov r0,#0x10
0801E8FE: 0843         orr r0,r1
0801E900: 2021         mov r1,#0x20
0801E902: 0843         orr r0,r1
0801E904: 2074         strb r0,[r4,#0x10]
0801E906: 02b0         add sp,#0x8
0801E908: 30bc         pop {r4,r5}
0801E90A: 01bc         pop {r0}
0801E90C: 0047         bx r0
