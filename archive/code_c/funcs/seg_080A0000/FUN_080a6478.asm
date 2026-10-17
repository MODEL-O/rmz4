; undefined FUN_080a6478(void)
; entry 0x80a6478  size 40 bytes

080A6478: 10b5         push {r4,lr}
080A647A: 041c         add r4,r0,#0x0
080A647C: a07b         ldrb r0,[r4,#0xe]
080A647E: 0028         cmp r0,#0x0
080A6480: 01d1         bne 0x080a6486
080A6482: 0130         add r0,#0x1
080A6484: a073         strb r0,[r4,#0xe]
080A6486: 201c         add r0,r4,#0x0
080A6488: 00f008f9     bl 0x080a669c
080A648C: 0006         lsl r0,r0,#0x18
080A648E: 0028         cmp r0,#0x0
080A6490: 03d0         beq 0x080a649a
080A6492: 0021         mov r1,#0x0
080A6494: 0120         mov r0,#0x1
080A6496: 6073         strb r0,[r4,#0xd]
080A6498: a173         strb r1,[r4,#0xe]
080A649A: 10bc         pop {r4}
080A649C: 01bc         pop {r0}
080A649E: 0047         bx r0
