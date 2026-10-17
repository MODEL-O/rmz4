; undefined FUN_080b3700(void)
; entry 0x80b3700  size 48 bytes

080B3700: 00b5         push {lr}
080B3702: 021c         add r2,r0,#0x0
080B3704: 907c         ldrb r0,[r2,#0x12]
080B3706: 3c28         cmp r0,#0x3c
080B3708: 01d1         bne 0x080b370e
080B370A: 0020         mov r0,#0x0
080B370C: 9074         strb r0,[r2,#0x12]
080B370E: 917c         ldrb r1,[r2,#0x12]
080B3710: 081c         add r0,r1,#0x0
080B3712: 0f38         sub r0,#0xf
080B3714: 0006         lsl r0,r0,#0x18
080B3716: 000e         lsr r0,r0,#0x18
080B3718: 1e28         cmp r0,#0x1e
080B371A: 02d9         bls 0x080b3722
080B371C: 906d         ldr r0,[r2,#0x58]
080B371E: 4030         add r0,#0x40
080B3720: 01e0         b 0x080b3726
080B3722: 906d         ldr r0,[r2,#0x58]
080B3724: 4038         sub r0,#0x40
080B3726: 9065         str r0,[r2,#0x58]
080B3728: 481c         add r0,r1,#0x1
080B372A: 9074         strb r0,[r2,#0x12]
080B372C: 01bc         pop {r0}
080B372E: 0047         bx r0
