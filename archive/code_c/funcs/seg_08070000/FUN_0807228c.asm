; undefined FUN_0807228c(void)
; entry 0x807228c  size 28 bytes

0807228C: 00b5         push {lr}
0807228E: 0022         mov r2,#0x0
08072290: 1921         mov r1,#0x19
08072292: 8173         strb r1,[r0,#0xe]
08072294: c273         strb r2,[r0,#0xf]
08072296: 044a         ldr r2,[0x080722a8]
08072298: 417b         ldrb r1,[r0,#0xd]
0807229A: 8900         lsl r1,r1,#0x2
0807229C: 8918         add r1,r1,r2
0807229E: 0968         ldr r1,[r1,#0x0]
080722A0: b6f06efe     bl 0x08128f80
080722A4: 01bc         pop {r0}
080722A6: 0047         bx r0
