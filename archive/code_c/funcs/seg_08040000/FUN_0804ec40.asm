; undefined FUN_0804ec40(void)
; entry 0x804ec40  size 40 bytes

0804EC40: 10b5         push {r4,lr}
0804EC42: 041c         add r4,r0,#0x0
0804EC44: bd30         add r0,#0xbd
0804EC46: 0078         ldrb r0,[r0,#0x0]
0804EC48: 0028         cmp r0,#0x0
0804EC4A: 07d0         beq 0x0804ec5c
0804EC4C: 211c         add r1,r4,#0x0
0804EC4E: 5431         add r1,#0x54
0804EC50: 0120         mov r0,#0x1
0804EC52: 82f019f8     bl 0x080d0c88
0804EC56: 3520         mov r0,#0x35
0804EC58: b3f75aff     bl 0x08002b10
0804EC5C: 201c         add r0,r4,#0x0
0804EC5E: ebf729fe     bl 0x0803a8b4
0804EC62: 10bc         pop {r4}
0804EC64: 01bc         pop {r0}
0804EC66: 0047         bx r0
