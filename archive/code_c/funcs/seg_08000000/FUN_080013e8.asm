; undefined FUN_080013e8(void)
; entry 0x80013e8  size 28 bytes

080013E8: 00b5         push {lr}
080013EA: 4100         lsl r1,r0,#0x1
080013EC: 0918         add r1,r1,r0
080013EE: c900         lsl r1,r1,#0x3
080013F0: 0448         ldr r0,[0x08001404]
080013F2: 0918         add r1,r1,r0
080013F4: 0a78         ldrb r2,[r1,#0x0]
080013F6: 012a         cmp r2,#0x1
080013F8: 02d0         beq 0x08001400
080013FA: 0820         mov r0,#0x8
080013FC: 1043         orr r0,r2
080013FE: 0870         strb r0,[r1,#0x0]
08001400: 01bc         pop {r0}
08001402: 0047         bx r0
