; undefined FUN_080a7c98(void)
; entry 0x80a7c98  size 72 bytes

080A7C98: 00b5         push {lr}
080A7C9A: 021c         add r2,r0,#0x0
080A7C9C: 916a         ldr r1,[r2,#0x28]
080A7C9E: 087b         ldrb r0,[r1,#0xc]
080A7CA0: 0128         cmp r0,#0x1
080A7CA2: 0fd9         bls 0x080a7cc4
080A7CA4: 0649         ldr r1,[0x080a7cc0]
080A7CA6: 507a         ldrb r0,[r2,#0x9]
080A7CA8: 8000         lsl r0,r0,#0x2
080A7CAA: 4018         add r0,r0,r1
080A7CAC: 0221         mov r1,#0x2
080A7CAE: d160         str r1,[r2,#0xc]
080A7CB0: 0068         ldr r0,[r0,#0x0]
080A7CB2: 8068         ldr r0,[r0,#0x8]
080A7CB4: 5061         str r0,[r2,#0x14]
080A7CB6: 101c         add r0,r2,#0x0
080A7CB8: 00f018f8     bl 0x080a7cec
080A7CBC: 11e0         b 0x080a7ce2
080A7CC4: 487b         ldrb r0,[r1,#0xd]
080A7CC6: 0028         cmp r0,#0x0
080A7CC8: 03d1         bne 0x080a7cd2
080A7CCA: 101c         add r0,r2,#0x0
080A7CCC: 75f790f9     bl 0x0801cff0
080A7CD0: 07e0         b 0x080a7ce2
080A7CD2: 0548         ldr r0,[0x080a7ce8]
080A7CD4: 517b         ldrb r1,[r2,#0xd]
080A7CD6: 8900         lsl r1,r1,#0x2
080A7CD8: 0918         add r1,r1,r0
080A7CDA: 0968         ldr r1,[r1,#0x0]
080A7CDC: 101c         add r0,r2,#0x0
080A7CDE: 81f04ff9     bl 0x08128f80
080A7CE2: 01bc         pop {r0}
080A7CE4: 0047         bx r0
