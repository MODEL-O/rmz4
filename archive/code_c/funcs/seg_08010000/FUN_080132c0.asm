; undefined FUN_080132c0(void)
; entry 0x80132c0  size 52 bytes

080132C0: 70b5         push {r4,r5,r6,lr}
080132C2: c46d         ldr r4,[r0,#0x5c]
080132C4: 2404         lsl r4,r4,#0x10
080132C6: 240d         lsr r4,r4,#0x14
080132C8: a400         lsl r4,r4,#0x2
080132CA: 0a4d         ldr r5,[0x080132f4]
080132CC: 6619         add r6,r4,r5
080132CE: 011c         add r1,r0,#0x0
080132D0: 6831         add r1,#0x68
080132D2: 0a88         ldrh r2,[r1,#0x0]
080132D4: 1209         lsr r2,r2,#0x4
080132D6: c16e         ldr r1,[r0,#0x6c]
080132D8: 436b         ldr r3,[r0,#0x34]
080132DA: c91a         sub r1,r1,r3
080132DC: 521a         sub r2,r2,r1
080132DE: 3280         strh r2,[r6,#0x0]
080132E0: 0235         add r5,#0x2
080132E2: 6419         add r4,r4,r5
080132E4: 816b         ldr r1,[r0,#0x38]
080132E6: 4800         lsl r0,r1,#0x1
080132E8: 4018         add r0,r0,r1
080132EA: 8008         lsr r0,r0,#0x2
080132EC: 2080         strh r0,[r4,#0x0]
080132EE: 70bc         pop {r4,r5,r6}
080132F0: 01bc         pop {r0}
080132F2: 0047         bx r0
