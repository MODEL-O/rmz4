; undefined FUN_08009070(void)
; entry 0x8009070  size 24 bytes

08009070: 00b5         push {lr}
08009072: 8010         asr r0,r0,#0x2
08009074: c022         mov r2,#0xc0
08009076: 1201         lsl r2,r2,#0x4
08009078: 8018         add r0,r0,r2
0800907A: 8142         cmp r1,r0
0800907C: 01db         blt 0x08009082
0800907E: 0020         mov r0,#0x0
08009080: 00e0         b 0x08009084
08009082: c843         mvn r0,r1
08009084: 02bc         pop {r1}
08009086: 0847         bx r1
