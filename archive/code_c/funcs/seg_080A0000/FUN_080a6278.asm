; undefined FUN_080a6278(void)
; entry 0x80a6278  size 72 bytes

080A6278: 70b5         push {r4,r5,r6,lr}
080A627A: 041c         add r4,r0,#0x0
080A627C: 6069         ldr r0,[r4,#0x14]
080A627E: 0126         mov r6,#0x1
080A6280: 3040         and r0,r6
080A6282: 0028         cmp r0,#0x0
080A6284: 19d0         beq 0x080a62ba
080A6286: e56a         ldr r5,[r4,#0x2c]
080A6288: 1920         mov r0,#0x19
080A628A: 60f77bfb     bl 0x08006984
080A628E: 6169         ldr r1,[r4,#0x14]
080A6290: 8020         mov r0,#0x80
080A6292: 8000         lsl r0,r0,#0x2
080A6294: 0840         and r0,r1
080A6296: 0028         cmp r0,#0x0
080A6298: 0fd0         beq 0x080a62ba
080A629A: 8020         mov r0,#0x80
080A629C: 8002         lsl r0,r0,#0xa
080A629E: 0140         and r1,r0
080A62A0: 0029         cmp r1,#0x0
080A62A2: 0ad0         beq 0x080a62ba
080A62A4: 281c         add r0,r5,#0x0
080A62A6: b430         add r0,#0xb4
080A62A8: 0670         strb r6,[r0,#0x0]
080A62AA: 0548         ldr r0,[0x080a62c0]
080A62AC: 0068         ldr r0,[r0,#0x0]
080A62AE: 0028         cmp r0,#0x0
080A62B0: 03d0         beq 0x080a62ba
080A62B2: 0521         mov r1,#0x5
080A62B4: 0422         mov r2,#0x4
080A62B6: 94f75ff9     bl 0x0803a578
080A62BA: 70bc         pop {r4,r5,r6}
080A62BC: 01bc         pop {r0}
080A62BE: 0047         bx r0
