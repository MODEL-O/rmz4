; undefined FUN_080f7c80(void)
; entry 0x80f7c80  size 56 bytes

080F7C80: 00b5         push {lr}
080F7C82: 031c         add r3,r0,#0x0
080F7C84: 987b         ldrb r0,[r3,#0xe]
080F7C86: 0428         cmp r0,#0x4
080F7C88: 20d8         bhi 0x080f7ccc
080F7C8A: 8000         lsl r0,r0,#0x2
080F7C8C: 0149         ldr r1,[0x080f7c94]
080F7C8E: 4018         add r0,r0,r1
080F7C90: 0068         ldr r0,[r0,#0x0]
080F7C92: 8746         mov pc,r0
080F7CCC: 094a         ldr r2,[0x080f7cf4]
080F7CCE: d96d         ldr r1,[r3,#0x5c]
080F7CD0: 0948         ldr r0,[0x080f7cf8]
080F7CD2: 0918         add r1,r1,r0
080F7CD4: 906b         ldr r0,[r2,#0x38]
080F7CD6: 4018         add r0,r0,r1
080F7CD8: 5865         str r0,[r3,#0x54]
080F7CDA: 196e         ldr r1,[r3,#0x60]
080F7CDC: 0748         ldr r0,[0x080f7cfc]
080F7CDE: 0918         add r1,r1,r0
080F7CE0: d06b         ldr r0,[r2,#0x3c]
080F7CE2: 4018         add r0,r0,r1
080F7CE4: 9865         str r0,[r3,#0x58]
080F7CE6: 181c         add r0,r3,#0x0
080F7CE8: 25f782f9     bl 0x0801cff0
080F7CEC: 01bc         pop {r0}
080F7CEE: 0047         bx r0
