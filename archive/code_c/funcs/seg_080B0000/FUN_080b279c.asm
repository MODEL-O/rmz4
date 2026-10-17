; undefined FUN_080b279c(void)
; entry 0x80b279c  size 54 bytes

080B279C: 10b5         push {r4,lr}
080B279E: 041c         add r4,r0,#0x0
080B27A0: a07b         ldrb r0,[r4,#0xe]
080B27A2: 0028         cmp r0,#0x0
080B27A4: 06d1         bne 0x080b27b4
080B27A6: 0b49         ldr r1,[0x080b27d4]
080B27A8: 201c         add r0,r4,#0x0
080B27AA: 6af7a9fb     bl 0x0801cf00
080B27AE: a07b         ldrb r0,[r4,#0xe]
080B27B0: 0130         add r0,#0x1
080B27B2: a073         strb r0,[r4,#0xe]
080B27B4: 201c         add r0,r4,#0x0
080B27B6: 7330         add r0,#0x73
080B27B8: 0078         ldrb r0,[r0,#0x0]
080B27BA: 0328         cmp r0,#0x3
080B27BC: 06d1         bne 0x080b27cc
080B27BE: 0020         mov r0,#0x0
080B27C0: 6073         strb r0,[r4,#0xd]
080B27C2: 0121         mov r1,#0x1
080B27C4: e173         strb r1,[r4,#0xf]
080B27C6: a073         strb r0,[r4,#0xe]
080B27C8: 1e20         mov r0,#0x1e
080B27CA: a074         strb r0,[r4,#0x12]
080B27CC: 10bc         pop {r4}
080B27CE: 01bc         pop {r0}
080B27D0: 0047         bx r0
