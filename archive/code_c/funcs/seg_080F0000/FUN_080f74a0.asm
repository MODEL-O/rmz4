; undefined FUN_080f74a0(void)
; entry 0x80f74a0  size 36 bytes

080F74A0: 30b5         push {r4,r5,lr}
080F74A2: 041c         add r4,r0,#0x0
080F74A4: a56a         ldr r5,[r4,#0x28]
080F74A6: 00f02ff8     bl 0x080f7508
080F74AA: 002d         cmp r5,#0x0
080F74AC: 04d0         beq 0x080f74b8
080F74AE: 291c         add r1,r5,#0x0
080F74B0: b531         add r1,#0xb5
080F74B2: 0878         ldrb r0,[r1,#0x0]
080F74B4: 0138         sub r0,#0x1
080F74B6: 0870         strb r0,[r1,#0x0]
080F74B8: 201c         add r0,r4,#0x0
080F74BA: f2f747f8     bl 0x080e954c
080F74BE: 30bc         pop {r4,r5}
080F74C0: 01bc         pop {r0}
080F74C2: 0047         bx r0
