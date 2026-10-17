; undefined FUN_08001390(void)
; entry 0x8001390  size 26 bytes

08001390: 00b5         push {lr}
08001392: 4100         lsl r1,r0,#0x1
08001394: 0918         add r1,r1,r0
08001396: c900         lsl r1,r1,#0x3
08001398: 0448         ldr r0,[0x080013ac]
0800139A: 0918         add r1,r1,r0
0800139C: 0878         ldrb r0,[r1,#0x0]
0800139E: 0128         cmp r0,#0x1
080013A0: 01d0         beq 0x080013a6
080013A2: 0120         mov r0,#0x1
080013A4: 0870         strb r0,[r1,#0x0]
080013A6: 01bc         pop {r0}
080013A8: 0047         bx r0
