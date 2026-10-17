; undefined FUN_08125f60(void)
; entry 0x8125f60  size 40 bytes

08125F60: 00b5         push {lr}
08125F62: 011c         add r1,r0,#0x0
08125F64: 0622         mov r2,#0x6
08125F66: 885e         ldrsh r0,[r1,r2]
08125F68: 0028         cmp r0,#0x0
08125F6A: 0ad0         beq 0x08125f82
08125F6C: 064a         ldr r2,[0x08125f88]
08125F6E: 8818         add r0,r1,r2
08125F70: 0649         ldr r1,[0x08125f8c]
08125F72: 0269         ldr r2,[r0,#0x10]
08125F74: 086b         ldr r0,[r1,#0x30]
08125F76: 8242         cmp r2,r0
08125F78: 03d9         bls 0x08125f82
08125F7A: 0520         mov r0,#0x5
08125F7C: 111c         add r1,r2,#0x0
08125F7E: e0f675fd     bl 0x08006a6c
08125F82: 0020         mov r0,#0x0
08125F84: 02bc         pop {r1}
08125F86: 0847         bx r1
