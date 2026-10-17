; undefined FUN_080b9e30(void)
; entry 0x80b9e30  size 38 bytes

080B9E30: 00b5         push {lr}
080B9E32: 021c         add r2,r0,#0x0
080B9E34: 936a         ldr r3,[r2,#0x28]
080B9E36: 1868         ldr r0,[r3,#0x0]
080B9E38: 516d         ldr r1,[r2,#0x54]
080B9E3A: 401a         sub r0,r0,r1
080B9E3C: 5968         ldr r1,[r3,#0x4]
080B9E3E: 926d         ldr r2,[r2,#0x58]
080B9E40: 891a         sub r1,r1,r2
080B9E42: 0002         lsl r0,r0,#0x8
080B9E44: 0014         asr r0,r0,#0x10
080B9E46: 0902         lsl r1,r1,#0x8
080B9E48: 0914         asr r1,r1,#0x10
080B9E4A: 6ef0c7fe     bl 0x08128bdc
080B9E4E: 0004         lsl r0,r0,#0x10
080B9E50: 000e         lsr r0,r0,#0x18
080B9E52: 02bc         pop {r1}
080B9E54: 0847         bx r1
