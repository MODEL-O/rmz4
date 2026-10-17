; undefined FUN_0805c7a4(void)
; entry 0x805c7a4  size 64 bytes

0805C7A4: 10b5         push {r4,lr}
0805C7A6: 041c         add r4,r0,#0x0
0805C7A8: e07b         ldrb r0,[r4,#0xf]
0805C7AA: 0028         cmp r0,#0x0
0805C7AC: 0dd1         bne 0x0805c7ca
0805C7AE: a17a         ldrb r1,[r4,#0xa]
0805C7B0: fe20         mov r0,#0xfe
0805C7B2: 0840         and r0,r1
0805C7B4: a072         strb r0,[r4,#0xa]
0805C7B6: 201c         add r0,r4,#0x0
0805C7B8: 7430         add r0,#0x74
0805C7BA: 0a49         ldr r1,[0x0805c7e4]
0805C7BC: 0968         ldr r1,[r1,#0x0]
0805C7BE: 0968         ldr r1,[r1,#0x0]
0805C7C0: a8f7e0ff     bl 0x08005784
0805C7C4: e07b         ldrb r0,[r4,#0xf]
0805C7C6: 0130         add r0,#0x1
0805C7C8: e073         strb r0,[r4,#0xf]
0805C7CA: a069         ldr r0,[r4,#0x18]
0805C7CC: 417a         ldrb r1,[r0,#0x9]
0805C7CE: 0122         mov r2,#0x1
0805C7D0: 101c         add r0,r2,#0x0
0805C7D2: 0840         and r0,r1
0805C7D4: 0028         cmp r0,#0x0
0805C7D6: 02d0         beq 0x0805c7de
0805C7D8: 0020         mov r0,#0x0
0805C7DA: a273         strb r2,[r4,#0xe]
0805C7DC: e073         strb r0,[r4,#0xf]
0805C7DE: 10bc         pop {r4}
0805C7E0: 01bc         pop {r0}
0805C7E2: 0047         bx r0
