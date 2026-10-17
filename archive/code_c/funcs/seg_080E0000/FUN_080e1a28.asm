; undefined FUN_080e1a28(void)
; entry 0x80e1a28  size 16 bytes

080E1A28: 7430         add r0,#0x74
080E1A2A: 0278         ldrb r2,[r0,#0x0]
080E1A2C: 0132         add r2,#0x1
080E1A2E: 5108         lsr r1,r2,#0x1
080E1A30: 4900         lsl r1,r1,#0x1
080E1A32: 521a         sub r2,r2,r1
080E1A34: 0270         strb r2,[r0,#0x0]
080E1A36: 7047         bx lr
