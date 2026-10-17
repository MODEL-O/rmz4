; undefined FUN_080434b8(void)
; entry 0x80434b8  size 40 bytes

080434B8: 10b5         push {r4,lr}
080434BA: 041c         add r4,r0,#0x0
080434BC: bd30         add r0,#0xbd
080434BE: 0078         ldrb r0,[r0,#0x0]
080434C0: 0028         cmp r0,#0x0
080434C2: 07d0         beq 0x080434d4
080434C4: 211c         add r1,r4,#0x0
080434C6: 5431         add r1,#0x54
080434C8: 0120         mov r0,#0x1
080434CA: 8df0ddfb     bl 0x080d0c88
080434CE: 3520         mov r0,#0x35
080434D0: bff71efb     bl 0x08002b10
080434D4: 201c         add r0,r4,#0x0
080434D6: f7f7edf9     bl 0x0803a8b4
080434DA: 10bc         pop {r4}
080434DC: 01bc         pop {r0}
080434DE: 0047         bx r0
