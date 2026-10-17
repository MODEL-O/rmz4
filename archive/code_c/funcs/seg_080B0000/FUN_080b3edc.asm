; undefined FUN_080b3edc(void)
; entry 0x80b3edc  size 72 bytes

080B3EDC: 00b5         push {lr}
080B3EDE: 82b0         sub sp,#0x8
080B3EE0: 021c         add r2,r0,#0x0
080B3EE2: 0e48         ldr r0,[0x080b3f1c]
080B3EE4: 4168         ldr r1,[r0,#0x4]
080B3EE6: 0068         ldr r0,[r0,#0x0]
080B3EE8: 0090         str r0,[sp,#0x0]
080B3EEA: 0191         str r1,[sp,#0x4]
080B3EEC: 917a         ldrb r1,[r2,#0xa]
080B3EEE: 1020         mov r0,#0x10
080B3EF0: 0840         and r0,r1
080B3EF2: 0006         lsl r0,r0,#0x18
080B3EF4: 000e         lsr r0,r0,#0x18
080B3EF6: 4042         rsb r0,r0
080B3EF8: c017         asr r0,r0,#0x1f
080B3EFA: 0421         mov r1,#0x4
080B3EFC: 0840         and r0,r1
080B3EFE: 6844         add r0,sp
080B3F00: 0168         ldr r1,[r0,#0x0]
080B3F02: 0902         lsl r1,r1,#0x8
080B3F04: 506d         ldr r0,[r2,#0x54]
080B3F06: 4018         add r0,r0,r1
080B3F08: 916d         ldr r1,[r2,#0x58]
080B3F0A: 054a         ldr r2,[0x080b3f20]
080B3F0C: 8918         add r1,r1,r2
080B3F0E: 53f7b5fe     bl 0x08007c7c
080B3F12: 0004         lsl r0,r0,#0x10
080B3F14: 0028         cmp r0,#0x0
080B3F16: 05d1         bne 0x080b3f24
080B3F18: 0020         mov r0,#0x0
080B3F1A: 04e0         b 0x080b3f26
080B3F24: 0120         mov r0,#0x1
080B3F26: 02b0         add sp,#0x8
080B3F28: 02bc         pop {r1}
080B3F2A: 0847         bx r1
