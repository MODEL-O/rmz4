; undefined FUN_080599a4(void)
; entry 0x80599a4  size 30 bytes

080599A4: 82b0         sub sp,#0x8
080599A6: 0749         ldr r1,[0x080599c4]
080599A8: 4a68         ldr r2,[r1,#0x4]
080599AA: 0968         ldr r1,[r1,#0x0]
080599AC: 0091         str r1,[sp,#0x0]
080599AE: 0192         str r2,[sp,#0x4]
080599B0: 807a         ldrb r0,[r0,#0xa]
080599B2: 0009         lsr r0,r0,#0x4
080599B4: 0121         mov r1,#0x1
080599B6: 0840         and r0,r1
080599B8: 8000         lsl r0,r0,#0x2
080599BA: 6844         add r0,sp
080599BC: 0078         ldrb r0,[r0,#0x0]
080599BE: 02b0         add sp,#0x8
080599C0: 7047         bx lr
