; undefined FUN_080a5ad8(void)
; entry 0x80a5ad8  size 72 bytes

080A5AD8: 00b5         push {lr}
080A5ADA: 021c         add r2,r0,#0x0
080A5ADC: 8c30         add r0,#0x8c
080A5ADE: 0068         ldr r0,[r0,#0x0]
080A5AE0: 8021         mov r1,#0x80
080A5AE2: 8900         lsl r1,r1,#0x2
080A5AE4: 0840         and r0,r1
080A5AE6: 0028         cmp r0,#0x0
080A5AE8: 12d0         beq 0x080a5b10
080A5AEA: 0849         ldr r1,[0x080a5b0c]
080A5AEC: 507a         ldrb r0,[r2,#0x9]
080A5AEE: 8000         lsl r0,r0,#0x2
080A5AF0: 4018         add r0,r0,r1
080A5AF2: 0221         mov r1,#0x2
080A5AF4: d160         str r1,[r2,#0xc]
080A5AF6: 0068         ldr r0,[r0,#0x0]
080A5AF8: 8068         ldr r0,[r0,#0x8]
080A5AFA: 5061         str r0,[r2,#0x14]
080A5AFC: 0020         mov r0,#0x0
080A5AFE: 5073         strb r0,[r2,#0xd]
080A5B00: 9073         strb r0,[r2,#0xe]
080A5B02: d073         strb r0,[r2,#0xf]
080A5B04: 101c         add r0,r2,#0x0
080A5B06: 00f013fa     bl 0x080a5f30
080A5B0A: 09e0         b 0x080a5b20
080A5B10: 0448         ldr r0,[0x080a5b24]
080A5B12: 517b         ldrb r1,[r2,#0xd]
080A5B14: 8900         lsl r1,r1,#0x2
080A5B16: 0918         add r1,r1,r0
080A5B18: 0968         ldr r1,[r1,#0x0]
080A5B1A: 101c         add r0,r2,#0x0
080A5B1C: 83f030fa     bl 0x08128f80
080A5B20: 01bc         pop {r0}
080A5B22: 0047         bx r0
