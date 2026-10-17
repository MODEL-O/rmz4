; undefined FUN_080669ac(void)
; entry 0x80669ac  size 60 bytes

080669AC: ecb5         push {r2,r3,r5,r6,r7,lr}
080669AE: 8508         lsr r5,r0,#0x2
080669B0: f4b5         push {r2,r4,r5,r6,r7,lr}
080669B2: 8508         lsr r5,r0,#0x2
080669B4: 00d8         bhi 0x080669b8
080669B6: ffff         bl #0xffe
080669B8: b00a         lsr r0,r6,#0xa
080669BA: 0002         lsl r0,r0,#0x8
080669BC: 10c0         stmia r0!,{r4}
080669BE: 0200         mov r2,r0
080669C0: b0e8         blx #0x160
080669C2: 0202         lsl r2,r0,#0x8
080669C4: 10e9         blx #0x220
080669C6: 0202         lsl r2,r0,#0x8
080669C8: b901         lsl r1,r7,#0x6
080669CA: 0000         mov r0,r0
080669CC: 201c         add r0,r4,#0x0
080669CE: de30         add r0,#0xde
080669D0: 0170         strb r1,[r0,#0x0]
080669D2: 0548         ldr r0,[0x080669e8]
080669D4: 617b         ldrb r1,[r4,#0xd]
080669D6: 8900         lsl r1,r1,#0x2
080669D8: 0918         add r1,r1,r0
080669DA: 0968         ldr r1,[r1,#0x0]
080669DC: 201c         add r0,r4,#0x0
080669DE: c2f0cffa     bl 0x08128f80
080669E2: 70bc         pop {r4,r5,r6}
080669E4: 01bc         pop {r0}
080669E6: 0047         bx r0
