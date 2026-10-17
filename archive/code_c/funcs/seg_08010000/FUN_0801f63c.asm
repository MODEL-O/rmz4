; undefined FUN_0801f63c(void)
; entry 0x801f63c  size 40 bytes

0801F63C: 10b5         push {r4,lr}
0801F63E: 0949         ldr r1,[0x0801f664]
0801F640: 8870         strb r0,[r1,#0x2]
0801F642: ff20         mov r0,#0xff
0801F644: c870         strb r0,[r1,#0x3]
0801F646: 084c         ldr r4,[0x0801f668]
0801F648: 201c         add r0,r4,#0x0
0801F64A: fff765f9     bl 0x0801e918
0801F64E: 9c21         mov r1,#0x9c
0801F650: 4900         lsl r1,r1,#0x1
0801F652: 6018         add r0,r4,r1
0801F654: 0068         ldr r0,[r0,#0x0]
0801F656: d834         add r4,#0xd8
0801F658: 211c         add r1,r4,#0x0
0801F65A: 18f043fe     bl 0x080382e4
0801F65E: 10bc         pop {r4}
0801F660: 01bc         pop {r0}
0801F662: 0047         bx r0
