; undefined FUN_08006d3c(void)
; entry 0x8006d3c  size 54 bytes

08006D3C: 10b5         push {r4,lr}
08006D3E: 0d4a         ldr r2,[0x08006d74]
08006D40: 0d4b         ldr r3,[0x08006d78]
08006D42: 1988         ldrh r1,[r3,#0x0]
08006D44: f020         mov r0,#0xf0
08006D46: 0001         lsl r0,r0,#0x4
08006D48: 0840         and r0,r1
08006D4A: 000a         lsr r0,r0,#0x8
08006D4C: fb24         mov r4,#0xfb
08006D4E: e400         lsl r4,r4,#0x3
08006D50: 1119         add r1,r2,r4
08006D52: 0880         strh r0,[r1,#0x0]
08006D54: d988         ldrh r1,[r3,#0x6]
08006D56: 0234         add r4,#0x2
08006D58: 1019         add r0,r2,r4
08006D5A: 0180         strh r1,[r0,#0x0]
08006D5C: 1989         ldrh r1,[r3,#0x8]
08006D5E: 0234         add r4,#0x2
08006D60: 1019         add r0,r2,r4
08006D62: 0180         strh r1,[r0,#0x0]
08006D64: 5889         ldrh r0,[r3,#0xa]
08006D66: 0549         ldr r1,[0x08006d7c]
08006D68: 5218         add r2,r2,r1
08006D6A: 1080         strh r0,[r2,#0x0]
08006D6C: 10bc         pop {r4}
08006D6E: 01bc         pop {r0}
08006D70: 0047         bx r0
