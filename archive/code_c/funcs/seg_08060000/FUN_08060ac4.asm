; undefined FUN_08060ac4(void)
; entry 0x8060ac4  size 68 bytes

08060AC4: 10b5         push {r4,lr}
08060AC6: 041c         add r4,r0,#0x0
08060AC8: a07b         ldrb r0,[r4,#0xe]
08060ACA: 0028         cmp r0,#0x0
08060ACC: 0bd1         bne 0x08060ae6
08060ACE: 0e49         ldr r1,[0x08060b08]
08060AD0: 201c         add r0,r4,#0x0
08060AD2: bcf715fa     bl 0x0801cf00
08060AD6: 2020         mov r0,#0x20
08060AD8: a074         strb r0,[r4,#0x12]
08060ADA: 2d20         mov r0,#0x2d
08060ADC: a2f718f8     bl 0x08002b10
08060AE0: a07b         ldrb r0,[r4,#0xe]
08060AE2: 0130         add r0,#0x1
08060AE4: a073         strb r0,[r4,#0xe]
08060AE6: 201c         add r0,r4,#0x0
08060AE8: bcf782fa     bl 0x0801cff0
08060AEC: a07c         ldrb r0,[r4,#0x12]
08060AEE: 0138         sub r0,#0x1
08060AF0: a074         strb r0,[r4,#0x12]
08060AF2: 0006         lsl r0,r0,#0x18
08060AF4: 000e         lsr r0,r0,#0x18
08060AF6: ff28         cmp r0,#0xff
08060AF8: 03d1         bne 0x08060b02
08060AFA: 1220         mov r0,#0x12
08060AFC: 6073         strb r0,[r4,#0xd]
08060AFE: 0020         mov r0,#0x0
08060B00: a073         strb r0,[r4,#0xe]
08060B02: 10bc         pop {r4}
08060B04: 01bc         pop {r0}
08060B06: 0047         bx r0
