; undefined FUN_080a9cac(void)
; entry 0x80a9cac  size 24 bytes

080A9CAC: 00b5         push {lr}
080A9CAE: 011c         add r1,r0,#0x0
080A9CB0: 887c         ldrb r0,[r1,#0x12]
080A9CB2: 0028         cmp r0,#0x0
080A9CB4: 03d0         beq 0x080a9cbe
080A9CB6: 0138         sub r0,#0x1
080A9CB8: 8874         strb r0,[r1,#0x12]
080A9CBA: 0020         mov r0,#0x0
080A9CBC: 00e0         b 0x080a9cc0
080A9CBE: 0120         mov r0,#0x1
080A9CC0: 02bc         pop {r1}
080A9CC2: 0847         bx r1
