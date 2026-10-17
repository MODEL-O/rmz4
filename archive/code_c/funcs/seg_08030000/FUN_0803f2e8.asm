; undefined FUN_0803f2e8(void)
; entry 0x803f2e8  size 42 bytes

0803F2E8: 00b5         push {lr}
0803F2EA: 021c         add r2,r0,#0x0
0803F2EC: 5069         ldr r0,[r2,#0x14]
0803F2EE: 0421         mov r1,#0x4
0803F2F0: 0840         and r0,r1
0803F2F2: 0028         cmp r0,#0x0
0803F2F4: 0bd0         beq 0x0803f30e
0803F2F6: d36a         ldr r3,[r2,#0x2c]
0803F2F8: d068         ldr r0,[r2,#0xc]
0803F2FA: 8069         ldr r0,[r0,#0x18]
0803F2FC: 8021         mov r1,#0x80
0803F2FE: 8900         lsl r1,r1,#0x2
0803F300: 0840         and r0,r1
0803F302: 0028         cmp r0,#0x0
0803F304: 03d1         bne 0x0803f30e
0803F306: 191c         add r1,r3,#0x0
0803F308: b431         add r1,#0xb4
0803F30A: 0120         mov r0,#0x1
0803F30C: c871         strb r0,[r1,#0x7]
0803F30E: 01bc         pop {r0}
0803F310: 0047         bx r0
