; undefined FUN_080cee40(void)
; entry 0x80cee40  size 38 bytes

080CEE40: 10b5         push {r4,lr}
080CEE42: 041c         add r4,r0,#0x0
080CEE44: 211c         add r1,r4,#0x0
080CEE46: 5431         add r1,#0x54
080CEE48: 0320         mov r0,#0x3
080CEE4A: 01f01dff     bl 0x080d0c88
080CEE4E: 0649         ldr r1,[0x080cee68]
080CEE50: 607a         ldrb r0,[r4,#0x9]
080CEE52: 8000         lsl r0,r0,#0x2
080CEE54: 4018         add r0,r0,r1
080CEE56: 0421         mov r1,#0x4
080CEE58: e160         str r1,[r4,#0xc]
080CEE5A: 0068         ldr r0,[r0,#0x0]
080CEE5C: 0069         ldr r0,[r0,#0x10]
080CEE5E: 6061         str r0,[r4,#0x14]
080CEE60: 10bc         pop {r4}
080CEE62: 01bc         pop {r0}
080CEE64: 0047         bx r0
