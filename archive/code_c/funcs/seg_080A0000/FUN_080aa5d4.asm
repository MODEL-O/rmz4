; undefined FUN_080aa5d4(void)
; entry 0x80aa5d4  size 72 bytes

080AA5D4: 70b5         push {r4,r5,r6,lr}
080AA5D6: 041c         add r4,r0,#0x0
080AA5D8: 6069         ldr r0,[r4,#0x14]
080AA5DA: 0126         mov r6,#0x1
080AA5DC: 3040         and r0,r6
080AA5DE: 0028         cmp r0,#0x0
080AA5E0: 19d0         beq 0x080aa616
080AA5E2: e56a         ldr r5,[r4,#0x2c]
080AA5E4: 1420         mov r0,#0x14
080AA5E6: 5cf7cdf9     bl 0x08006984
080AA5EA: 6169         ldr r1,[r4,#0x14]
080AA5EC: 8020         mov r0,#0x80
080AA5EE: 8000         lsl r0,r0,#0x2
080AA5F0: 0840         and r0,r1
080AA5F2: 0028         cmp r0,#0x0
080AA5F4: 0fd0         beq 0x080aa616
080AA5F6: 8020         mov r0,#0x80
080AA5F8: 8002         lsl r0,r0,#0xa
080AA5FA: 0140         and r1,r0
080AA5FC: 0029         cmp r1,#0x0
080AA5FE: 0ad0         beq 0x080aa616
080AA600: 281c         add r0,r5,#0x0
080AA602: b530         add r0,#0xb5
080AA604: 0670         strb r6,[r0,#0x0]
080AA606: 0548         ldr r0,[0x080aa61c]
080AA608: 0068         ldr r0,[r0,#0x0]
080AA60A: 0028         cmp r0,#0x0
080AA60C: 03d0         beq 0x080aa616
080AA60E: 0421         mov r1,#0x4
080AA610: 0322         mov r2,#0x3
080AA612: 8ff7b1ff     bl 0x0803a578
080AA616: 70bc         pop {r4,r5,r6}
080AA618: 01bc         pop {r0}
080AA61A: 0047         bx r0
