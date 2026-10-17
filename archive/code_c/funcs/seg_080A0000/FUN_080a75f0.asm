; undefined FUN_080a75f0(void)
; entry 0x80a75f0  size 58 bytes

080A75F0: 30b5         push {r4,r5,lr}
080A75F2: 041c         add r4,r0,#0x0
080A75F4: a57b         ldrb r5,[r4,#0xe]
080A75F6: 002d         cmp r5,#0x0
080A75F8: 08d1         bne 0x080a760c
080A75FA: 8b21         mov r1,#0x8b
080A75FC: 0902         lsl r1,r1,#0x8
080A75FE: 75f77ffc     bl 0x0801cf00
080A7602: a574         strb r5,[r4,#0x12]
080A7604: e573         strb r5,[r4,#0xf]
080A7606: a07b         ldrb r0,[r4,#0xe]
080A7608: 0130         add r0,#0x1
080A760A: a073         strb r0,[r4,#0xe]
080A760C: e07b         ldrb r0,[r4,#0xf]
080A760E: 0428         cmp r0,#0x4
080A7610: 00d9         bls 0x080a7614
080A7612: 82e0         b 0x080a771a
080A7614: 8000         lsl r0,r0,#0x2
080A7616: 0249         ldr r1,[0x080a7620]
080A7618: 4018         add r0,r0,r1
080A761A: 0068         ldr r0,[r0,#0x0]
080A761C: 8746         mov pc,r0
080A771A: 201c         add r0,r4,#0x0
080A771C: 75f768fc     bl 0x0801cff0
080A7720: 30bc         pop {r4,r5}
080A7722: 01bc         pop {r0}
080A7724: 0047         bx r0
