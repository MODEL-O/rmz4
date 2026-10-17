; undefined FUN_08002b5c(void)
; entry 0x8002b5c  size 32 bytes

08002B5C: 10b5         push {r4,lr}
08002B5E: 0004         lsl r0,r0,#0x10
08002B60: 0028         cmp r0,#0x0
08002B62: 08db         blt 0x08002b76
08002B64: 040c         lsr r4,r0,#0x10
08002B66: 201c         add r0,r4,#0x0
08002B68: fff7b2ff     bl 0x08002ad0
08002B6C: 0028         cmp r0,#0x0
08002B6E: 02d0         beq 0x08002b76
08002B70: 201c         add r0,r4,#0x0
08002B72: 24f185fe     bl 0x08127880
08002B76: 10bc         pop {r4}
08002B78: 01bc         pop {r0}
08002B7A: 0047         bx r0
