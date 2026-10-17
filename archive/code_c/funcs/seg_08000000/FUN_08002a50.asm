; undefined FUN_08002a50(void)
; entry 0x8002a50  size 42 bytes

08002A50: 30b5         push {r4,r5,lr}
08002A52: 0a48         ldr r0,[0x08002a7c]
08002A54: 0004         lsl r0,r0,#0x10
08002A56: 000c         lsr r0,r0,#0x10
08002A58: 0028         cmp r0,#0x0
08002A5A: 0bd0         beq 0x08002a74
08002A5C: 084d         ldr r5,[0x08002a80]
08002A5E: 041c         add r4,r0,#0x0
08002A60: 2868         ldr r0,[r5,#0x0]
08002A62: 0849         ldr r1,[0x08002a84]
08002A64: 8022         mov r2,#0x80
08002A66: 5200         lsl r2,r2,#0x1
08002A68: 25f154fe     bl 0x08128714
08002A6C: 0c35         add r5,#0xc
08002A6E: 013c         sub r4,#0x1
08002A70: 002c         cmp r4,#0x0
08002A72: f5d1         bne 0x08002a60
08002A74: 30bc         pop {r4,r5}
08002A76: 01bc         pop {r0}
08002A78: 0047         bx r0
