; undefined FUN_08001294(void)
; entry 0x8001294  size 32 bytes

08001294: 30b5         push {r4,r5,lr}
08001296: 074d         ldr r5,[0x080012b4]
08001298: 0024         mov r4,#0x0
0800129A: 2878         ldrb r0,[r5,#0x0]
0800129C: 0128         cmp r0,#0x1
0800129E: 02d0         beq 0x080012a6
080012A0: 201c         add r0,r4,#0x0
080012A2: 00f075f8     bl 0x08001390
080012A6: 0134         add r4,#0x1
080012A8: 1835         add r5,#0x18
080012AA: 022c         cmp r4,#0x2
080012AC: f5dd         ble 0x0800129a
080012AE: 30bc         pop {r4,r5}
080012B0: 01bc         pop {r0}
080012B2: 0047         bx r0
