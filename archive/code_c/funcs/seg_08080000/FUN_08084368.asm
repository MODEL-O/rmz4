; undefined FUN_08084368(void)
; entry 0x8084368  size 70 bytes

08084368: 10b5         push {r4,lr}
0808436A: 041c         add r4,r0,#0x0
0808436C: a07b         ldrb r0,[r4,#0xe]
0808436E: 0028         cmp r0,#0x0
08084370: 08d1         bne 0x08084384
08084372: 0f49         ldr r1,[0x080843b0]
08084374: 201c         add r0,r4,#0x0
08084376: 98f7c3fd     bl 0x0801cf00
0808437A: 0820         mov r0,#0x8
0808437C: a074         strb r0,[r4,#0x12]
0808437E: a07b         ldrb r0,[r4,#0xe]
08084380: 0130         add r0,#0x1
08084382: a073         strb r0,[r4,#0xe]
08084384: a07c         ldrb r0,[r4,#0x12]
08084386: 0138         sub r0,#0x1
08084388: a074         strb r0,[r4,#0x12]
0808438A: 0006         lsl r0,r0,#0x18
0808438C: 000e         lsr r0,r0,#0x18
0808438E: ff28         cmp r0,#0xff
08084390: 0ad1         bne 0x080843a8
08084392: 606d         ldr r0,[r4,#0x54]
08084394: a16d         ldr r1,[r4,#0x58]
08084396: c022         mov r2,#0xc0
08084398: 1201         lsl r2,r2,#0x4
0808439A: 8918         add r1,r1,r2
0808439C: 39f026fe     bl 0x080bdfec
080843A0: 0620         mov r0,#0x6
080843A2: 6073         strb r0,[r4,#0xd]
080843A4: 0020         mov r0,#0x0
080843A6: a073         strb r0,[r4,#0xe]
080843A8: 10bc         pop {r4}
080843AA: 01bc         pop {r0}
080843AC: 0047         bx r0
