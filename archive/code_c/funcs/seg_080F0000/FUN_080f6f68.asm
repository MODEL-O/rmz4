; undefined FUN_080f6f68(void)
; entry 0x80f6f68  size 40 bytes

080F6F68: 00b5         push {lr}
080F6F6A: 021c         add r2,r0,#0x0
080F6F6C: b530         add r0,#0xb5
080F6F6E: 0078         ldrb r0,[r0,#0x0]
080F6F70: 0028         cmp r0,#0x0
080F6F72: 0bd1         bne 0x080f6f8c
080F6F74: 0649         ldr r1,[0x080f6f90]
080F6F76: 507a         ldrb r0,[r2,#0x9]
080F6F78: 8000         lsl r0,r0,#0x2
080F6F7A: 4018         add r0,r0,r1
080F6F7C: 0221         mov r1,#0x2
080F6F7E: d160         str r1,[r2,#0xc]
080F6F80: 0068         ldr r0,[r0,#0x0]
080F6F82: 8068         ldr r0,[r0,#0x8]
080F6F84: 5061         str r0,[r2,#0x14]
080F6F86: 101c         add r0,r2,#0x0
080F6F88: 00f03efa     bl 0x080f7408
080F6F8C: 01bc         pop {r0}
080F6F8E: 0047         bx r0
