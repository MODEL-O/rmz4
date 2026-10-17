; undefined FUN_08099ff4(void)
; entry 0x8099ff4  size 20 bytes

08099FF4: 00b5         push {lr}
08099FF6: 044a         ldr r2,[0x0809a008]
08099FF8: 017c         ldrb r1,[r0,#0x10]
08099FFA: 8900         lsl r1,r1,#0x2
08099FFC: 8918         add r1,r1,r2
08099FFE: 0968         ldr r1,[r1,#0x0]
0809A000: 8ef0beff     bl 0x08128f80
0809A004: 01bc         pop {r0}
0809A006: 0047         bx r0
