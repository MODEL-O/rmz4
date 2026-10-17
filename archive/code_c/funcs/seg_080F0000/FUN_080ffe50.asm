; undefined FUN_080ffe50(void)
; entry 0x80ffe50  size 54 bytes

080FFE50: 00b5         push {lr}
080FFE52: 021c         add r2,r0,#0x0
080FFE54: 8c30         add r0,#0x8c
080FFE56: 0068         ldr r0,[r0,#0x0]
080FFE58: 8021         mov r1,#0x80
080FFE5A: 8900         lsl r1,r1,#0x2
080FFE5C: 0840         and r0,r1
080FFE5E: 0028         cmp r0,#0x0
080FFE60: 0ed0         beq 0x080ffe80
080FFE62: 0649         ldr r1,[0x080ffe7c]
080FFE64: 507a         ldrb r0,[r2,#0x9]
080FFE66: 8000         lsl r0,r0,#0x2
080FFE68: 4018         add r0,r0,r1
080FFE6A: 0221         mov r1,#0x2
080FFE6C: d160         str r1,[r2,#0xc]
080FFE6E: 0068         ldr r0,[r0,#0x0]
080FFE70: 8068         ldr r0,[r0,#0x8]
080FFE72: 5061         str r0,[r2,#0x14]
080FFE74: 101c         add r0,r2,#0x0
080FFE76: 00f009f8     bl 0x080ffe8c
080FFE7A: 04e0         b 0x080ffe86
080FFE80: 101c         add r0,r2,#0x0
080FFE82: 1df7b5f8     bl 0x0801cff0
080FFE86: 01bc         pop {r0}
080FFE88: 0047         bx r0
