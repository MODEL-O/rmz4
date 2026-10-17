; undefined FUN_080a2380(void)
; entry 0x80a2380  size 52 bytes

080A2380: 00b5         push {lr}
080A2382: 4169         ldr r1,[r0,#0x14]
080A2384: 0120         mov r0,#0x1
080A2386: 0840         and r0,r1
080A2388: 0028         cmp r0,#0x0
080A238A: 11d0         beq 0x080a23b0
080A238C: 8020         mov r0,#0x80
080A238E: 8000         lsl r0,r0,#0x2
080A2390: 0840         and r0,r1
080A2392: 0028         cmp r0,#0x0
080A2394: 0cd0         beq 0x080a23b0
080A2396: 8020         mov r0,#0x80
080A2398: 8002         lsl r0,r0,#0xa
080A239A: 0140         and r1,r0
080A239C: 0029         cmp r1,#0x0
080A239E: 07d0         beq 0x080a23b0
080A23A0: 0448         ldr r0,[0x080a23b4]
080A23A2: 0068         ldr r0,[r0,#0x0]
080A23A4: 0028         cmp r0,#0x0
080A23A6: 03d0         beq 0x080a23b0
080A23A8: 0521         mov r1,#0x5
080A23AA: 0022         mov r2,#0x0
080A23AC: 98f7e4f8     bl 0x0803a578
080A23B0: 01bc         pop {r0}
080A23B2: 0047         bx r0
