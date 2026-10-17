; undefined FUN_080ea650(void)
; entry 0x80ea650  size 28 bytes

080EA650: 30b5         push {r4,r5,lr}
080EA652: 051c         add r5,r0,#0x0
080EA654: a87b         ldrb r0,[r5,#0xe]
080EA656: 0428         cmp r0,#0x4
080EA658: 00d9         bls 0x080ea65c
080EA65A: f8e0         b 0x080ea84e
080EA65C: 8000         lsl r0,r0,#0x2
080EA65E: 0249         ldr r1,[0x080ea668]
080EA660: 4018         add r0,r0,r1
080EA662: 0068         ldr r0,[r0,#0x0]
080EA664: 8746         mov pc,r0
080EA84E: 30bc         pop {r4,r5}
080EA850: 01bc         pop {r0}
080EA852: 0047         bx r0
