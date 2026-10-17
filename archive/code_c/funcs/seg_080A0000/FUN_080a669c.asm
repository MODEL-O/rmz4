; undefined FUN_080a669c(void)
; entry 0x80a669c  size 24 bytes

080A669C: 00b5         push {lr}
080A669E: 011c         add r1,r0,#0x0
080A66A0: 887c         ldrb r0,[r1,#0x12]
080A66A2: 0028         cmp r0,#0x0
080A66A4: 03d0         beq 0x080a66ae
080A66A6: 0138         sub r0,#0x1
080A66A8: 8874         strb r0,[r1,#0x12]
080A66AA: 0020         mov r0,#0x0
080A66AC: 00e0         b 0x080a66b0
080A66AE: 0120         mov r0,#0x1
080A66B0: 02bc         pop {r1}
080A66B2: 0847         bx r1
