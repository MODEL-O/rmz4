; undefined FUN_08079078(void)
; entry 0x8079078  size 20 bytes

08079078: 00b5         push {lr}
0807907A: 0906         lsl r1,r1,#0x18
0807907C: 034a         ldr r2,[0x0807908c]
0807907E: 890d         lsr r1,r1,#0x16
08079080: 8918         add r1,r1,r2
08079082: 0968         ldr r1,[r1,#0x0]
08079084: aff07cff     bl 0x08128f80
08079088: 02bc         pop {r1}
0807908A: 0847         bx r1
