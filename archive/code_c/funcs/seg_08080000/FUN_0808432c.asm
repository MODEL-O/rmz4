; undefined FUN_0808432c(void)
; entry 0x808432c  size 58 bytes

0808432C: 10b5         push {r4,lr}
0808432E: 041c         add r4,r0,#0x0
08084330: a07b         ldrb r0,[r4,#0xe]
08084332: 0028         cmp r0,#0x0
08084334: 09d1         bne 0x0808434a
08084336: e021         mov r1,#0xe0
08084338: 4901         lsl r1,r1,#0x5
0808433A: 201c         add r0,r4,#0x0
0808433C: 98f7e0fd     bl 0x0801cf00
08084340: 0820         mov r0,#0x8
08084342: a074         strb r0,[r4,#0x12]
08084344: a07b         ldrb r0,[r4,#0xe]
08084346: 0130         add r0,#0x1
08084348: a073         strb r0,[r4,#0xe]
0808434A: a07c         ldrb r0,[r4,#0x12]
0808434C: 0138         sub r0,#0x1
0808434E: a074         strb r0,[r4,#0x12]
08084350: 0006         lsl r0,r0,#0x18
08084352: 000e         lsr r0,r0,#0x18
08084354: ff28         cmp r0,#0xff
08084356: 03d1         bne 0x08084360
08084358: 0220         mov r0,#0x2
0808435A: 6073         strb r0,[r4,#0xd]
0808435C: 0020         mov r0,#0x0
0808435E: a073         strb r0,[r4,#0xe]
08084360: 10bc         pop {r4}
08084362: 01bc         pop {r0}
08084364: 0047         bx r0
