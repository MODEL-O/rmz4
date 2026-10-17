; undefined FUN_0808657c(void)
; entry 0x808657c  size 60 bytes

0808657C: 10b5         push {r4,lr}
0808657E: 041c         add r4,r0,#0x0
08086580: e07b         ldrb r0,[r4,#0xf]
08086582: 0028         cmp r0,#0x0
08086584: 0ed1         bne 0x080865a4
08086586: 201c         add r0,r4,#0x0
08086588: 7430         add r0,#0x74
0808658A: 0b49         ldr r1,[0x080865b8]
0808658C: 7ff7faf8     bl 0x08005784
08086590: 201c         add r0,r4,#0x0
08086592: 0421         mov r1,#0x4
08086594: 00f03efa     bl 0x08086a14
08086598: 8020         mov r0,#0x80
0808659A: 4042         rsb r0,r0
0808659C: 2066         str r0,[r4,#0x60]
0808659E: e07b         ldrb r0,[r4,#0xf]
080865A0: 0130         add r0,#0x1
080865A2: e073         strb r0,[r4,#0xf]
080865A4: 201c         add r0,r4,#0x0
080865A6: 00f04ffa     bl 0x08086a48
080865AA: a06d         ldr r0,[r4,#0x58]
080865AC: 216e         ldr r1,[r4,#0x60]
080865AE: 4018         add r0,r0,r1
080865B0: a065         str r0,[r4,#0x58]
080865B2: 10bc         pop {r4}
080865B4: 01bc         pop {r0}
080865B6: 0047         bx r0
