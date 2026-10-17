; undefined FUN_080ca8c0(void)
; entry 0x80ca8c0  size 56 bytes

080CA8C0: 10b5         push {r4,lr}
080CA8C2: 041c         add r4,r0,#0x0
080CA8C4: 52f794fb     bl 0x0801cff0
080CA8C8: 606d         ldr r0,[r4,#0x54]
080CA8CA: e16d         ldr r1,[r4,#0x5c]
080CA8CC: 4018         add r0,r0,r1
080CA8CE: 6065         str r0,[r4,#0x54]
080CA8D0: a16d         ldr r1,[r4,#0x58]
080CA8D2: a26e         ldr r2,[r4,#0x68]
080CA8D4: 8918         add r1,r1,r2
080CA8D6: 3df7d1f9     bl 0x08007c7c
080CA8DA: 0004         lsl r0,r0,#0x10
080CA8DC: 0028         cmp r0,#0x0
080CA8DE: 08d0         beq 0x080ca8f2
080CA8E0: 0549         ldr r1,[0x080ca8f8]
080CA8E2: 607a         ldrb r0,[r4,#0x9]
080CA8E4: 8000         lsl r0,r0,#0x2
080CA8E6: 4018         add r0,r0,r1
080CA8E8: 0221         mov r1,#0x2
080CA8EA: e160         str r1,[r4,#0xc]
080CA8EC: 0068         ldr r0,[r0,#0x0]
080CA8EE: 8068         ldr r0,[r0,#0x8]
080CA8F0: 6061         str r0,[r4,#0x14]
080CA8F2: 10bc         pop {r4}
080CA8F4: 01bc         pop {r0}
080CA8F6: 0047         bx r0
