; undefined FUN_080b9328(void)
; entry 0x80b9328  size 66 bytes

080B9328: 10b5         push {r4,lr}
080B932A: 041c         add r4,r0,#0x0
080B932C: e07b         ldrb r0,[r4,#0xf]
080B932E: 0028         cmp r0,#0x0
080B9330: 0bd1         bne 0x080b934a
080B9332: 201c         add r0,r4,#0x0
080B9334: 7430         add r0,#0x74
080B9336: 0d49         ldr r1,[0x080b936c]
080B9338: 4cf724fa     bl 0x08005784
080B933C: 0c49         ldr r1,[0x080b9370]
080B933E: 201c         add r0,r4,#0x0
080B9340: 63f7defd     bl 0x0801cf00
080B9344: e07b         ldrb r0,[r4,#0xf]
080B9346: 0130         add r0,#0x1
080B9348: e073         strb r0,[r4,#0xf]
080B934A: 201c         add r0,r4,#0x0
080B934C: 63f750fe     bl 0x0801cff0
080B9350: 201c         add r0,r4,#0x0
080B9352: 7330         add r0,#0x73
080B9354: 0078         ldrb r0,[r0,#0x0]
080B9356: 0328         cmp r0,#0x3
080B9358: 04d1         bne 0x080b9364
080B935A: 0021         mov r1,#0x0
080B935C: 0620         mov r0,#0x6
080B935E: 6073         strb r0,[r4,#0xd]
080B9360: a173         strb r1,[r4,#0xe]
080B9362: e173         strb r1,[r4,#0xf]
080B9364: 10bc         pop {r4}
080B9366: 01bc         pop {r0}
080B9368: 0047         bx r0
