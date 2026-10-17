; undefined FUN_08001c04(void)
; entry 0x8001c04  size 38 bytes

08001C04: 81b0         sub sp,#0x4
08001C06: 0948         ldr r0,[0x08001c2c]
08001C08: 0021         mov r1,#0x0
08001C0A: 0160         str r1,[r0,#0x0]
08001C0C: c830         add r0,#0xc8
08001C0E: 0160         str r1,[r0,#0x0]
08001C10: 0748         ldr r0,[0x08001c30]
08001C12: 0090         str r0,[sp,#0x0]
08001C14: 0749         ldr r1,[0x08001c34]
08001C16: 6846         mov r0,sp
08001C18: 0860         str r0,[r1,#0x0]
08001C1A: c020         mov r0,#0xc0
08001C1C: c004         lsl r0,r0,#0x13
08001C1E: 4860         str r0,[r1,#0x4]
08001C20: 0548         ldr r0,[0x08001c38]
08001C22: 8860         str r0,[r1,#0x8]
08001C24: 8868         ldr r0,[r1,#0x8]
08001C26: 01b0         add sp,#0x4
08001C28: 7047         bx lr
