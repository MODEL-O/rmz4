; undefined FUN_080b381c(void)
; entry 0x80b381c  size 38 bytes

080B381C: 00b5         push {lr}
080B381E: 021c         add r2,r0,#0x0
080B3820: 936a         ldr r3,[r2,#0x28]
080B3822: 1868         ldr r0,[r3,#0x0]
080B3824: 516d         ldr r1,[r2,#0x54]
080B3826: 401a         sub r0,r0,r1
080B3828: 5968         ldr r1,[r3,#0x4]
080B382A: 926d         ldr r2,[r2,#0x58]
080B382C: 891a         sub r1,r1,r2
080B382E: 0002         lsl r0,r0,#0x8
080B3830: 0014         asr r0,r0,#0x10
080B3832: 0902         lsl r1,r1,#0x8
080B3834: 0914         asr r1,r1,#0x10
080B3836: 75f0d1f9     bl 0x08128bdc
080B383A: 0004         lsl r0,r0,#0x10
080B383C: 000e         lsr r0,r0,#0x18
080B383E: 02bc         pop {r1}
080B3840: 0847         bx r1
