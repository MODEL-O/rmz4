; undefined FUN_080fb398(void)
; entry 0x80fb398  size 72 bytes

080FB398: 70b5         push {r4,r5,r6,lr}
080FB39A: 041c         add r4,r0,#0x0
080FB39C: 6069         ldr r0,[r4,#0x14]
080FB39E: 0126         mov r6,#0x1
080FB3A0: 3040         and r0,r6
080FB3A2: 0028         cmp r0,#0x0
080FB3A4: 19d0         beq 0x080fb3da
080FB3A6: e56a         ldr r5,[r4,#0x2c]
080FB3A8: 2320         mov r0,#0x23
080FB3AA: 0bf7ebfa     bl 0x08006984
080FB3AE: 6169         ldr r1,[r4,#0x14]
080FB3B0: 8020         mov r0,#0x80
080FB3B2: 8000         lsl r0,r0,#0x2
080FB3B4: 0840         and r0,r1
080FB3B6: 0028         cmp r0,#0x0
080FB3B8: 0fd0         beq 0x080fb3da
080FB3BA: 8020         mov r0,#0x80
080FB3BC: 8002         lsl r0,r0,#0xa
080FB3BE: 0140         and r1,r0
080FB3C0: 0029         cmp r1,#0x0
080FB3C2: 0ad0         beq 0x080fb3da
080FB3C4: 281c         add r0,r5,#0x0
080FB3C6: b530         add r0,#0xb5
080FB3C8: 0670         strb r6,[r0,#0x0]
080FB3CA: 0548         ldr r0,[0x080fb3e0]
080FB3CC: 0068         ldr r0,[r0,#0x0]
080FB3CE: 0028         cmp r0,#0x0
080FB3D0: 03d0         beq 0x080fb3da
080FB3D2: 0721         mov r1,#0x7
080FB3D4: 0122         mov r2,#0x1
080FB3D6: 3ff7cff8     bl 0x0803a578
080FB3DA: 70bc         pop {r4,r5,r6}
080FB3DC: 01bc         pop {r0}
080FB3DE: 0047         bx r0
