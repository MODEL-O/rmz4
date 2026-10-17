; undefined FUN_0807b430(void)
; entry 0x807b430  size 50 bytes

0807B430: 10b5         push {r4,lr}
0807B432: 041c         add r4,r0,#0x0
0807B434: 6069         ldr r0,[r4,#0x14]
0807B436: 0121         mov r1,#0x1
0807B438: 0840         and r0,r1
0807B43A: 0028         cmp r0,#0x0
0807B43C: 0ed0         beq 0x0807b45c
0807B43E: 4420         mov r0,#0x44
0807B440: 8bf7a0fa     bl 0x08006984
0807B444: e068         ldr r0,[r4,#0xc]
0807B446: c06a         ldr r0,[r0,#0x2c]
0807B448: e26a         ldr r2,[r4,#0x2c]
0807B44A: 0023         mov r3,#0x0
0807B44C: 416d         ldr r1,[r0,#0x54]
0807B44E: 506d         ldr r0,[r2,#0x54]
0807B450: 8142         cmp r1,r0
0807B452: 00dd         ble 0x0807b456
0807B454: 0123         mov r3,#0x1
0807B456: 101c         add r0,r2,#0x0
0807B458: d430         add r0,#0xd4
0807B45A: 0370         strb r3,[r0,#0x0]
0807B45C: 10bc         pop {r4}
0807B45E: 01bc         pop {r0}
0807B460: 0047         bx r0
