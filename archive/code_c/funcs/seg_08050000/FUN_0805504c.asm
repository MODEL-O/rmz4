; undefined FUN_0805504c(void)
; entry 0x805504c  size 26 bytes

0805504C: 1206         lsl r2,r2,#0x18
0805504E: 0023         mov r3,#0x0
08055050: c365         str r3,[r0,#0x5c]
08055052: d20d         lsr r2,r2,#0x17
08055054: 013a         sub r2,#0x1
08055056: 5143         mul r1,r2
08055058: 4166         str r1,[r0,#0x64]
0805505A: b630         add r0,#0xb6
0805505C: 0278         ldrb r2,[r0,#0x0]
0805505E: fb21         mov r1,#0xfb
08055060: 1140         and r1,r2
08055062: 0170         strb r1,[r0,#0x0]
08055064: 7047         bx lr
