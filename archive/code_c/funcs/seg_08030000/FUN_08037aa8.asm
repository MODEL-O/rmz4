; undefined FUN_08037aa8(void)
; entry 0x8037aa8  size 58 bytes

08037AA8: 30b5         push {r4,r5,lr}
08037AAA: 051c         add r5,r0,#0x0
08037AAC: 0d4c         ldr r4,[0x08037ae4]
08037AAE: 211c         add r1,r4,#0x0
08037AB0: 02f07efc     bl 0x0803a3b0
08037AB4: 281c         add r0,r5,#0x0
08037AB6: 211c         add r1,r4,#0x0
08037AB8: 02f09afc     bl 0x0803a3f0
08037ABC: 0a49         ldr r1,[0x08037ae8]
08037ABE: 6818         add r0,r5,r1
08037AC0: 0278         ldrb r2,[r0,#0x0]
08037AC2: 022a         cmp r2,#0x2
08037AC4: 0ad1         bne 0x08037adc
08037AC6: 0948         ldr r0,[0x08037aec]
08037AC8: 2918         add r1,r5,r0
08037ACA: 0020         mov r0,#0x0
08037ACC: 0a70         strb r2,[r1,#0x0]
08037ACE: 8122         mov r2,#0x81
08037AD0: 5200         lsl r2,r2,#0x1
08037AD2: a918         add r1,r5,r2
08037AD4: 0870         strb r0,[r1,#0x0]
08037AD6: 281c         add r0,r5,#0x0
08037AD8: 00f00af8     bl 0x08037af0
08037ADC: 30bc         pop {r4,r5}
08037ADE: 01bc         pop {r0}
08037AE0: 0047         bx r0
