; undefined FUN_080ceef4(void)
; entry 0x80ceef4  size 64 bytes

080CEEF4: 00b5         push {lr}
080CEEF6: 021c         add r2,r0,#0x0
080CEEF8: 8c30         add r0,#0x8c
080CEEFA: 0068         ldr r0,[r0,#0x0]
080CEEFC: 8021         mov r1,#0x80
080CEEFE: 8900         lsl r1,r1,#0x2
080CEF00: 0840         and r0,r1
080CEF02: 0028         cmp r0,#0x0
080CEF04: 0ed0         beq 0x080cef24
080CEF06: 0649         ldr r1,[0x080cef20]
080CEF08: 507a         ldrb r0,[r2,#0x9]
080CEF0A: 8000         lsl r0,r0,#0x2
080CEF0C: 4018         add r0,r0,r1
080CEF0E: 0221         mov r1,#0x2
080CEF10: d160         str r1,[r2,#0xc]
080CEF12: 0068         ldr r0,[r0,#0x0]
080CEF14: 8068         ldr r0,[r0,#0x8]
080CEF16: 5061         str r0,[r2,#0x14]
080CEF18: 101c         add r0,r2,#0x0
080CEF1A: 00f00ff8     bl 0x080cef3c
080CEF1E: 09e0         b 0x080cef34
080CEF24: 0448         ldr r0,[0x080cef38]
080CEF26: 117c         ldrb r1,[r2,#0x10]
080CEF28: 8900         lsl r1,r1,#0x2
080CEF2A: 0918         add r1,r1,r0
080CEF2C: 0968         ldr r1,[r1,#0x0]
080CEF2E: 101c         add r0,r2,#0x0
080CEF30: 5af026f8     bl 0x08128f80
080CEF34: 01bc         pop {r0}
080CEF36: 0047         bx r0
