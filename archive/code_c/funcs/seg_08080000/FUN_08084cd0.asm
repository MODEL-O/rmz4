; undefined FUN_08084cd0(void)
; entry 0x8084cd0  size 74 bytes

08084CD0: 10b5         push {r4,lr}
08084CD2: 041c         add r4,r0,#0x0
08084CD4: a07b         ldrb r0,[r4,#0xe]
08084CD6: 0028         cmp r0,#0x0
08084CD8: 02d0         beq 0x08084ce0
08084CDA: 0128         cmp r0,#0x1
08084CDC: 0ed0         beq 0x08084cfc
08084CDE: 19e0         b 0x08084d14
08084CE0: 3b20         mov r0,#0x3b
08084CE2: 7df715ff     bl 0x08002b10
08084CE6: 0d49         ldr r1,[0x08084d1c]
08084CE8: 207c         ldrb r0,[r4,#0x10]
08084CEA: 4000         lsl r0,r0,#0x1
08084CEC: 4018         add r0,r0,r1
08084CEE: 0188         ldrh r1,[r0,#0x0]
08084CF0: 201c         add r0,r4,#0x0
08084CF2: 98f705f9     bl 0x0801cf00
08084CF6: a07b         ldrb r0,[r4,#0xe]
08084CF8: 0130         add r0,#0x1
08084CFA: a073         strb r0,[r4,#0xe]
08084CFC: 201c         add r0,r4,#0x0
08084CFE: 98f777f9     bl 0x0801cff0
08084D02: 201c         add r0,r4,#0x0
08084D04: 7330         add r0,#0x73
08084D06: 0078         ldrb r0,[r0,#0x0]
08084D08: 0328         cmp r0,#0x3
08084D0A: 03d1         bne 0x08084d14
08084D0C: 0021         mov r1,#0x0
08084D0E: 0220         mov r0,#0x2
08084D10: 6073         strb r0,[r4,#0xd]
08084D12: a173         strb r1,[r4,#0xe]
08084D14: 10bc         pop {r4}
08084D16: 01bc         pop {r0}
08084D18: 0047         bx r0
