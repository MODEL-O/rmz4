; undefined FUN_08002bb4(void)
; entry 0x8002bb4  size 24 bytes

08002BB4: 00b5         push {lr}
08002BB6: 0004         lsl r0,r0,#0x10
08002BB8: 000c         lsr r0,r0,#0x10
08002BBA: fff789ff     bl 0x08002ad0
08002BBE: 0028         cmp r0,#0x0
08002BC0: 01d0         beq 0x08002bc6
08002BC2: 0120         mov r0,#0x1
08002BC4: 00e0         b 0x08002bc8
08002BC6: 0020         mov r0,#0x0
08002BC8: 02bc         pop {r1}
08002BCA: 0847         bx r1
