; undefined FUN_080ca570(void)
; entry 0x80ca570  size 64 bytes

080CA570: 00b5         push {lr}
080CA572: 021c         add r2,r0,#0x0
080CA574: 8c30         add r0,#0x8c
080CA576: 0068         ldr r0,[r0,#0x0]
080CA578: 8021         mov r1,#0x80
080CA57A: 8900         lsl r1,r1,#0x2
080CA57C: 0840         and r0,r1
080CA57E: 0028         cmp r0,#0x0
080CA580: 0ed0         beq 0x080ca5a0
080CA582: 0649         ldr r1,[0x080ca59c]
080CA584: 507a         ldrb r0,[r2,#0x9]
080CA586: 8000         lsl r0,r0,#0x2
080CA588: 4018         add r0,r0,r1
080CA58A: 0221         mov r1,#0x2
080CA58C: d160         str r1,[r2,#0xc]
080CA58E: 0068         ldr r0,[r0,#0x0]
080CA590: 8068         ldr r0,[r0,#0x8]
080CA592: 5061         str r0,[r2,#0x14]
080CA594: 101c         add r0,r2,#0x0
080CA596: 00f00ff8     bl 0x080ca5b8
080CA59A: 09e0         b 0x080ca5b0
080CA5A0: 0448         ldr r0,[0x080ca5b4]
080CA5A2: 117c         ldrb r1,[r2,#0x10]
080CA5A4: 8900         lsl r1,r1,#0x2
080CA5A6: 0918         add r1,r1,r0
080CA5A8: 0968         ldr r1,[r1,#0x0]
080CA5AA: 101c         add r0,r2,#0x0
080CA5AC: 5ef0e8fc     bl 0x08128f80
080CA5B0: 01bc         pop {r0}
080CA5B2: 0047         bx r0
