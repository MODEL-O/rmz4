; undefined FUN_080a2cb4(void)
; entry 0x80a2cb4  size 20 bytes

080A2CB4: 00b5         push {lr}
080A2CB6: 044a         ldr r2,[0x080a2cc8]
080A2CB8: 017c         ldrb r1,[r0,#0x10]
080A2CBA: 8900         lsl r1,r1,#0x2
080A2CBC: 8918         add r1,r1,r2
080A2CBE: 0968         ldr r1,[r1,#0x0]
080A2CC0: 86f05ef9     bl 0x08128f80
080A2CC4: 01bc         pop {r0}
080A2CC6: 0047         bx r0
