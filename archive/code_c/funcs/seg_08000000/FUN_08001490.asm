; undefined FUN_08001490(void)
; entry 0x8001490  size 28 bytes

08001490: 30b5         push {r4,r5,lr}
08001492: 0024         mov r4,#0x0
08001494: 054d         ldr r5,[0x080014ac]
08001496: 281c         add r0,r5,#0x0
08001498: 211c         add r1,r4,#0x0
0800149A: 00f009f8     bl 0x080014b0
0800149E: 1835         add r5,#0x18
080014A0: 0134         add r4,#0x1
080014A2: 012c         cmp r4,#0x1
080014A4: f7dd         ble 0x08001496
080014A6: 30bc         pop {r4,r5}
080014A8: 01bc         pop {r0}
080014AA: 0047         bx r0
