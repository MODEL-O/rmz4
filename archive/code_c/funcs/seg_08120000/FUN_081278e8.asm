; undefined FUN_081278e8(void)
; entry 0x81278e8  size 36 bytes

081278E8: 30b5         push {r4,r5,lr}
081278EA: 0848         ldr r0,[0x0812790c]
081278EC: 0004         lsl r0,r0,#0x10
081278EE: 000c         lsr r0,r0,#0x10
081278F0: 0028         cmp r0,#0x0
081278F2: 08d0         beq 0x08127906
081278F4: 064d         ldr r5,[0x08127910]
081278F6: 041c         add r4,r0,#0x0
081278F8: 2868         ldr r0,[r5,#0x0]
081278FA: 00f043fb     bl 0x08127f84
081278FE: 0c35         add r5,#0xc
08127900: 013c         sub r4,#0x1
08127902: 002c         cmp r4,#0x0
08127904: f8d1         bne 0x081278f8
08127906: 30bc         pop {r4,r5}
08127908: 01bc         pop {r0}
0812790A: 0047         bx r0
