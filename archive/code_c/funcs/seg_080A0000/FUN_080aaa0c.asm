; undefined FUN_080aaa0c(void)
; entry 0x80aaa0c  size 50 bytes

080AAA0C: 00b5         push {lr}
080AAA0E: 031c         add r3,r0,#0x0
080AAA10: 0948         ldr r0,[0x080aaa38]
080AAA12: 0268         ldr r2,[r0,#0x0]
080AAA14: 906d         ldr r0,[r2,#0x58]
080AAA16: 996d         ldr r1,[r3,#0x58]
080AAA18: 401a         sub r0,r0,r1
080AAA1A: 0012         asr r0,r0,#0x8
080AAA1C: 0138         sub r0,#0x1
080AAA1E: 6e28         cmp r0,#0x6e
080AAA20: 0cd8         bhi 0x080aaa3c
080AAA22: 506d         ldr r0,[r2,#0x54]
080AAA24: 596d         ldr r1,[r3,#0x54]
080AAA26: 401a         sub r0,r0,r1
080AAA28: 0012         asr r0,r0,#0x8
080AAA2A: 0028         cmp r0,#0x0
080AAA2C: 00da         bge 0x080aaa30
080AAA2E: 4042         rsb r0,r0
080AAA30: 1f28         cmp r0,#0x1f
080AAA32: 03dc         bgt 0x080aaa3c
080AAA34: 0120         mov r0,#0x1
080AAA36: 02e0         b 0x080aaa3e
080AAA3C: 0020         mov r0,#0x0
080AAA3E: 02bc         pop {r1}
080AAA40: 0847         bx r1
