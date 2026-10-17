; undefined FUN_08084cac(void)
; entry 0x8084cac  size 32 bytes

08084CAC: 10b5         push {r4,lr}
08084CAE: 041c         add r4,r0,#0x0
08084CB0: a07b         ldrb r0,[r4,#0xe]
08084CB2: 0028         cmp r0,#0x0
08084CB4: 07d1         bne 0x08084cc6
08084CB6: 201c         add r0,r4,#0x0
08084CB8: 7430         add r0,#0x74
08084CBA: 0449         ldr r1,[0x08084ccc]
08084CBC: 80f762fd     bl 0x08005784
08084CC0: a07b         ldrb r0,[r4,#0xe]
08084CC2: 0130         add r0,#0x1
08084CC4: a073         strb r0,[r4,#0xe]
08084CC6: 10bc         pop {r4}
08084CC8: 01bc         pop {r0}
08084CCA: 0047         bx r0
