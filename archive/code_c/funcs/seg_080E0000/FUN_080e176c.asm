; undefined FUN_080e176c(void)
; entry 0x80e176c  size 56 bytes

080E176C: 10b5         push {r4,lr}
080E176E: 041c         add r4,r0,#0x0
080E1770: 7430         add r0,#0x74
080E1772: 0078         ldrb r0,[r0,#0x0]
080E1774: 0028         cmp r0,#0x0
080E1776: 03d0         beq 0x080e1780
080E1778: a17a         ldrb r1,[r4,#0xa]
080E177A: 0120         mov r0,#0x1
080E177C: 0843         orr r0,r1
080E177E: 02e0         b 0x080e1786
080E1780: a17a         ldrb r1,[r4,#0xa]
080E1782: fe20         mov r0,#0xfe
080E1784: 0840         and r0,r1
080E1786: a072         strb r0,[r4,#0xa]
080E1788: 0648         ldr r0,[0x080e17a4]
080E178A: 617c         ldrb r1,[r4,#0x11]
080E178C: 8900         lsl r1,r1,#0x2
080E178E: 0918         add r1,r1,r0
080E1790: 0968         ldr r1,[r1,#0x0]
080E1792: 201c         add r0,r4,#0x0
080E1794: 47f0f4fb     bl 0x08128f80
080E1798: 201c         add r0,r4,#0x0
080E179A: 3bf729fc     bl 0x0801cff0
080E179E: 10bc         pop {r4}
080E17A0: 01bc         pop {r0}
080E17A2: 0047         bx r0
