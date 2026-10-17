; undefined FUN_080d985c(void)
; entry 0x80d985c  size 48 bytes

080D985C: 10b5         push {r4,lr}
080D985E: 041c         add r4,r0,#0x0
080D9860: 43f7c6fb     bl 0x0801cff0
080D9864: 201c         add r0,r4,#0x0
080D9866: 7330         add r0,#0x73
080D9868: 0078         ldrb r0,[r0,#0x0]
080D986A: 0328         cmp r0,#0x3
080D986C: 0bd1         bne 0x080d9886
080D986E: 0749         ldr r1,[0x080d988c]
080D9870: 607a         ldrb r0,[r4,#0x9]
080D9872: 8000         lsl r0,r0,#0x2
080D9874: 4018         add r0,r0,r1
080D9876: 0221         mov r1,#0x2
080D9878: e160         str r1,[r4,#0xc]
080D987A: 0068         ldr r0,[r0,#0x0]
080D987C: 8068         ldr r0,[r0,#0x8]
080D987E: 6061         str r0,[r4,#0x14]
080D9880: 201c         add r0,r4,#0x0
080D9882: fff749fe     bl 0x080d9518
080D9886: 10bc         pop {r4}
080D9888: 01bc         pop {r0}
080D988A: 0047         bx r0
