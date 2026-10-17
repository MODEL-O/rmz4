; undefined FUN_080a1e94(void)
; entry 0x80a1e94  size 72 bytes

080A1E94: 70b5         push {r4,r5,r6,lr}
080A1E96: 041c         add r4,r0,#0x0
080A1E98: 6069         ldr r0,[r4,#0x14]
080A1E9A: 0126         mov r6,#0x1
080A1E9C: 3040         and r0,r6
080A1E9E: 0028         cmp r0,#0x0
080A1EA0: 19d0         beq 0x080a1ed6
080A1EA2: e56a         ldr r5,[r4,#0x2c]
080A1EA4: 0a20         mov r0,#0xa
080A1EA6: 64f76dfd     bl 0x08006984
080A1EAA: 6169         ldr r1,[r4,#0x14]
080A1EAC: 8020         mov r0,#0x80
080A1EAE: 8000         lsl r0,r0,#0x2
080A1EB0: 0840         and r0,r1
080A1EB2: 0028         cmp r0,#0x0
080A1EB4: 0fd0         beq 0x080a1ed6
080A1EB6: 8020         mov r0,#0x80
080A1EB8: 8002         lsl r0,r0,#0xa
080A1EBA: 0140         and r1,r0
080A1EBC: 0029         cmp r1,#0x0
080A1EBE: 0ad0         beq 0x080a1ed6
080A1EC0: 281c         add r0,r5,#0x0
080A1EC2: b630         add r0,#0xb6
080A1EC4: 0670         strb r6,[r0,#0x0]
080A1EC6: 0548         ldr r0,[0x080a1edc]
080A1EC8: 0068         ldr r0,[r0,#0x0]
080A1ECA: 0028         cmp r0,#0x0
080A1ECC: 03d0         beq 0x080a1ed6
080A1ECE: 0621         mov r1,#0x6
080A1ED0: 0722         mov r2,#0x7
080A1ED2: 98f751fb     bl 0x0803a578
080A1ED6: 70bc         pop {r4,r5,r6}
080A1ED8: 01bc         pop {r0}
080A1EDA: 0047         bx r0
