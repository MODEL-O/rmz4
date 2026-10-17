; undefined FUN_080585dc(void)
; entry 0x80585dc  size 36 bytes

080585DC: 70b5         push {r4,r5,r6,lr}
080585DE: 041c         add r4,r0,#0x0
080585E0: a07a         ldrb r0,[r4,#0xa]
080585E2: 0609         lsr r6,r0,#0x4
080585E4: 0120         mov r0,#0x1
080585E6: 0640         and r6,r0
080585E8: e07b         ldrb r0,[r4,#0xf]
080585EA: 0528         cmp r0,#0x5
080585EC: 00d9         bls 0x080585f0
080585EE: aae1         b 0x08058946
080585F0: 8000         lsl r0,r0,#0x2
080585F2: 0249         ldr r1,[0x080585fc]
080585F4: 4018         add r0,r0,r1
080585F6: 0068         ldr r0,[r0,#0x0]
080585F8: 8746         mov pc,r0
08058946: 70bc         pop {r4,r5,r6}
08058948: 01bc         pop {r0}
0805894A: 0047         bx r0
