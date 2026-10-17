; undefined FUN_080070b0(void)
; entry 0x80070b0  size 24 bytes

080070B0: 10b5         push {r4,lr}
080070B2: 0313         asr r3,r0,#0xc
080070B4: 0c13         asr r4,r1,#0xc
080070B6: 1b03         lsl r3,r3,#0xc
080070B8: 1b1a         sub r3,r3,r0
080070BA: 1360         str r3,[r2,#0x0]
080070BC: 2403         lsl r4,r4,#0xc
080070BE: 641a         sub r4,r4,r1
080070C0: 5460         str r4,[r2,#0x4]
080070C2: 10bc         pop {r4}
080070C4: 01bc         pop {r0}
080070C6: 0047         bx r0
