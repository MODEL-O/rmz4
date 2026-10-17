; undefined FUN_0800e71c(void)
; entry 0x800e71c  size 50 bytes

0800E71C: 10b5         push {r4,lr}
0800E71E: 0c4a         ldr r2,[0x0800e750]
0800E720: 1188         ldrh r1,[r2,#0x0]
0800E722: 0c48         ldr r0,[0x0800e754]
0800E724: 0840         and r0,r1
0800E726: 1080         strh r0,[r2,#0x0]
0800E728: 0b4b         ldr r3,[0x0800e758]
0800E72A: ae20         mov r0,#0xae
0800E72C: 4000         lsl r0,r0,#0x1
0800E72E: 1a18         add r2,r3,r0
0800E730: 1188         ldrh r1,[r2,#0x0]
0800E732: 8024         mov r4,#0x80
0800E734: e401         lsl r4,r4,#0x7
0800E736: 201c         add r0,r4,#0x0
0800E738: 0843         orr r0,r1
0800E73A: 1080         strh r0,[r2,#0x0]
0800E73C: af20         mov r0,#0xaf
0800E73E: 4000         lsl r0,r0,#0x1
0800E740: 1918         add r1,r3,r0
0800E742: 8020         mov r0,#0x80
0800E744: 0002         lsl r0,r0,#0x8
0800E746: 0880         strh r0,[r1,#0x0]
0800E748: 10bc         pop {r4}
0800E74A: 01bc         pop {r0}
0800E74C: 0047         bx r0
