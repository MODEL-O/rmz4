; undefined FUN_08087cb8(void)
; entry 0x8087cb8  size 70 bytes

08087CB8: 10b5         push {r4,lr}
08087CBA: 041c         add r4,r0,#0x0
08087CBC: e07b         ldrb r0,[r4,#0xf]
08087CBE: 0028         cmp r0,#0x0
08087CC0: 0dd1         bne 0x08087cde
08087CC2: 201c         add r0,r4,#0x0
08087CC4: 7430         add r0,#0x74
08087CC6: 0e49         ldr r1,[0x08087d00]
08087CC8: 7df75cfd     bl 0x08005784
08087CCC: 0d49         ldr r1,[0x08087d04]
08087CCE: 201c         add r0,r4,#0x0
08087CD0: 95f716f9     bl 0x0801cf00
08087CD4: 0820         mov r0,#0x8
08087CD6: a074         strb r0,[r4,#0x12]
08087CD8: e07b         ldrb r0,[r4,#0xf]
08087CDA: 0130         add r0,#0x1
08087CDC: e073         strb r0,[r4,#0xf]
08087CDE: 201c         add r0,r4,#0x0
08087CE0: 95f786f9     bl 0x0801cff0
08087CE4: a07c         ldrb r0,[r4,#0x12]
08087CE6: 0138         sub r0,#0x1
08087CE8: a074         strb r0,[r4,#0x12]
08087CEA: 0006         lsl r0,r0,#0x18
08087CEC: 010e         lsr r1,r0,#0x18
08087CEE: 0029         cmp r1,#0x0
08087CF0: 02d1         bne 0x08087cf8
08087CF2: 0720         mov r0,#0x7
08087CF4: a073         strb r0,[r4,#0xe]
08087CF6: e173         strb r1,[r4,#0xf]
08087CF8: 10bc         pop {r4}
08087CFA: 01bc         pop {r0}
08087CFC: 0047         bx r0
