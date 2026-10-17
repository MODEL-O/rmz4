; undefined FUN_08037cb4(void)
; entry 0x8037cb4  size 44 bytes

08037CB4: 10b5         push {r4,lr}
08037CB6: 041c         add r4,r0,#0x0
08037CB8: 02f070fa     bl 0x0803a19c
08037CBC: 011c         add r1,r0,#0x0
08037CBE: 0029         cmp r1,#0x0
08037CC0: 04d1         bne 0x08037ccc
08037CC2: 8022         mov r2,#0x80
08037CC4: 5200         lsl r2,r2,#0x1
08037CC6: a018         add r0,r4,r2
08037CC8: 0170         strb r1,[r0,#0x0]
08037CCA: 06e0         b 0x08037cda
08037CCC: 0448         ldr r0,[0x08037ce0]
08037CCE: 2118         add r1,r4,r0
08037CD0: 0120         mov r0,#0x1
08037CD2: 0870         strb r0,[r1,#0x0]
08037CD4: 201c         add r0,r4,#0x0
08037CD6: 00f005f8     bl 0x08037ce4
08037CDA: 10bc         pop {r4}
08037CDC: 01bc         pop {r0}
08037CDE: 0047         bx r0
