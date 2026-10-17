; undefined FUN_080722ac(void)
; entry 0x80722ac  size 68 bytes

080722AC: 10b5         push {r4,lr}
080722AE: 021c         add r2,r0,#0x0
080722B0: 907a         ldrb r0,[r2,#0xa]
080722B2: 0309         lsr r3,r0,#0x4
080722B4: 0120         mov r0,#0x1
080722B6: 0340         and r3,r0
080722B8: 0024         mov r4,#0x0
080722BA: 0648         ldr r0,[0x080722d4]
080722BC: 0068         ldr r0,[r0,#0x0]
080722BE: 516d         ldr r1,[r2,#0x54]
080722C0: 406d         ldr r0,[r0,#0x54]
080722C2: 8142         cmp r1,r0
080722C4: 00da         bge 0x080722c8
080722C6: 0124         mov r4,#0x1
080722C8: 9c42         cmp r4,r3
080722CA: 05d0         beq 0x080722d8
080722CC: 0021         mov r1,#0x0
080722CE: 1a20         mov r0,#0x1a
080722D0: 04e0         b 0x080722dc
080722D8: 0021         mov r1,#0x0
080722DA: 1c20         mov r0,#0x1c
080722DC: 9073         strb r0,[r2,#0xe]
080722DE: d173         strb r1,[r2,#0xf]
080722E0: 0548         ldr r0,[0x080722f8]
080722E2: 517b         ldrb r1,[r2,#0xd]
080722E4: 8900         lsl r1,r1,#0x2
080722E6: 0918         add r1,r1,r0
080722E8: 0968         ldr r1,[r1,#0x0]
080722EA: 101c         add r0,r2,#0x0
080722EC: b6f048fe     bl 0x08128f80
080722F0: 10bc         pop {r4}
080722F2: 01bc         pop {r0}
080722F4: 0047         bx r0
