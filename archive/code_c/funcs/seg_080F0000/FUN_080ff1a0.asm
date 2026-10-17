; undefined FUN_080ff1a0(void)
; entry 0x80ff1a0  size 62 bytes

080FF1A0: 9cb5         push {r2,r3,r4,r7,lr}
080FF1A2: 8608         lsr r6,r0,#0x2
080FF1A4: f0db         blt 0x080ff188
080FF1A6: 0202         lsl r2,r0,#0x8
080FF1A8: 1806         lsl r0,r3,#0x18
080FF1AA: 040e         lsr r4,r0,#0x18
080FF1AC: 381c         add r0,r7,#0x0
080FF1AE: 6146         mov r1,r12
080FF1B0: 0022         mov r2,#0x0
080FF1B2: 231c         add r3,r4,#0x0
080FF1B4: d5f76afd     bl 0x080d4c8c
080FF1B8: 094f         ldr r7,[0x080ff1e0]
080FF1BA: a97a         ldrb r1,[r5,#0xa]
080FF1BC: 2022         mov r2,#0x20
080FF1BE: 101c         add r0,r2,#0x0
080FF1C0: 0840         and r0,r1
080FF1C2: 0006         lsl r0,r0,#0x18
080FF1C4: 000e         lsr r0,r0,#0x18
080FF1C6: 4042         rsb r0,r0
080FF1C8: c317         asr r3,r0,#0x1f
080FF1CA: 1340         and r3,r2
080FF1CC: 0548         ldr r0,[0x080ff1e4]
080FF1CE: 0068         ldr r0,[r0,#0x0]
080FF1D0: 696d         ldr r1,[r5,#0x54]
080FF1D2: 406d         ldr r0,[r0,#0x54]
080FF1D4: 8142         cmp r1,r0
080FF1D6: 07db         blt 0x080ff1e8
080FF1D8: 0124         mov r4,#0x1
080FF1DA: 1c43         orr r4,r3
080FF1DC: 06e0         b 0x080ff1ec
