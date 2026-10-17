; undefined FUN_080b0d28(void)
; entry 0x80b0d28  size 46 bytes

080B0D28: 00b5         push {lr}
080B0D2A: 021c         add r2,r0,#0x0
080B0D2C: 0a48         ldr r0,[0x080b0d58]
080B0D2E: 0368         ldr r3,[r0,#0x0]
080B0D30: 586d         ldr r0,[r3,#0x54]
080B0D32: 516d         ldr r1,[r2,#0x54]
080B0D34: 401a         sub r0,r0,r1
080B0D36: 926d         ldr r2,[r2,#0x58]
080B0D38: f021         mov r1,#0xf0
080B0D3A: 0901         lsl r1,r1,#0x4
080B0D3C: 5218         add r2,r2,r1
080B0D3E: 996d         ldr r1,[r3,#0x58]
080B0D40: 891a         sub r1,r1,r2
080B0D42: 0002         lsl r0,r0,#0x8
080B0D44: 0014         asr r0,r0,#0x10
080B0D46: 0902         lsl r1,r1,#0x8
080B0D48: 0914         asr r1,r1,#0x10
080B0D4A: 77f047ff     bl 0x08128bdc
080B0D4E: 0004         lsl r0,r0,#0x10
080B0D50: 000e         lsr r0,r0,#0x18
080B0D52: 02bc         pop {r1}
080B0D54: 0847         bx r1
