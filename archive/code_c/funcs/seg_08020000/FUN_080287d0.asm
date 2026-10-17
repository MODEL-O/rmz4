; undefined FUN_080287d0(void)
; entry 0x80287d0  size 58 bytes

080287D0: 00b5         push {lr}
080287D2: 021c         add r2,r0,#0x0
080287D4: d168         ldr r1,[r2,#0xc]
080287D6: 4878         ldrb r0,[r1,#0x1]
080287D8: 0028         cmp r0,#0x0
080287DA: 02d0         beq 0x080287e2
080287DC: 0128         cmp r0,#0x1
080287DE: 08d0         beq 0x080287f2
080287E0: 10e0         b 0x08028804
080287E2: 4868         ldr r0,[r1,#0x4]
080287E4: 8023         mov r3,#0x80
080287E6: 1b02         lsl r3,r3,#0x8
080287E8: 191c         add r1,r3,#0x0
080287EA: a623         mov r3,#0xa6
080287EC: 5b00         lsl r3,r3,#0x1
080287EE: d218         add r2,r2,r3
080287F0: 06e0         b 0x08028800
080287F2: a620         mov r0,#0xa6
080287F4: 4000         lsl r0,r0,#0x1
080287F6: 1218         add r2,r2,r0
080287F8: 1188         ldrh r1,[r2,#0x0]
080287FA: 8023         mov r3,#0x80
080287FC: db01         lsl r3,r3,#0x7
080287FE: 181c         add r0,r3,#0x0
08028800: 0843         orr r0,r1
08028802: 1080         strh r0,[r2,#0x0]
08028804: 0020         mov r0,#0x0
08028806: 02bc         pop {r1}
08028808: 0847         bx r1
