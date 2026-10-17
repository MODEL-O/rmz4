; undefined FUN_08002990(void)
; entry 0x8002990  size 30 bytes

08002990: 00b5         push {lr}
08002992: 24f1cdfe     bl 0x08127730
08002996: 0649         ldr r1,[0x080029b0]
08002998: 0648         ldr r0,[0x080029b4]
0800299A: 0004         lsl r0,r0,#0x10
0800299C: 000c         lsr r0,r0,#0x10
0800299E: 0860         str r0,[r1,#0x0]
080029A0: 0548         ldr r0,[0x080029b8]
080029A2: 0021         mov r1,#0x0
080029A4: 0180         strh r1,[r0,#0x0]
080029A6: 0548         ldr r0,[0x080029bc]
080029A8: 0180         strh r1,[r0,#0x0]
080029AA: 01bc         pop {r0}
080029AC: 0047         bx r0
