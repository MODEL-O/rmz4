; undefined FUN_080ffe8c(void)
; entry 0x80ffe8c  size 54 bytes

080FFE8C: 021c         add r2,r0,#0x0
080FFE8E: 917a         ldrb r1,[r2,#0xa]
080FFE90: fe20         mov r0,#0xfe
080FFE92: 0840         and r0,r1
080FFE94: 0021         mov r1,#0x0
080FFE96: 9072         strb r0,[r2,#0xa]
080FFE98: 101c         add r0,r2,#0x0
080FFE9A: 8c30         add r0,#0x8c
080FFE9C: 0160         str r1,[r0,#0x0]
080FFE9E: 0430         add r0,#0x4
080FFEA0: 0160         str r1,[r0,#0x0]
080FFEA2: 0430         add r0,#0x4
080FFEA4: 0170         strb r1,[r0,#0x0]
080FFEA6: 917a         ldrb r1,[r2,#0xa]
080FFEA8: fb20         mov r0,#0xfb
080FFEAA: 0840         and r0,r1
080FFEAC: 9072         strb r0,[r2,#0xa]
080FFEAE: 0549         ldr r1,[0x080ffec4]
080FFEB0: 507a         ldrb r0,[r2,#0x9]
080FFEB2: 8000         lsl r0,r0,#0x2
080FFEB4: 4018         add r0,r0,r1
080FFEB6: 0421         mov r1,#0x4
080FFEB8: d160         str r1,[r2,#0xc]
080FFEBA: 0068         ldr r0,[r0,#0x0]
080FFEBC: 0069         ldr r0,[r0,#0x10]
080FFEBE: 5061         str r0,[r2,#0x14]
080FFEC0: 7047         bx lr
