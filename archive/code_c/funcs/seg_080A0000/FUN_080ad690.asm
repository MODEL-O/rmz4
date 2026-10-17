; undefined FUN_080ad690(void)
; entry 0x80ad690  size 50 bytes

080AD690: 00b5         push {lr}
080AD692: 021c         add r2,r0,#0x0
080AD694: 916a         ldr r1,[r2,#0x28]
080AD696: 087b         ldrb r0,[r1,#0xc]
080AD698: 0128         cmp r0,#0x1
080AD69A: 0fd9         bls 0x080ad6bc
080AD69C: 0649         ldr r1,[0x080ad6b8]
080AD69E: 507a         ldrb r0,[r2,#0x9]
080AD6A0: 8000         lsl r0,r0,#0x2
080AD6A2: 4018         add r0,r0,r1
080AD6A4: 0221         mov r1,#0x2
080AD6A6: d160         str r1,[r2,#0xc]
080AD6A8: 0068         ldr r0,[r0,#0x0]
080AD6AA: 8068         ldr r0,[r0,#0x8]
080AD6AC: 5061         str r0,[r2,#0x14]
080AD6AE: 101c         add r0,r2,#0x0
080AD6B0: 00f04ef8     bl 0x080ad750
080AD6B4: 06e0         b 0x080ad6c4
080AD6BC: 486d         ldr r0,[r1,#0x54]
080AD6BE: 896d         ldr r1,[r1,#0x58]
080AD6C0: 5065         str r0,[r2,#0x54]
080AD6C2: 9165         str r1,[r2,#0x58]
080AD6C4: 01bc         pop {r0}
080AD6C6: 0047         bx r0
