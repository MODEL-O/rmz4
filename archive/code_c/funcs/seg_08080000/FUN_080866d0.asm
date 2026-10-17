; undefined FUN_080866d0(void)
; entry 0x80866d0  size 70 bytes

080866D0: 10b5         push {r4,lr}
080866D2: 041c         add r4,r0,#0x0
080866D4: e07b         ldrb r0,[r4,#0xf]
080866D6: 0028         cmp r0,#0x0
080866D8: 0dd1         bne 0x080866f6
080866DA: 201c         add r0,r4,#0x0
080866DC: 7430         add r0,#0x74
080866DE: 0e49         ldr r1,[0x08086718]
080866E0: 7ff750f8     bl 0x08005784
080866E4: 201c         add r0,r4,#0x0
080866E6: 0021         mov r1,#0x0
080866E8: 00f094f9     bl 0x08086a14
080866EC: 4020         mov r0,#0x40
080866EE: a074         strb r0,[r4,#0x12]
080866F0: e07b         ldrb r0,[r4,#0xf]
080866F2: 0130         add r0,#0x1
080866F4: e073         strb r0,[r4,#0xf]
080866F6: 201c         add r0,r4,#0x0
080866F8: 00f0a6f9     bl 0x08086a48
080866FC: a07c         ldrb r0,[r4,#0x12]
080866FE: 0138         sub r0,#0x1
08086700: a074         strb r0,[r4,#0x12]
08086702: 0006         lsl r0,r0,#0x18
08086704: 0028         cmp r0,#0x0
08086706: 03d1         bne 0x08086710
08086708: 211c         add r1,r4,#0x0
0808670A: b731         add r1,#0xb7
0808670C: 0120         mov r0,#0x1
0808670E: 0870         strb r0,[r1,#0x0]
08086710: 10bc         pop {r4}
08086712: 01bc         pop {r0}
08086714: 0047         bx r0
