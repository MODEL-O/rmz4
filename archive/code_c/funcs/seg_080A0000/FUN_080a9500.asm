; undefined FUN_080a9500(void)
; entry 0x80a9500  size 60 bytes

080A9500: 30b5         push {r4,r5,lr}
080A9502: 041c         add r4,r0,#0x0
080A9504: a56a         ldr r5,[r4,#0x28]
080A9506: a07b         ldrb r0,[r4,#0xe]
080A9508: 0028         cmp r0,#0x0
080A950A: 0bd1         bne 0x080a9524
080A950C: 281c         add r0,r5,#0x0
080A950E: b430         add r0,#0xb4
080A9510: 008d         ldrh r0,[r0,#0x28]
080A9512: 0028         cmp r0,#0x0
080A9514: 06d0         beq 0x080a9524
080A9516: 0949         ldr r1,[0x080a953c]
080A9518: 201c         add r0,r4,#0x0
080A951A: 73f7f1fc     bl 0x0801cf00
080A951E: a07b         ldrb r0,[r4,#0xe]
080A9520: 0130         add r0,#0x1
080A9522: a073         strb r0,[r4,#0xe]
080A9524: 201c         add r0,r4,#0x0
080A9526: 73f763fd     bl 0x0801cff0
080A952A: 687b         ldrb r0,[r5,#0xd]
080A952C: 0328         cmp r0,#0x3
080A952E: 02d1         bne 0x080a9536
080A9530: 0020         mov r0,#0x0
080A9532: 6073         strb r0,[r4,#0xd]
080A9534: a073         strb r0,[r4,#0xe]
080A9536: 30bc         pop {r4,r5}
080A9538: 01bc         pop {r0}
080A953A: 0047         bx r0
