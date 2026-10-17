; undefined FUN_08013360(void)
; entry 0x8013360  size 44 bytes

08013360: 30b5         push {r4,r5,lr}
08013362: c36d         ldr r3,[r0,#0x5c]
08013364: 1b04         lsl r3,r3,#0x10
08013366: 1b0d         lsr r3,r3,#0x14
08013368: 9b00         lsl r3,r3,#0x2
0801336A: 084c         ldr r4,[0x0801338c]
0801336C: 1d19         add r5,r3,r4
0801336E: 426b         ldr r2,[r0,#0x34]
08013370: 018a         ldrh r1,[r0,#0x10]
08013372: c908         lsr r1,r1,#0x3
08013374: 5218         add r2,r2,r1
08013376: 2a80         strh r2,[r5,#0x0]
08013378: 0234         add r4,#0x2
0801337A: 1b19         add r3,r3,r4
0801337C: 816b         ldr r1,[r0,#0x38]
0801337E: c800         lsl r0,r1,#0x3
08013380: 401a         sub r0,r0,r1
08013382: c008         lsr r0,r0,#0x3
08013384: 1880         strh r0,[r3,#0x0]
08013386: 30bc         pop {r4,r5}
08013388: 01bc         pop {r0}
0801338A: 0047         bx r0
