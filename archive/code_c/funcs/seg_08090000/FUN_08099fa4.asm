; undefined FUN_08099fa4(void)
; entry 0x8099fa4  size 72 bytes

08099FA4: 00b5         push {lr}
08099FA6: 021c         add r2,r0,#0x0
08099FA8: 107c         ldrb r0,[r2,#0x10]
08099FAA: 0328         cmp r0,#0x3
08099FAC: 16d8         bhi 0x08099fdc
08099FAE: 101c         add r0,r2,#0x0
08099FB0: 8c30         add r0,#0x8c
08099FB2: 0068         ldr r0,[r0,#0x0]
08099FB4: 8021         mov r1,#0x80
08099FB6: 8900         lsl r1,r1,#0x2
08099FB8: 0840         and r0,r1
08099FBA: 0028         cmp r0,#0x0
08099FBC: 0ed0         beq 0x08099fdc
08099FBE: 0649         ldr r1,[0x08099fd8]
08099FC0: 507a         ldrb r0,[r2,#0x9]
08099FC2: 8000         lsl r0,r0,#0x2
08099FC4: 4018         add r0,r0,r1
08099FC6: 0221         mov r1,#0x2
08099FC8: d160         str r1,[r2,#0xc]
08099FCA: 0068         ldr r0,[r0,#0x0]
08099FCC: 8068         ldr r0,[r0,#0x8]
08099FCE: 5061         str r0,[r2,#0x14]
08099FD0: 101c         add r0,r2,#0x0
08099FD2: 00f00ff8     bl 0x08099ff4
08099FD6: 09e0         b 0x08099fec
08099FDC: 0448         ldr r0,[0x08099ff0]
08099FDE: 117c         ldrb r1,[r2,#0x10]
08099FE0: 8900         lsl r1,r1,#0x2
08099FE2: 0918         add r1,r1,r0
08099FE4: 0968         ldr r1,[r1,#0x0]
08099FE6: 101c         add r0,r2,#0x0
08099FE8: 8ef0caff     bl 0x08128f80
08099FEC: 01bc         pop {r0}
08099FEE: 0047         bx r0
