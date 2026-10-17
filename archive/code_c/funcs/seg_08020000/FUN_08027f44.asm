; undefined FUN_08027f44(void)
; entry 0x8027f44  size 34 bytes

08027F44: 30b5         push {r4,r5,lr}
08027F46: 041c         add r4,r0,#0x0
08027F48: 054d         ldr r5,[0x08027f60]
08027F4A: e068         ldr r0,[r4,#0xc]
08027F4C: 4078         ldrb r0,[r0,#0x1]
08027F4E: 1128         cmp r0,#0x11
08027F50: 00d9         bls 0x08027f54
08027F52: b3e0         b 0x080280bc
08027F54: 8000         lsl r0,r0,#0x2
08027F56: 0349         ldr r1,[0x08027f64]
08027F58: 4018         add r0,r0,r1
08027F5A: 0068         ldr r0,[r0,#0x0]
08027F5C: 8746         mov pc,r0
080280BC: 0020         mov r0,#0x0
080280BE: 30bc         pop {r4,r5}
080280C0: 02bc         pop {r1}
080280C2: 0847         bx r1
