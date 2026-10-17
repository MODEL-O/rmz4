; undefined FUN_0805388c(void)
; entry 0x805388c  size 32 bytes

0805388C: 30b5         push {r4,r5,lr}
0805388E: 82b0         sub sp,#0x8
08053890: 041c         add r4,r0,#0x0
08053892: e07b         ldrb r0,[r4,#0xf]
08053894: 0728         cmp r0,#0x7
08053896: 00d9         bls 0x0805389a
08053898: 9fe0         b 0x080539da
0805389A: 8000         lsl r0,r0,#0x2
0805389C: 0149         ldr r1,[0x080538a4]
0805389E: 4018         add r0,r0,r1
080538A0: 0068         ldr r0,[r0,#0x0]
080538A2: 8746         mov pc,r0
080539DA: 02b0         add sp,#0x8
080539DC: 30bc         pop {r4,r5}
080539DE: 01bc         pop {r0}
080539E0: 0047         bx r0
