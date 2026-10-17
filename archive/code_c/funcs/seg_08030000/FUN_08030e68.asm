; undefined FUN_08030e68(void)
; entry 0x8030e68  size 38 bytes

08030E68: f0b5         push {r4,r5,r6,r7,lr}
08030E6A: 051c         add r5,r0,#0x0
08030E6C: e87b         ldrb r0,[r5,#0xf]
08030E6E: 0528         cmp r0,#0x5
08030E70: 00d9         bls 0x08030e74
08030E72: 59e1         b 0x08031128
08030E74: 8000         lsl r0,r0,#0x2
08030E76: 0249         ldr r1,[0x08030e80]
08030E78: 4018         add r0,r0,r1
08030E7A: 0068         ldr r0,[r0,#0x0]
08030E7C: 8746         mov pc,r0
08031128: 0120         mov r0,#0x1
0803112A: a873         strb r0,[r5,#0xe]
0803112C: 281c         add r0,r5,#0x0
0803112E: 00f003f8     bl 0x08031138
08031132: f0bc         pop {r4,r5,r6,r7}
08031134: 01bc         pop {r0}
08031136: 0047         bx r0
