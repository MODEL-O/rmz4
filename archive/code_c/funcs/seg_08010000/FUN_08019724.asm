; undefined FUN_08019724(void)
; entry 0x8019724  size 40 bytes

08019724: 10b5         push {r4,lr}
08019726: 031c         add r3,r0,#0x0
08019728: 9c7b         ldrb r4,[r3,#0xe]
0801972A: 002c         cmp r4,#0x0
0801972C: 0bd1         bne 0x08019746
0801972E: 074a         ldr r2,[0x0801974c]
08019730: d96d         ldr r1,[r3,#0x5c]
08019732: 0902         lsl r1,r1,#0x8
08019734: 1088         ldrh r0,[r2,#0x0]
08019736: 8843         bic r0,r1
08019738: 1080         strh r0,[r2,#0x0]
0801973A: 0549         ldr r1,[0x08019750]
0801973C: d220         mov r0,#0xd2
0801973E: 0003         lsl r0,r0,#0xc
08019740: 0860         str r0,[r1,#0x0]
08019742: 601c         add r0,r4,#0x1
08019744: 9873         strb r0,[r3,#0xe]
08019746: 10bc         pop {r4}
08019748: 01bc         pop {r0}
0801974A: 0047         bx r0
