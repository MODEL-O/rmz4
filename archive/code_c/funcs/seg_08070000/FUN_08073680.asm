; undefined FUN_08073680(void)
; entry 0x8073680  size 64 bytes

08073680: 00b5         push {lr}
08073682: c26a         ldr r2,[r0,#0x2c]
08073684: c168         ldr r1,[r0,#0xc]
08073686: c96a         ldr r1,[r1,#0x2c]
08073688: 4069         ldr r0,[r0,#0x14]
0807368A: 0123         mov r3,#0x1
0807368C: 1840         and r0,r3
0807368E: 0028         cmp r0,#0x0
08073690: 14d0         beq 0x080736bc
08073692: 486d         ldr r0,[r1,#0x54]
08073694: 516d         ldr r1,[r2,#0x54]
08073696: 8842         cmp r0,r1
08073698: 04da         bge 0x080736a4
0807369A: 111c         add r1,r2,#0x0
0807369C: ba31         add r1,#0xba
0807369E: 0020         mov r0,#0x0
080736A0: 0870         strb r0,[r1,#0x0]
080736A2: 0be0         b 0x080736bc
080736A4: 8142         cmp r1,r0
080736A6: 06db         blt 0x080736b6
080736A8: 0023         mov r3,#0x0
080736AA: 0548         ldr r0,[0x080736c0]
080736AC: 0068         ldr r0,[r0,#0x0]
080736AE: 406d         ldr r0,[r0,#0x54]
080736B0: 8142         cmp r1,r0
080736B2: 00da         bge 0x080736b6
080736B4: 0123         mov r3,#0x1
080736B6: 101c         add r0,r2,#0x0
080736B8: ba30         add r0,#0xba
080736BA: 0370         strb r3,[r0,#0x0]
080736BC: 01bc         pop {r0}
080736BE: 0047         bx r0
