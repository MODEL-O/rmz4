; undefined FUN_0808c7e8(void)
; entry 0x808c7e8  size 62 bytes

0808C7E8: 10b5         push {r4,lr}
0808C7EA: 041c         add r4,r0,#0x0
0808C7EC: e07b         ldrb r0,[r4,#0xf]
0808C7EE: 0028         cmp r0,#0x0
0808C7F0: 09d1         bne 0x0808c806
0808C7F2: 9021         mov r1,#0x90
0808C7F4: 8901         lsl r1,r1,#0x6
0808C7F6: 201c         add r0,r4,#0x0
0808C7F8: 90f782fb     bl 0x0801cf00
0808C7FC: 0820         mov r0,#0x8
0808C7FE: a074         strb r0,[r4,#0x12]
0808C800: e07b         ldrb r0,[r4,#0xf]
0808C802: 0130         add r0,#0x1
0808C804: e073         strb r0,[r4,#0xf]
0808C806: 201c         add r0,r4,#0x0
0808C808: 90f7f2fb     bl 0x0801cff0
0808C80C: a07c         ldrb r0,[r4,#0x12]
0808C80E: 0138         sub r0,#0x1
0808C810: a074         strb r0,[r4,#0x12]
0808C812: 0006         lsl r0,r0,#0x18
0808C814: 010e         lsr r1,r0,#0x18
0808C816: 0029         cmp r1,#0x0
0808C818: 02d1         bne 0x0808c820
0808C81A: 0120         mov r0,#0x1
0808C81C: a073         strb r0,[r4,#0xe]
0808C81E: e173         strb r1,[r4,#0xf]
0808C820: 10bc         pop {r4}
0808C822: 01bc         pop {r0}
0808C824: 0047         bx r0
