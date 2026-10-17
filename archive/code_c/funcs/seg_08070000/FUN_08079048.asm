; undefined FUN_08079048(void)
; entry 0x8079048  size 20 bytes

08079048: 00b5         push {lr}
0807904A: 0906         lsl r1,r1,#0x18
0807904C: 034a         ldr r2,[0x0807905c]
0807904E: 890d         lsr r1,r1,#0x16
08079050: 8918         add r1,r1,r2
08079052: 0968         ldr r1,[r1,#0x0]
08079054: aff094ff     bl 0x08128f80
08079058: 02bc         pop {r1}
0807905A: 0847         bx r1
