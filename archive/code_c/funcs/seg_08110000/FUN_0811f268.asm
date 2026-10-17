; undefined FUN_0811f268(void)
; entry 0x811f268  size 64 bytes

0811F268: 30b5         push {r4,r5,lr}
0811F26A: 051c         add r5,r0,#0x0
0811F26C: 0e48         ldr r0,[0x0811f2a8]
0811F26E: 2a18         add r2,r5,r0
0811F270: 0e48         ldr r0,[0x0811f2ac]
0811F272: 0188         ldrh r1,[r0,#0x0]
0811F274: 0e48         ldr r0,[0x0811f2b0]
0811F276: 0840         and r0,r1
0811F278: 0002         lsl r0,r0,#0x8
0811F27A: f021         mov r1,#0xf0
0811F27C: c901         lsl r1,r1,#0x7
0811F27E: 4018         add r0,r0,r1
0811F280: 1060         str r0,[r2,#0x0]
0811F282: 0c48         ldr r0,[0x0811f2b4]
0811F284: 2d18         add r5,r5,r0
0811F286: 281c         add r0,r5,#0x0
0811F288: e4f6f2f8     bl 0x08003470
0811F28C: 0a4c         ldr r4,[0x0811f2b8]
0811F28E: 2068         ldr r0,[r4,#0x0]
0811F290: fdf684fa     bl 0x0801c79c
0811F294: 2068         ldr r0,[r4,#0x0]
0811F296: 291c         add r1,r5,#0x0
0811F298: fdf644fb     bl 0x0801c924
0811F29C: 281c         add r0,r5,#0x0
0811F29E: e4f6bff8     bl 0x08003420
0811F2A2: 30bc         pop {r4,r5}
0811F2A4: 01bc         pop {r0}
0811F2A6: 0047         bx r0
