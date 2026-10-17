; undefined FUN_08042018(void)
; entry 0x8042018  size 20 bytes

08042018: 00b5         push {lr}
0804201A: 044a         ldr r2,[0x0804202c]
0804201C: 017c         ldrb r1,[r0,#0x10]
0804201E: 8900         lsl r1,r1,#0x2
08042020: 8918         add r1,r1,r2
08042022: 0968         ldr r1,[r1,#0x0]
08042024: e6f0acff     bl 0x08128f80
08042028: 01bc         pop {r0}
0804202A: 0047         bx r0
