; undefined FUN_080a9b2c(void)
; entry 0x80a9b2c  size 72 bytes

080A9B2C: 00b5         push {lr}
080A9B2E: 82b0         sub sp,#0x8
080A9B30: 021c         add r2,r0,#0x0
080A9B32: 0e48         ldr r0,[0x080a9b6c]
080A9B34: 4168         ldr r1,[r0,#0x4]
080A9B36: 0068         ldr r0,[r0,#0x0]
080A9B38: 0090         str r0,[sp,#0x0]
080A9B3A: 0191         str r1,[sp,#0x4]
080A9B3C: 917a         ldrb r1,[r2,#0xa]
080A9B3E: 1020         mov r0,#0x10
080A9B40: 0840         and r0,r1
080A9B42: 0006         lsl r0,r0,#0x18
080A9B44: 000e         lsr r0,r0,#0x18
080A9B46: 4042         rsb r0,r0
080A9B48: c017         asr r0,r0,#0x1f
080A9B4A: 0421         mov r1,#0x4
080A9B4C: 0840         and r0,r1
080A9B4E: 6844         add r0,sp
080A9B50: 0168         ldr r1,[r0,#0x0]
080A9B52: 0902         lsl r1,r1,#0x8
080A9B54: 506d         ldr r0,[r2,#0x54]
080A9B56: 4018         add r0,r0,r1
080A9B58: 916d         ldr r1,[r2,#0x58]
080A9B5A: 054a         ldr r2,[0x080a9b70]
080A9B5C: 8918         add r1,r1,r2
080A9B5E: 5ef78df8     bl 0x08007c7c
080A9B62: 0004         lsl r0,r0,#0x10
080A9B64: 0028         cmp r0,#0x0
080A9B66: 05d1         bne 0x080a9b74
080A9B68: 0020         mov r0,#0x0
080A9B6A: 04e0         b 0x080a9b76
080A9B74: 0120         mov r0,#0x1
080A9B76: 02b0         add sp,#0x8
080A9B78: 02bc         pop {r1}
080A9B7A: 0847         bx r1
