; undefined FUN_080d4314(void)
; entry 0x80d4314  size 30 bytes

080D4314: 00b5         push {lr}
080D4316: 021c         add r2,r0,#0x0
080D4318: 907c         ldrb r0,[r2,#0x12]
080D431A: 0130         add r0,#0x1
080D431C: 9074         strb r0,[r2,#0x12]
080D431E: 907b         ldrb r0,[r2,#0xe]
080D4320: 0428         cmp r0,#0x4
080D4322: 35d8         bhi 0x080d4390
080D4324: 8000         lsl r0,r0,#0x2
080D4326: 0249         ldr r1,[0x080d4330]
080D4328: 4018         add r0,r0,r1
080D432A: 0068         ldr r0,[r0,#0x0]
080D432C: 8746         mov pc,r0
080D4390: 01bc         pop {r0}
080D4392: 0047         bx r0
