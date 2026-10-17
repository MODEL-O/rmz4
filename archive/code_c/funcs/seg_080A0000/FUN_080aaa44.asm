; undefined FUN_080aaa44(void)
; entry 0x80aaa44  size 62 bytes

080AAA44: 00b5         push {lr}
080AAA46: 82b0         sub sp,#0x8
080AAA48: 021c         add r2,r0,#0x0
080AAA4A: 917a         ldrb r1,[r2,#0xa]
080AAA4C: 1020         mov r0,#0x10
080AAA4E: 0840         and r0,r1
080AAA50: 0028         cmp r0,#0x0
080AAA52: 03d1         bne 0x080aaa5c
080AAA54: 506d         ldr r0,[r2,#0x54]
080AAA56: 9821         mov r1,#0x98
080AAA58: 4901         lsl r1,r1,#0x5
080AAA5A: 01e0         b 0x080aaa60
080AAA5C: 506d         ldr r0,[r2,#0x54]
080AAA5E: 0949         ldr r1,[0x080aaa84]
080AAA60: 4018         add r0,r0,r1
080AAA62: 0090         str r0,[sp,#0x0]
080AAA64: 906d         ldr r0,[r2,#0x58]
080AAA66: 0849         ldr r1,[0x080aaa88]
080AAA68: 4018         add r0,r0,r1
080AAA6A: 0190         str r0,[sp,#0x4]
080AAA6C: 0749         ldr r1,[0x080aaa8c]
080AAA6E: 927a         ldrb r2,[r2,#0xa]
080AAA70: 1209         lsr r2,r2,#0x4
080AAA72: 0120         mov r0,#0x1
080AAA74: 0240         and r2,r0
080AAA76: 6846         mov r0,sp
080AAA78: 37f04cff     bl 0x080e2914
080AAA7C: 02b0         add sp,#0x8
080AAA7E: 01bc         pop {r0}
080AAA80: 0047         bx r0
