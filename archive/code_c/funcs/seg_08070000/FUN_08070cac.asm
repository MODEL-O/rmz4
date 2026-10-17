; undefined FUN_08070cac(void)
; entry 0x8070cac  size 70 bytes

08070CAC: 10b5         push {r4,lr}
08070CAE: 021c         add r2,r0,#0x0
08070CB0: 907a         ldrb r0,[r2,#0xa]
08070CB2: 0309         lsr r3,r0,#0x4
08070CB4: 0120         mov r0,#0x1
08070CB6: 0340         and r3,r0
08070CB8: 0024         mov r4,#0x0
08070CBA: 0648         ldr r0,[0x08070cd4]
08070CBC: 0068         ldr r0,[r0,#0x0]
08070CBE: 516d         ldr r1,[r2,#0x54]
08070CC0: 406d         ldr r0,[r0,#0x54]
08070CC2: 8142         cmp r1,r0
08070CC4: 00da         bge 0x08070cc8
08070CC6: 0124         mov r4,#0x1
08070CC8: 9c42         cmp r4,r3
08070CCA: 05d0         beq 0x08070cd8
08070CCC: 907b         ldrb r0,[r2,#0xe]
08070CCE: 0130         add r0,#0x1
08070CD0: 04e0         b 0x08070cdc
08070CD8: 907b         ldrb r0,[r2,#0xe]
08070CDA: 0330         add r0,#0x3
08070CDC: 9073         strb r0,[r2,#0xe]
08070CDE: 0020         mov r0,#0x0
08070CE0: d073         strb r0,[r2,#0xf]
08070CE2: 0549         ldr r1,[0x08070cf8]
08070CE4: 507b         ldrb r0,[r2,#0xd]
08070CE6: 8000         lsl r0,r0,#0x2
08070CE8: 4018         add r0,r0,r1
08070CEA: 0168         ldr r1,[r0,#0x0]
08070CEC: 101c         add r0,r2,#0x0
08070CEE: b8f047f9     bl 0x08128f80
08070CF2: 10bc         pop {r4}
08070CF4: 01bc         pop {r0}
08070CF6: 0047         bx r0
