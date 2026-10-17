; undefined FUN_08027de0(void)
; entry 0x8027de0  size 24 bytes

08027DE0: 00b5         push {lr}
08027DE2: 021c         add r2,r0,#0x0
08027DE4: d168         ldr r1,[r2,#0xc]
08027DE6: 4878         ldrb r0,[r1,#0x1]
08027DE8: 0028         cmp r0,#0x0
08027DEA: 02d1         bne 0x08027df2
08027DEC: 4868         ldr r0,[r1,#0x4]
08027DEE: 0838         sub r0,#0x8
08027DF0: d060         str r0,[r2,#0xc]
08027DF2: 0020         mov r0,#0x0
08027DF4: 02bc         pop {r1}
08027DF6: 0847         bx r1
