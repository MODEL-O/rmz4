; undefined FUN_080028ec(void)
; entry 0x80028ec  size 22 bytes

080028EC: 054a         ldr r2,[0x08002904]
080028EE: 0649         ldr r1,[0x08002908]
080028F0: 4888         ldrh r0,[r1,#0x2]
080028F2: 1080         strh r0,[r2,#0x0]
080028F4: 0232         add r2,#0x2
080028F6: 8888         ldrh r0,[r1,#0x4]
080028F8: 1080         strh r0,[r2,#0x0]
080028FA: 043a         sub r2,#0x4
080028FC: 0888         ldrh r0,[r1,#0x0]
080028FE: 1080         strh r0,[r2,#0x0]
08002900: 7047         bx lr
