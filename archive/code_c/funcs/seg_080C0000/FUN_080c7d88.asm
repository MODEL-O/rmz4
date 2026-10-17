; undefined FUN_080c7d88(void)
; entry 0x80c7d88  size 20 bytes

080C7D88: 00b5         push {lr}
080C7D8A: 0906         lsl r1,r1,#0x18
080C7D8C: 034a         ldr r2,[0x080c7d9c]
080C7D8E: 890d         lsr r1,r1,#0x16
080C7D90: 8918         add r1,r1,r2
080C7D92: 0968         ldr r1,[r1,#0x0]
080C7D94: 61f0f4f8     bl 0x08128f80
080C7D98: 02bc         pop {r1}
080C7D9A: 0847         bx r1
