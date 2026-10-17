; undefined FUN_080cde30(void)
; entry 0x80cde30  size 28 bytes

080CDE30: 00b5         push {lr}
080CDE32: 816a         ldr r1,[r0,#0x28]
080CDE34: d731         add r1,#0xd7
080CDE36: 0122         mov r2,#0x1
080CDE38: 0a70         strb r2,[r1,#0x0]
080CDE3A: 044a         ldr r2,[0x080cde4c]
080CDE3C: 017c         ldrb r1,[r0,#0x10]
080CDE3E: 8900         lsl r1,r1,#0x2
080CDE40: 8918         add r1,r1,r2
080CDE42: 0968         ldr r1,[r1,#0x0]
080CDE44: 5bf09cf8     bl 0x08128f80
080CDE48: 01bc         pop {r0}
080CDE4A: 0047         bx r0
