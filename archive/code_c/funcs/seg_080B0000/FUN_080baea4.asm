; undefined FUN_080baea4(void)
; entry 0x80baea4  size 64 bytes

080BAEA4: 10b5         push {r4,lr}
080BAEA6: 041c         add r4,r0,#0x0
080BAEA8: e07b         ldrb r0,[r4,#0xf]
080BAEAA: 0028         cmp r0,#0x0
080BAEAC: 0bd1         bne 0x080baec6
080BAEAE: 201c         add r0,r4,#0x0
080BAEB0: 7430         add r0,#0x74
080BAEB2: 0c49         ldr r1,[0x080baee4]
080BAEB4: 4af766fc     bl 0x08005784
080BAEB8: 0b49         ldr r1,[0x080baee8]
080BAEBA: 201c         add r0,r4,#0x0
080BAEBC: 62f720f8     bl 0x0801cf00
080BAEC0: e07b         ldrb r0,[r4,#0xf]
080BAEC2: 0130         add r0,#0x1
080BAEC4: e073         strb r0,[r4,#0xf]
080BAEC6: 201c         add r0,r4,#0x0
080BAEC8: 62f734f9     bl 0x0801d134
080BAECC: 201c         add r0,r4,#0x0
080BAECE: 7330         add r0,#0x73
080BAED0: 0178         ldrb r1,[r0,#0x0]
080BAED2: 0329         cmp r1,#0x3
080BAED4: 03d1         bne 0x080baede
080BAED6: 0020         mov r0,#0x0
080BAED8: 6173         strb r1,[r4,#0xd]
080BAEDA: a073         strb r0,[r4,#0xe]
080BAEDC: e073         strb r0,[r4,#0xf]
080BAEDE: 10bc         pop {r4}
080BAEE0: 01bc         pop {r0}
080BAEE2: 0047         bx r0
