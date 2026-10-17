; undefined FUN_080033d4(void)
; entry 0x80033d4  size 16 bytes

080033D4: 8022         mov r2,#0x80
080033D6: 9200         lsl r2,r2,#0x2
080033D8: 8018         add r0,r0,r2
080033DA: 0268         ldr r2,[r0,#0x0]
080033DC: 1068         ldr r0,[r2,#0x0]
080033DE: 0860         str r0,[r1,#0x0]
080033E0: 1160         str r1,[r2,#0x0]
080033E2: 7047         bx lr
