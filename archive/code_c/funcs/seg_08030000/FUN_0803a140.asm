; undefined FUN_0803a140(void)
; entry 0x803a140  size 64 bytes

0803A140: 00b5         push {lr}
0803A142: 021c         add r2,r0,#0x0
0803A144: b430         add r0,#0xb4
0803A146: 007b         ldrb r0,[r0,#0xc]
0803A148: 0428         cmp r0,#0x4
0803A14A: 09d1         bne 0x0803a160
0803A14C: 0349         ldr r1,[0x0803a15c]
0803A14E: 5018         add r0,r2,r1
0803A150: 0178         ldrb r1,[r0,#0x0]
0803A152: 1020         mov r0,#0x10
0803A154: 0840         and r0,r1
0803A156: 0028         cmp r0,#0x0
0803A158: 0ad0         beq 0x0803a170
0803A15A: 15e0         b 0x0803a188
0803A160: 0249         ldr r1,[0x0803a16c]
0803A162: 5018         add r0,r2,r1
0803A164: 0178         ldrb r1,[r0,#0x0]
0803A166: 2020         mov r0,#0x20
0803A168: f4e7         b 0x0803a154
0803A170: 0449         ldr r1,[0x0803a184]
0803A172: 5018         add r0,r2,r1
0803A174: 0188         ldrh r1,[r0,#0x0]
0803A176: 8020         mov r0,#0x80
0803A178: 0002         lsl r0,r0,#0x8
0803A17A: 0840         and r0,r1
0803A17C: 0028         cmp r0,#0x0
0803A17E: 03d1         bne 0x0803a188
0803A180: 0120         mov r0,#0x1
0803A182: 02e0         b 0x0803a18a
0803A188: 0020         mov r0,#0x0
0803A18A: 02bc         pop {r1}
0803A18C: 0847         bx r1
