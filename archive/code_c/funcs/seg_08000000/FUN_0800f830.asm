; undefined FUN_0800f830(void)
; entry 0x800f830  size 54 bytes

0800F830: 00b5         push {lr}
0800F832: 021c         add r2,r0,#0x0
0800F834: 0b1c         add r3,r1,#0x0
0800F836: 0948         ldr r0,[0x0800f85c]
0800F838: 0949         ldr r1,[0x0800f860]
0800F83A: 4018         add r0,r0,r1
0800F83C: 0178         ldrb r1,[r0,#0x0]
0800F83E: 0f20         mov r0,#0xf
0800F840: 0840         and r0,r1
0800F842: 0228         cmp r0,#0x2
0800F844: 0ed1         bne 0x0800f864
0800F846: 101c         add r0,r2,#0x0
0800F848: 6c30         add r0,#0x6c
0800F84A: 0088         ldrh r0,[r0,#0x0]
0800F84C: 0009         lsr r0,r0,#0x4
0800F84E: d064         str r0,[r2,#0x4c]
0800F850: 101c         add r0,r2,#0x0
0800F852: 191c         add r1,r3,#0x0
0800F854: f7f7f0fe     bl 0x08007638
0800F858: 08e0         b 0x0800f86c
0800F864: 101c         add r0,r2,#0x0
0800F866: 191c         add r1,r3,#0x0
0800F868: f7f7e6fe     bl 0x08007638
0800F86C: 01bc         pop {r0}
0800F86E: 0047         bx r0
