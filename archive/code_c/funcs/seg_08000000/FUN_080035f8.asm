; undefined FUN_080035f8(void)
; entry 0x80035f8  size 36 bytes

080035F8: 30b5         push {r4,r5,lr}
080035FA: 039c         ldr r4,[sp,#0xc]
080035FC: 049d         ldr r5,[sp,#0x10]
080035FE: 0a68         ldr r2,[r1,#0x0]
08003600: 0260         str r2,[r0,#0x0]
08003602: 4968         ldr r1,[r1,#0x4]
08003604: 4160         str r1,[r0,#0x4]
08003606: c360         str r3,[r0,#0xc]
08003608: 0461         str r4,[r0,#0x10]
0800360A: 4561         str r5,[r0,#0x14]
0800360C: 034b         ldr r3,[0x0800361c]
0800360E: 1a40         and r2,r3
08003610: 0281         strh r2,[r0,#0x8]
08003612: 1940         and r1,r3
08003614: 4181         strh r1,[r0,#0xa]
08003616: 30bc         pop {r4,r5}
08003618: 01bc         pop {r0}
0800361A: 0047         bx r0
