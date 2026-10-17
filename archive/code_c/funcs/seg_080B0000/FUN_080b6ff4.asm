; undefined FUN_080b6ff4(void)
; entry 0x80b6ff4  size 58 bytes

080B6FF4: 30b5         push {r4,r5,lr}
080B6FF6: 041c         add r4,r0,#0x0
080B6FF8: 657c         ldrb r5,[r4,#0x11]
080B6FFA: e07b         ldrb r0,[r4,#0xf]
080B6FFC: 0028         cmp r0,#0x0
080B6FFE: 12d1         bne 0x080b7026
080B7000: 201c         add r0,r4,#0x0
080B7002: 7430         add r0,#0x74
080B7004: 1249         ldr r1,[0x080b7050]
080B7006: 4ef7bdfb     bl 0x08005784
080B700A: 1249         ldr r1,[0x080b7054]
080B700C: 201c         add r0,r4,#0x0
080B700E: 65f777ff     bl 0x0801cf00
080B7012: 221c         add r2,r4,#0x0
080B7014: b432         add r2,#0xb4
080B7016: 691c         add r1,r5,#0x1
080B7018: 8800         lsl r0,r1,#0x2
080B701A: 4018         add r0,r0,r1
080B701C: c000         lsl r0,r0,#0x3
080B701E: 1060         str r0,[r2,#0x0]
080B7020: e07b         ldrb r0,[r4,#0xf]
080B7022: 0130         add r0,#0x1
080B7024: e073         strb r0,[r4,#0xf]
080B7026: 201c         add r0,r4,#0x0
080B7028: 65f7e2ff     bl 0x0801cff0
080B702C: 201c         add r0,r4,#0x0
