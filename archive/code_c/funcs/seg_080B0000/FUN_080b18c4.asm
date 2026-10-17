; undefined FUN_080b18c4(void)
; entry 0x80b18c4  size 72 bytes

080B18C4: 70b5         push {r4,r5,r6,lr}
080B18C6: 041c         add r4,r0,#0x0
080B18C8: 6069         ldr r0,[r4,#0x14]
080B18CA: 0126         mov r6,#0x1
080B18CC: 3040         and r0,r6
080B18CE: 0028         cmp r0,#0x0
080B18D0: 19d0         beq 0x080b1906
080B18D2: e56a         ldr r5,[r4,#0x2c]
080B18D4: 0520         mov r0,#0x5
080B18D6: 55f755f8     bl 0x08006984
080B18DA: 6169         ldr r1,[r4,#0x14]
080B18DC: 8020         mov r0,#0x80
080B18DE: 8000         lsl r0,r0,#0x2
080B18E0: 0840         and r0,r1
080B18E2: 0028         cmp r0,#0x0
080B18E4: 0fd0         beq 0x080b1906
080B18E6: 8020         mov r0,#0x80
080B18E8: 8002         lsl r0,r0,#0xa
080B18EA: 0140         and r1,r0
080B18EC: 0029         cmp r1,#0x0
080B18EE: 0ad0         beq 0x080b1906
080B18F0: 281c         add r0,r5,#0x0
080B18F2: b430         add r0,#0xb4
080B18F4: 0670         strb r6,[r0,#0x0]
080B18F6: 0548         ldr r0,[0x080b190c]
080B18F8: 0068         ldr r0,[r0,#0x0]
080B18FA: 0028         cmp r0,#0x0
080B18FC: 03d0         beq 0x080b1906
080B18FE: 0321         mov r1,#0x3
080B1900: 1122         mov r2,#0x11
080B1902: 88f739fe     bl 0x0803a578
080B1906: 70bc         pop {r4,r5,r6}
080B1908: 01bc         pop {r0}
080B190A: 0047         bx r0
