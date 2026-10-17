; undefined FUN_080116b8(void)
; entry 0x80116b8  size 32 bytes

080116B8: 00b5         push {lr}
080116BA: 6830         add r0,#0x68
080116BC: 0188         ldrh r1,[r0,#0x0]
080116BE: 0139         sub r1,#0x1
080116C0: 0180         strh r1,[r0,#0x0]
080116C2: 0904         lsl r1,r1,#0x10
080116C4: 0029         cmp r1,#0x0
080116C6: 05d1         bne 0x080116d4
080116C8: 0349         ldr r1,[0x080116d8]
080116CA: 0448         ldr r0,[0x080116dc]
080116CC: 0918         add r1,r1,r0
080116CE: 0878         ldrb r0,[r1,#0x0]
080116D0: 0130         add r0,#0x1
080116D2: 0870         strb r0,[r1,#0x0]
080116D4: 01bc         pop {r0}
080116D6: 0047         bx r0
