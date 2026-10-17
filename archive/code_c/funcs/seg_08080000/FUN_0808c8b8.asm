; undefined FUN_0808c8b8(void)
; entry 0x808c8b8  size 62 bytes

0808C8B8: 10b5         push {r4,lr}
0808C8BA: 041c         add r4,r0,#0x0
0808C8BC: e07b         ldrb r0,[r4,#0xf]
0808C8BE: 0028         cmp r0,#0x0
0808C8C0: 09d1         bne 0x0808c8d6
0808C8C2: 9021         mov r1,#0x90
0808C8C4: 8901         lsl r1,r1,#0x6
0808C8C6: 201c         add r0,r4,#0x0
0808C8C8: 90f71afb     bl 0x0801cf00
0808C8CC: 3020         mov r0,#0x30
0808C8CE: a074         strb r0,[r4,#0x12]
0808C8D0: e07b         ldrb r0,[r4,#0xf]
0808C8D2: 0130         add r0,#0x1
0808C8D4: e073         strb r0,[r4,#0xf]
0808C8D6: 201c         add r0,r4,#0x0
0808C8D8: 90f78afb     bl 0x0801cff0
0808C8DC: a07c         ldrb r0,[r4,#0x12]
0808C8DE: 0138         sub r0,#0x1
0808C8E0: a074         strb r0,[r4,#0x12]
0808C8E2: 0006         lsl r0,r0,#0x18
0808C8E4: 000e         lsr r0,r0,#0x18
0808C8E6: 0028         cmp r0,#0x0
0808C8E8: 02d1         bne 0x0808c8f0
0808C8EA: 6073         strb r0,[r4,#0xd]
0808C8EC: a073         strb r0,[r4,#0xe]
0808C8EE: e073         strb r0,[r4,#0xf]
0808C8F0: 10bc         pop {r4}
0808C8F2: 01bc         pop {r0}
0808C8F4: 0047         bx r0
