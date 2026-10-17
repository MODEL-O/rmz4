; undefined FUN_080a9408(void)
; entry 0x80a9408  size 62 bytes

080A9408: 30b5         push {r4,r5,lr}
080A940A: 041c         add r4,r0,#0x0
080A940C: a56a         ldr r5,[r4,#0x28]
080A940E: a07b         ldrb r0,[r4,#0xe]
080A9410: 0028         cmp r0,#0x0
080A9412: 06d1         bne 0x080a9422
080A9414: 0749         ldr r1,[0x080a9434]
080A9416: 201c         add r0,r4,#0x0
080A9418: 73f772fd     bl 0x0801cf00
080A941C: a07b         ldrb r0,[r4,#0xe]
080A941E: 0130         add r0,#0x1
080A9420: a073         strb r0,[r4,#0xe]
080A9422: 201c         add r0,r4,#0x0
080A9424: 73f7e4fd     bl 0x0801cff0
080A9428: 687b         ldrb r0,[r5,#0xd]
080A942A: 0428         cmp r0,#0x4
080A942C: 04d1         bne 0x080a9438
080A942E: 0021         mov r1,#0x0
080A9430: 0120         mov r0,#0x1
080A9432: 05e0         b 0x080a9440
080A9438: 0528         cmp r0,#0x5
080A943A: 03d1         bne 0x080a9444
080A943C: 0021         mov r1,#0x0
080A943E: 0220         mov r0,#0x2
080A9440: 6073         strb r0,[r4,#0xd]
080A9442: a173         strb r1,[r4,#0xe]
080A9444: 30bc         pop {r4,r5}
080A9446: 01bc         pop {r0}
080A9448: 0047         bx r0
