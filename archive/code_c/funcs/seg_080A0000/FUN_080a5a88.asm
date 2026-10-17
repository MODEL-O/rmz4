; undefined FUN_080a5a88(void)
; entry 0x80a5a88  size 72 bytes

080A5A88: 00b5         push {lr}
080A5A8A: 021c         add r2,r0,#0x0
080A5A8C: 8c30         add r0,#0x8c
080A5A8E: 0068         ldr r0,[r0,#0x0]
080A5A90: 8021         mov r1,#0x80
080A5A92: 8900         lsl r1,r1,#0x2
080A5A94: 0840         and r0,r1
080A5A96: 0028         cmp r0,#0x0
080A5A98: 12d0         beq 0x080a5ac0
080A5A9A: 0849         ldr r1,[0x080a5abc]
080A5A9C: 507a         ldrb r0,[r2,#0x9]
080A5A9E: 8000         lsl r0,r0,#0x2
080A5AA0: 4018         add r0,r0,r1
080A5AA2: 0221         mov r1,#0x2
080A5AA4: d160         str r1,[r2,#0xc]
080A5AA6: 0068         ldr r0,[r0,#0x0]
080A5AA8: 8068         ldr r0,[r0,#0x8]
080A5AAA: 5061         str r0,[r2,#0x14]
080A5AAC: 0020         mov r0,#0x0
080A5AAE: 5073         strb r0,[r2,#0xd]
080A5AB0: 9073         strb r0,[r2,#0xe]
080A5AB2: d073         strb r0,[r2,#0xf]
080A5AB4: 101c         add r0,r2,#0x0
080A5AB6: 00f03bfa     bl 0x080a5f30
080A5ABA: 09e0         b 0x080a5ad0
080A5AC0: 0448         ldr r0,[0x080a5ad4]
080A5AC2: 517b         ldrb r1,[r2,#0xd]
080A5AC4: 8900         lsl r1,r1,#0x2
080A5AC6: 0918         add r1,r1,r0
080A5AC8: 0968         ldr r1,[r1,#0x0]
080A5ACA: 101c         add r0,r2,#0x0
080A5ACC: 83f058fa     bl 0x08128f80
080A5AD0: 01bc         pop {r0}
080A5AD2: 0047         bx r0
