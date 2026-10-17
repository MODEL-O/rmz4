; undefined FUN_080ad5b0(void)
; entry 0x80ad5b0  size 64 bytes

080AD5B0: 30b5         push {r4,r5,lr}
080AD5B2: 051c         add r5,r0,#0x0
080AD5B4: 0e49         ldr r1,[0x080ad5f0]
080AD5B6: 687a         ldrb r0,[r5,#0x9]
080AD5B8: 8000         lsl r0,r0,#0x2
080AD5BA: 4018         add r0,r0,r1
080AD5BC: 0121         mov r1,#0x1
080AD5BE: e960         str r1,[r5,#0xc]
080AD5C0: 0068         ldr r0,[r0,#0x0]
080AD5C2: 4068         ldr r0,[r0,#0x4]
080AD5C4: 6861         str r0,[r5,#0x14]
080AD5C6: a97a         ldrb r1,[r5,#0xa]
080AD5C8: fe20         mov r0,#0xfe
080AD5CA: 0840         and r0,r1
080AD5CC: 0221         mov r1,#0x2
080AD5CE: 0843         orr r0,r1
080AD5D0: a872         strb r0,[r5,#0xa]
080AD5D2: 0024         mov r4,#0x0
080AD5D4: 2106         lsl r1,r4,#0x18
080AD5D6: 090e         lsr r1,r1,#0x18
080AD5D8: 281c         add r0,r5,#0x0
080AD5DA: fff7adff     bl 0x080ad538
080AD5DE: 0134         add r4,#0x1
080AD5E0: 032c         cmp r4,#0x3
080AD5E2: f7dd         ble 0x080ad5d4
080AD5E4: 281c         add r0,r5,#0x0
080AD5E6: 00f047f8     bl 0x080ad678
080AD5EA: 30bc         pop {r4,r5}
080AD5EC: 01bc         pop {r0}
080AD5EE: 0047         bx r0
