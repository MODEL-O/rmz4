; undefined FUN_0804ec94(void)
; entry 0x804ec94  size 38 bytes

0804EC94: 00b5         push {lr}
0804EC96: b8f7f1ff     bl 0x08007c7c
0804EC9A: 0004         lsl r0,r0,#0x10
0804EC9C: 020c         lsr r2,r0,#0x10
0804EC9E: 0f21         mov r1,#0xf
0804ECA0: 1140         and r1,r2
0804ECA2: 0f29         cmp r1,#0xf
0804ECA4: 06d0         beq 0x0804ecb4
0804ECA6: 8020         mov r0,#0x80
0804ECA8: 0002         lsl r0,r0,#0x8
0804ECAA: 1040         and r0,r2
0804ECAC: 0028         cmp r0,#0x0
0804ECAE: 01d1         bne 0x0804ecb4
0804ECB0: 081c         add r0,r1,#0x0
0804ECB2: 00e0         b 0x0804ecb6
0804ECB4: 0020         mov r0,#0x0
0804ECB6: 02bc         pop {r1}
0804ECB8: 0847         bx r1
