; undefined FUN_080ab5ec(void)
; entry 0x80ab5ec  size 34 bytes

080AB5EC: 00b5         push {lr}
080AB5EE: 031c         add r3,r0,#0x0
080AB5F0: 986a         ldr r0,[r3,#0x28]
080AB5F2: 011c         add r1,r0,#0x0
080AB5F4: bb31         add r1,#0xbb
080AB5F6: 0a78         ldrb r2,[r1,#0x0]
080AB5F8: 0020         mov r0,#0x0
080AB5FA: 0856         ldrsb r0,[r1,r0]
080AB5FC: 0028         cmp r0,#0x0
080AB5FE: 01d0         beq 0x080ab604
080AB600: 501e         sub r0,r2,#0x1
080AB602: 0870         strb r0,[r1,#0x0]
080AB604: 181c         add r0,r3,#0x0
080AB606: d4f771f9     bl 0x0807f8ec
080AB60A: 01bc         pop {r0}
080AB60C: 0047         bx r0
