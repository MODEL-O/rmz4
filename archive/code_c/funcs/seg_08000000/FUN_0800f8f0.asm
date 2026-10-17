; undefined FUN_0800f8f0(void)
; entry 0x800f8f0  size 64 bytes

0800F8F0: 10b5         push {r4,lr}
0800F8F2: 031c         add r3,r0,#0x0
0800F8F4: 9c7b         ldrb r4,[r3,#0xe]
0800F8F6: 002c         cmp r4,#0x0
0800F8F8: 0bd1         bne 0x0800f912
0800F8FA: 0d4a         ldr r2,[0x0800f930]
0800F8FC: d96d         ldr r1,[r3,#0x5c]
0800F8FE: 0902         lsl r1,r1,#0x8
0800F900: 1088         ldrh r0,[r2,#0x0]
0800F902: 8843         bic r0,r1
0800F904: 1080         strh r0,[r2,#0x0]
0800F906: 0b49         ldr r1,[0x0800f934]
0800F908: f020         mov r0,#0xf0
0800F90A: 4002         lsl r0,r0,#0x9
0800F90C: 0860         str r0,[r1,#0x0]
0800F90E: 601c         add r0,r4,#0x1
0800F910: 9873         strb r0,[r3,#0xe]
0800F912: 094a         ldr r2,[0x0800f938]
0800F914: 918a         ldrh r1,[r2,#0x14]
0800F916: 0120         mov r0,#0x1
0800F918: 0840         and r0,r1
0800F91A: 0028         cmp r0,#0x0
0800F91C: 05d0         beq 0x0800f92a
0800F91E: a220         mov r0,#0xa2
0800F920: 4000         lsl r0,r0,#0x1
0800F922: 1118         add r1,r2,r0
0800F924: f020         mov r0,#0xf0
0800F926: 0002         lsl r0,r0,#0x8
0800F928: 0860         str r0,[r1,#0x0]
0800F92A: 10bc         pop {r4}
0800F92C: 01bc         pop {r0}
0800F92E: 0047         bx r0
