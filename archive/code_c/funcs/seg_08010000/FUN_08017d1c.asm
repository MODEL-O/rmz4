; undefined FUN_08017d1c(void)
; entry 0x8017d1c  size 26 bytes

08017D1C: 10b5         push {r4,lr}
08017D1E: 041c         add r4,r0,#0x0
08017D20: a07b         ldrb r0,[r4,#0xe]
08017D22: 0428         cmp r0,#0x4
08017D24: 70d8         bhi 0x08017e08
08017D26: 8000         lsl r0,r0,#0x2
08017D28: 0149         ldr r1,[0x08017d30]
08017D2A: 4018         add r0,r0,r1
08017D2C: 0068         ldr r0,[r0,#0x0]
08017D2E: 8746         mov pc,r0
08017E08: 10bc         pop {r4}
08017E0A: 01bc         pop {r0}
08017E0C: 0047         bx r0
