; undefined FUN_080fffd0(void)
; entry 0x80fffd0  size 54 bytes

080FFFD0: 00b5         push {lr}
080FFFD2: 021c         add r2,r0,#0x0
080FFFD4: 8c30         add r0,#0x8c
080FFFD6: 0068         ldr r0,[r0,#0x0]
080FFFD8: 8021         mov r1,#0x80
080FFFDA: 8900         lsl r1,r1,#0x2
080FFFDC: 0840         and r0,r1
080FFFDE: 0028         cmp r0,#0x0
080FFFE0: 0ed0         beq 0x08100000
080FFFE2: 0649         ldr r1,[0x080ffffc]
080FFFE4: 507a         ldrb r0,[r2,#0x9]
080FFFE6: 8000         lsl r0,r0,#0x2
080FFFE8: 4018         add r0,r0,r1
080FFFEA: 0221         mov r1,#0x2
080FFFEC: d160         str r1,[r2,#0xc]
080FFFEE: 0068         ldr r0,[r0,#0x0]
080FFFF0: 8068         ldr r0,[r0,#0x8]
080FFFF2: 5061         str r0,[r2,#0x14]
080FFFF4: 101c         add r0,r2,#0x0
080FFFF6: 00f009f8     bl 0x0810000c
080FFFFA: 04e0         b 0x08100006
08100000: 101c         add r0,r2,#0x0
08100002: 1cf7f5ff     bl 0x0801cff0
08100006: 01bc         pop {r0}
08100008: 0047         bx r0
