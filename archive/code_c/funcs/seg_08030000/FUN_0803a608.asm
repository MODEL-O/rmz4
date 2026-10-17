; undefined FUN_0803a608(void)
; entry 0x803a608  size 58 bytes

0803A608: 10b5         push {r4,lr}
0803A60A: 041c         add r4,r0,#0x0
0803A60C: 0906         lsl r1,r1,#0x18
0803A60E: 090e         lsr r1,r1,#0x18
0803A610: 1206         lsl r2,r2,#0x18
0803A612: 130e         lsr r3,r2,#0x18
0803A614: ff22         mov r2,#0xff
0803A616: c81e         sub r0,r1,#0x3
0803A618: 0428         cmp r0,#0x4
0803A61A: 24d8         bhi 0x0803a666
0803A61C: 8000         lsl r0,r0,#0x2
0803A61E: 0249         ldr r1,[0x0803a628]
0803A620: 4018         add r0,r0,r1
0803A622: 0068         ldr r0,[r0,#0x0]
0803A624: 8746         mov pc,r0
0803A666: 082a         cmp r2,#0x8
0803A668: 07d8         bhi 0x0803a67a
0803A66A: 201c         add r0,r4,#0x0
0803A66C: b430         add r0,#0xb4
0803A66E: 007c         ldrb r0,[r0,#0x10]
0803A670: 0828         cmp r0,#0x8
0803A672: 02d1         bne 0x0803a67a
0803A674: 501c         add r0,r2,#0x1
0803A676: 0006         lsl r0,r0,#0x18
0803A678: 020e         lsr r2,r0,#0x18
0803A67A: 101c         add r0,r2,#0x0
0803A67C: 10bc         pop {r4}
0803A67E: 02bc         pop {r1}
0803A680: 0847         bx r1
