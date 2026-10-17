; undefined FUN_080feb0c(void)
; entry 0x80feb0c  size 54 bytes

080FEB0C: 00b5         push {lr}
080FEB0E: 021c         add r2,r0,#0x0
080FEB10: 8c30         add r0,#0x8c
080FEB12: 0068         ldr r0,[r0,#0x0]
080FEB14: 8021         mov r1,#0x80
080FEB16: 8900         lsl r1,r1,#0x2
080FEB18: 0840         and r0,r1
080FEB1A: 0028         cmp r0,#0x0
080FEB1C: 0ed0         beq 0x080feb3c
080FEB1E: 0649         ldr r1,[0x080feb38]
080FEB20: 507a         ldrb r0,[r2,#0x9]
080FEB22: 8000         lsl r0,r0,#0x2
080FEB24: 4018         add r0,r0,r1
080FEB26: 0221         mov r1,#0x2
080FEB28: d160         str r1,[r2,#0xc]
080FEB2A: 0068         ldr r0,[r0,#0x0]
080FEB2C: 8068         ldr r0,[r0,#0x8]
080FEB2E: 5061         str r0,[r2,#0x14]
080FEB30: 101c         add r0,r2,#0x0
080FEB32: 00f009f8     bl 0x080feb48
080FEB36: 04e0         b 0x080feb42
080FEB3C: 101c         add r0,r2,#0x0
080FEB3E: 1ef757fa     bl 0x0801cff0
080FEB42: 01bc         pop {r0}
080FEB44: 0047         bx r0
