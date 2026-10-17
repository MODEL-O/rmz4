; undefined FUN_08053514(void)
; entry 0x8053514  size 74 bytes

08053514: 10b5         push {r4,lr}
08053516: 041c         add r4,r0,#0x0
08053518: e07b         ldrb r0,[r4,#0xf]
0805351A: 0028         cmp r0,#0x0
0805351C: 0fd1         bne 0x0805353e
0805351E: 201c         add r0,r4,#0x0
08053520: c830         add r0,#0xc8
08053522: 0068         ldr r0,[r0,#0x0]
08053524: b430         add r0,#0xb4
08053526: 0121         mov r1,#0x1
08053528: 0170         strb r1,[r0,#0x0]
0805352A: b621         mov r1,#0xb6
0805352C: 0902         lsl r1,r1,#0x8
0805352E: 201c         add r0,r4,#0x0
08053530: c9f7e6fc     bl 0x0801cf00
08053534: 2020         mov r0,#0x20
08053536: a074         strb r0,[r4,#0x12]
08053538: e07b         ldrb r0,[r4,#0xf]
0805353A: 0130         add r0,#0x1
0805353C: e073         strb r0,[r4,#0xf]
0805353E: 201c         add r0,r4,#0x0
08053540: c9f756fd     bl 0x0801cff0
08053544: a07c         ldrb r0,[r4,#0x12]
08053546: 0138         sub r0,#0x1
08053548: a074         strb r0,[r4,#0x12]
0805354A: 0006         lsl r0,r0,#0x18
0805354C: 010e         lsr r1,r0,#0x18
0805354E: 0029         cmp r1,#0x0
08053550: 02d1         bne 0x08053558
08053552: 0120         mov r0,#0x1
08053554: a073         strb r0,[r4,#0xe]
08053556: e173         strb r1,[r4,#0xf]
08053558: 10bc         pop {r4}
0805355A: 01bc         pop {r0}
0805355C: 0047         bx r0
