; undefined FUN_080ba828(void)
; entry 0x80ba828  size 76 bytes

080BA828: 10b5         push {r4,lr}
080BA82A: 041c         add r4,r0,#0x0
080BA82C: e07b         ldrb r0,[r4,#0xf]
080BA82E: 0028         cmp r0,#0x0
080BA830: 0dd1         bne 0x080ba84e
080BA832: 201c         add r0,r4,#0x0
080BA834: 7430         add r0,#0x74
080BA836: 0f49         ldr r1,[0x080ba874]
080BA838: 4af7a4ff     bl 0x08005784
080BA83C: 0e49         ldr r1,[0x080ba878]
080BA83E: 201c         add r0,r4,#0x0
080BA840: 62f75efb     bl 0x0801cf00
080BA844: 1020         mov r0,#0x10
080BA846: a074         strb r0,[r4,#0x12]
080BA848: e07b         ldrb r0,[r4,#0xf]
080BA84A: 0130         add r0,#0x1
080BA84C: e073         strb r0,[r4,#0xf]
080BA84E: 201c         add r0,r4,#0x0
080BA850: 62f7cefb     bl 0x0801cff0
080BA854: a07c         ldrb r0,[r4,#0x12]
080BA856: 0028         cmp r0,#0x0
080BA858: 04d0         beq 0x080ba864
080BA85A: 0138         sub r0,#0x1
080BA85C: a074         strb r0,[r4,#0x12]
080BA85E: 0006         lsl r0,r0,#0x18
080BA860: 0028         cmp r0,#0x0
080BA862: 04d1         bne 0x080ba86e
080BA864: 0021         mov r1,#0x0
080BA866: 0220         mov r0,#0x2
080BA868: 6073         strb r0,[r4,#0xd]
080BA86A: a173         strb r1,[r4,#0xe]
080BA86C: e173         strb r1,[r4,#0xf]
080BA86E: 10bc         pop {r4}
080BA870: 01bc         pop {r0}
080BA872: 0047         bx r0
